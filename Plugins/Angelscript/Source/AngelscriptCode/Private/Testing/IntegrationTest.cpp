#include "AngelscriptBinds.h"
#include "AngelscriptDocs.h"
#include "AngelscriptManager.h"
#include "AngelscriptTestSettings.h"
#include "AngelscriptSettings.h"
#include "Binds/Bind_Debugging.h"

#if WITH_EDITOR
#include "AngelscriptSettings.h"
#include "Editor/EditorPerformanceSettings.h"
#include "FileHelpers.h"
#include "IAutomationControllerModule.h"
#include "Settings/LevelEditorPlaySettings.h"
#include "UnrealEdMisc.h"
#endif // WITH_EDITOR

#include "Containers/UnrealString.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"
#include "HAL/Platform.h"
#include "Misc/AutomationTest.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Templates/Models.h"
#include "Testing/AngelscriptTest.h"
#include "Testing/IntegrationTestTerminator.h"
#include "Testing/LatentAutomationCommand.h"
#include "Testing/LatentAutomationCommandClientExecutor.h"
#include "Tests/AutomationCommon.h"
#include "GameFramework/PlayerController.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
#include "source/as_context.h"
#include "EndAngelscriptHeaders.h"

const float DEFAULT_LATENT_COMMAND_TIMEOUT = 5.0f;

class FLatentCommandContext
{
public:
	FLatentCommandContext(int DefinitionLine, int DefinitionColumn, const UWorld* World, float TimeoutSecs)
		: bStarted(false), DefinitionLine(DefinitionLine), DefinitionColumn(DefinitionColumn), LatentActionStartedAt(0.0f), LastLoggedStatusAt(0.0f), LastTickStartedAt(0.0f), FpsCounter(0), World(World), TimeoutSecs(TimeoutSecs)
	{
	}

	void StartAction()
	{
		// Action timeouts should not be affected by time dilation or pausing - a dev
		// can pause a test to examine it. See documentation for UWorld::AudioTimeSeconds.
		double Now = World->AudioTimeSeconds;
		LatentActionStartedAt = Now;
		LastLoggedStatusAt = Now;
		LastTickStartedAt = Now;
		bStarted = true;
	}

	bool Started() const
	{
		return bStarted;
	}

	// Workaround for lag when the first test runs.
	void CheckForAbsurdTimeJumps()
	{
		float Delta = World->AudioTimeSeconds - LastTickStartedAt;
		if (Delta > DEFAULT_LATENT_COMMAND_TIMEOUT / 2)
		{
			UE_LOG(Angelscript, Warning, TEXT("A single tick took %f seconds, that can't be right."), Delta);
			LatentActionStartedAt += Delta;
		}
		LastTickStartedAt = World->AudioTimeSeconds;
	}

	bool TimedOut() const
	{
		double Elapsed = World->AudioTimeSeconds - LatentActionStartedAt;
		return Elapsed > TimeoutSecs;
	}

	bool ShouldLogProgress()
	{
		double Elapsed = World->AudioTimeSeconds - LastLoggedStatusAt;
		if (Elapsed > 1.0f)
		{
			LastLoggedStatusAt = World->AudioTimeSeconds;
			return true;
		}
		return false;
	}

	void GetSavedLineAndColumn(int& Line, int& Column) const
	{
		Line = DefinitionLine;
		Column = DefinitionColumn;
	}

	void TickFpsCounter()
	{
		FpsCounter++;
	}

	float GetFpsDuringThisCommand()
	{
		double Elapsed = World->AudioTimeSeconds - LatentActionStartedAt;
		return FpsCounter / Elapsed;
	}

private:
	bool bStarted;

	int DefinitionLine;
	int DefinitionColumn;

	double LatentActionStartedAt;
	double LastLoggedStatusAt;
	double LastTickStartedAt;
	int FpsCounter;

	const UWorld* World;

	float TimeoutSecs;
};

enum class EClientLatentCommandState
{
	CREATE_CLIENT_EXECUTOR,
	SETUP,
	SETUP_CLIENT,
	EXECUTE,
	FINISH,
	FINISH_CLIENT,
	DONE
};

class FLatentCommandClientStateMachine
{
public:
	FLatentCommandClientStateMachine()
		: CurrentState(EClientLatentCommandState::CREATE_CLIENT_EXECUTOR), bServerSuccess(false), bClientSuccess(false)
	{
	}

	EClientLatentCommandState GetCurrentState() const
	{
		return CurrentState;
	}

	EClientLatentCommandState SetCurrentState(EClientLatentCommandState NewState)
	{
		return CurrentState = NewState;
	}

	void SetServerSuccess(bool success)
	{
		bServerSuccess = success;
	}

	void SetClientSuccess(bool success)
	{
		bClientSuccess = success;
	}

	bool ServerSuccess() const
	{
		return bServerSuccess;
	}

	bool ClientSuccess() const
	{
		return bClientSuccess;
	}

private:
	EClientLatentCommandState CurrentState;
	bool bServerSuccess;
	bool bClientSuccess;
};

/**
 * Integration tests have the same asserts as a unit test, but also adds
 * latent automation commands.
 */
class FAngelscriptIntegrationTest : public FAngelscriptTest, public TSharedFromThis<FAngelscriptIntegrationTest>
{
public:
	FAngelscriptIntegrationTest(FAngelscriptModuleDesc* Module, FAngelscriptTestDesc& TestFunctionDesc,
		FAngelscriptManager* AngelscriptManager)
		: FAngelscriptTest(Module, TestFunctionDesc.Function, AngelscriptManager), TestFunctionDesc(TestFunctionDesc)
	{
	}

	void ReportErrorInAction(const FString& Message, const FLatentCommandContext& Context)
	{
		int Line;
		int Column;
		Context.GetSavedLineAndColumn(Line, Column);
		ReportError(Message, Line, Column);
	}

	FLatentCommandContext DefineLatentCommand(const UWorld* World, float TimeoutSecs)
	{
		int Line;
		int Column;

		GetCurrentLineAndColumn(Line, Column);
		return FLatentCommandContext(Line, Column, World, TimeoutSecs);
	}

	/**
	 * Keep a latent command while the test is running in memory so it's not garbage collected.
	 *
	 * @param LatentCommand	The latent command to remember.
	 */
	void RememberLatentCommand(ULatentAutomationCommand* LatentCommand)
	{
		LatentCommand->AddToRoot();
		LatentCommands.Add(LatentCommand);
	}

	FAngelscriptTestDesc TestFunctionDesc;

	// Drop all remembered commands from the root set so they can be garbage collected.
	void ForgetLatentCommands()
	{
		while (LatentCommands.Num() > 0)
		{
			ULatentAutomationCommand* LatentCommand = LatentCommands.Pop();
			LatentCommand->RemoveFromRoot();
		}
	}

	// Implementation note: these are all in the root set, but they also hold a pointer back
	// to this struct via SetCurrentTest. Therefore these will be garbage collected first
	// after they are dropped from the root set, and when they thereby drop their pointers
	// back to this struct, it itself can be freed.
	TArray<ULatentAutomationCommand*> LatentCommands;
};

// This struct keeps the state of one executing test in memory. All state related to the
// test must be in here. Note that this struct doesn't _own_ the test, it merely holds
// a shared pointer to it to ensure the FAngelscriptIntegrationTest instance on the heap
// stays alive. Note that it would be held alive by any ULatentAutomationCommand instances,
// but a test doesn't necessarily have latent commands!
struct FTestInMemory
{
	FTestInMemory(TSharedPtr<FAngelscriptIntegrationTest> InTest) : Test(InTest) {}
	FTestInMemory(FTestInMemory& Other) = delete;

	TSharedPtr<FAngelscriptIntegrationTest> Test;
};


struct FEditorState
{
	int WindowWidth;
	int WindowHeight;

	bool bEnableNetworkEmulation;
	int InPacketsMinLatency;
	int InPacketsMaxLatency;
	int InPacketsPacketLossPercentage;
	int OutPacketsMinLatency;
	int OutPacketsMaxLatency;
	int OutPacketsPacketLossPercentage;

#if WITH_EDITOR
	EPlayNetMode NetMode;
	bool bAutoRecompileBlueprints;
	float EditorMaximumScriptExecutionTime;
#endif // WITH_EDITOR
};

void ConfigureEditorForTest(FEditorState& OutOriginalState)
{
#if WITH_EDITOR
	UAngelscriptSettings* AngelscriptSettings = GetMutableDefault<UAngelscriptSettings>();
	OutOriginalState.EditorMaximumScriptExecutionTime = AngelscriptSettings->EditorMaximumScriptExecutionTime;
	AngelscriptSettings->EditorMaximumScriptExecutionTime = 300.0f;

	// To give the tests a predictable environment: ignore any user settings for the game server.
	ULevelEditorPlaySettings* PlayInSettings = GetMutableDefault<ULevelEditorPlaySettings>();
	PlayInSettings->GetPlayNetMode(OutOriginalState.NetMode);

	// Work around a bug where the window size gets slightly smaller for each test.
	// Note: we will force the center-new-window setting to true, otherwise PlayLevel.cpp
	// will overwrite our restored window size. I reckon forcing centered is less annoying
	// than forcing the PIE window size.
	OutOriginalState.WindowWidth = PlayInSettings->NewWindowWidth;
	OutOriginalState.WindowHeight = PlayInSettings->NewWindowHeight;
	PlayInSettings->CenterNewWindow = true;
	PlayInSettings->NewWindowWidth = 0;
	PlayInSettings->NewWindowHeight = 0;

	// Don't recompile unrelated blueprints before running tests (this could recompile stuff in
	// dev folders, for instance, and we're not interested in those errors).
	OutOriginalState.bAutoRecompileBlueprints = PlayInSettings->AutoRecompileBlueprints;
	PlayInSettings->AutoRecompileBlueprints = false;

	// Integration tests run in netmode "client" because it's more realistic.
	// Replication and client/server diferences for actors are exercised in this way.
	PlayInSettings->SetPlayNetMode(EPlayNetMode::PIE_Client);

	OutOriginalState.bEnableNetworkEmulation = PlayInSettings->IsNetworkEmulationEnabled();
	OutOriginalState.InPacketsMinLatency = PlayInSettings->NetworkEmulationSettings.InPackets.MinLatency;
	OutOriginalState.InPacketsMaxLatency = PlayInSettings->NetworkEmulationSettings.InPackets.MaxLatency;
	OutOriginalState.InPacketsPacketLossPercentage = PlayInSettings->NetworkEmulationSettings.InPackets.PacketLossPercentage;
	OutOriginalState.OutPacketsMinLatency = PlayInSettings->NetworkEmulationSettings.OutPackets.MinLatency;
	OutOriginalState.OutPacketsMaxLatency = PlayInSettings->NetworkEmulationSettings.OutPackets.MaxLatency;
	OutOriginalState.OutPacketsPacketLossPercentage = PlayInSettings->NetworkEmulationSettings.OutPackets.PacketLossPercentage;
	const UAngelscriptTestSettings* TestSettings = GetDefault<UAngelscriptTestSettings>();
	PlayInSettings->NetworkEmulationSettings.bIsNetworkEmulationEnabled = TestSettings->bEnableNetworkEmulation;
	PlayInSettings->NetworkEmulationSettings.InPackets.MinLatency = TestSettings->InPacketsMinLatency;
	PlayInSettings->NetworkEmulationSettings.InPackets.MaxLatency = TestSettings->InPacketsMaxLatency;
	PlayInSettings->NetworkEmulationSettings.InPackets.PacketLossPercentage = TestSettings->InPacketsPacketLossPercentage;
	PlayInSettings->NetworkEmulationSettings.OutPackets.MinLatency = TestSettings->OutPacketsMinLatency;
	PlayInSettings->NetworkEmulationSettings.OutPackets.MaxLatency = TestSettings->OutPacketsMaxLatency;
	PlayInSettings->NetworkEmulationSettings.OutPackets.PacketLossPercentage = TestSettings->OutPacketsPacketLossPercentage;

	if (FParse::Param(FCommandLine::Get(), TEXT("NullRHI")))
	{
		// Don't try to save the windows that get launched for integration tests. This is only a
		// problem in headless mode. This setting needs to be false all the way to shutdown so
		// we don't restore this one.
		FUnrealEdMisc::Get().AllowSavingLayoutOnClose(false);
	}

	// Don't trigger breakpoints on ensures since tests intentionally trigger ensures all the time.
	if (!GetDefault<UAngelscriptTestSettings>()->bEnableDebugBreaksInTests)
	{
		AngelscriptDisableDebugBreaks();
	}
#endif // WITH_EDITOR
}

void RestoreEditorAfterTest(const FEditorState& OriginalState)
{
#if WITH_EDITOR
	UAngelscriptSettings* AngelscriptSettings = GetMutableDefault<UAngelscriptSettings>();
	AngelscriptSettings->EditorMaximumScriptExecutionTime = OriginalState.EditorMaximumScriptExecutionTime;

	ULevelEditorPlaySettings* PlayInSettings = GetMutableDefault<ULevelEditorPlaySettings>();

	PlayInSettings->SetPlayNetMode(OriginalState.NetMode);
	PlayInSettings->NewWindowWidth = OriginalState.WindowWidth;
	PlayInSettings->NewWindowHeight = OriginalState.WindowHeight;
	PlayInSettings->AutoRecompileBlueprints = OriginalState.bAutoRecompileBlueprints;
	PlayInSettings->NetworkEmulationSettings.bIsNetworkEmulationEnabled = OriginalState.bEnableNetworkEmulation;
	PlayInSettings->NetworkEmulationSettings.InPackets.MinLatency = OriginalState.InPacketsMinLatency;
	PlayInSettings->NetworkEmulationSettings.InPackets.MaxLatency = OriginalState.InPacketsMaxLatency;
	PlayInSettings->NetworkEmulationSettings.InPackets.PacketLossPercentage = OriginalState.InPacketsPacketLossPercentage;
	PlayInSettings->NetworkEmulationSettings.OutPackets.MinLatency = OriginalState.OutPacketsMinLatency;
	PlayInSettings->NetworkEmulationSettings.OutPackets.MaxLatency = OriginalState.OutPacketsMaxLatency;
	PlayInSettings->NetworkEmulationSettings.OutPackets.PacketLossPercentage = OriginalState.OutPacketsPacketLossPercentage;
	AngelscriptEnableDebugBreaks();
#endif // WITH_EDITOR
}

// Copied from AutomationCommon.cpp. This heuristic must match the one in AutomationCommon.cpp
// for now; otherwise we have to re-implement the map loading code in there.
// NOTE: Careful about the usage of this in client tests - this will always return the server world.
// Use `FAngelscriptManager::CurrentWorldContext->GetWorld();` instead to get the correct world on clients and server.
UWorld* GetTestWorld()
{
	const TIndirectArray<FWorldContext>& WorldContexts = GEngine->GetWorldContexts();
	for (const FWorldContext& Context : WorldContexts)
	{
		if (((Context.WorldType == EWorldType::PIE) || (Context.WorldType == EWorldType::Game)) && (Context.World() != nullptr))
		{
			return Context.World();
		}
	}

	return nullptr;
}

DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(FEnsureWorldLoaded, FString, ModuleAndTestName, FString, MapName);

bool FEnsureWorldLoaded::Update()
{
	UWorld* World = GetTestWorld();
	if (!FString(MapName).EndsWith(World->GetName())) {
		FString ErrorMessage = FString::Printf(TEXT("%s: Failed to load map %s: got %s"), *ModuleAndTestName, *MapName, *World->GetName());

		// Report straight to the test framework here, we don't have a FAngelscriptIntegrationTest yet.
		FAutomationTestFramework::Get().GetCurrentTest()->AddError(ErrorMessage);
	}

	return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(FWaitReadyState, ATestTerminator*, Terminator);

bool FWaitReadyState::Update()
{
	return Terminator->Ready();
}

DEFINE_LATENT_AUTOMATION_COMMAND_ONE_PARAMETER(FExitTest, ATestTerminator*, Terminator);

bool FExitTest::Update()
{
	UWorld* World = GetTestWorld();
	if (World == nullptr)
	{
		// World already destroyed
		return true;
	}

	// Destroy the terminator to force a test exit
	if (Terminator->Ready())
	{
		Terminator->Destroy();
		Terminator->ConditionalBeginDestroy();

		return true;
	}

	return false;
}

DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(FCleanupTest, FTestInMemory*, TestInMemory, FEditorState*, OriginalState);

bool FCleanupTest::Update()
{
	// Wait for the test world to be cleaned up.
	if (GetTestWorld() != nullptr)
	{
#if WITH_EDITOR
		// Latency emulation will delay cleanup of a test world.
		ULevelEditorPlaySettings* PlayInSettings = GetMutableDefault<ULevelEditorPlaySettings>();
		if (PlayInSettings->IsNetworkEmulationEnabled())
		{
			const double InPacketsWaitTimeSeconds = 
				FMath::Max(PlayInSettings->NetworkEmulationSettings.InPackets.MinLatency,
						   PlayInSettings->NetworkEmulationSettings.InPackets.MaxLatency) / 1000.0;
			const double OutPacketsWaitTimeSeconds =
				FMath::Max(PlayInSettings->NetworkEmulationSettings.OutPackets.MinLatency,
						   PlayInSettings->NetworkEmulationSettings.OutPackets.MaxLatency) / 1000.0;
			const double CleanupWaitSeconds = InPacketsWaitTimeSeconds + OutPacketsWaitTimeSeconds;
			if (FPlatformTime::Seconds() - StartTime < CleanupWaitSeconds)
			{
				return false;
			}
		}
#endif
	}

	RestoreEditorAfterTest(*OriginalState);

	TestInMemory->Test->ForgetLatentCommands();

	delete OriginalState;
	delete TestInMemory;
	return true;
}

DEFINE_LATENT_AUTOMATION_COMMAND_THREE_PARAMETER(AngelscriptLatentCommand, FAngelscriptIntegrationTest&, T, FLatentCommandContext, Context, ULatentAutomationCommand&, LatentCommand);

bool AngelscriptLatentCommand::Update()
{
	// The log device in the automation framework will pick up any Angelscript errors either from asserts or otherwise.
	FAutomationTestBase* CurrentTest = FAutomationTestFramework::Get().GetCurrentTest();
	if (CurrentTest == nullptr || CurrentTest->HasAnyErrors())
	{
		UE_LOG(Angelscript, Display, TEXT("Skipping: '%s'; the test has already failed"), *LatentCommand.Describe());
		return true;
	}

	if (!Context.Started())
	{
		Context.StartAction();
		LatentCommand.Before();

		UE_LOG(Angelscript, Display, TEXT("Starting to wait for: '%s'"), *LatentCommand.Describe());
	}

	Context.TickFpsCounter();
	if (Context.ShouldLogProgress())
	{
		UE_LOG(Angelscript, Display, TEXT("Still waiting for %s. Current FPS %.2f."), *LatentCommand.Describe(), Context.GetFpsDuringThisCommand());
	}

	if (LatentCommand.Update())
	{
		UE_LOG(Angelscript, Display, TEXT("Satisfied: '%s'"), *LatentCommand.Describe());
		LatentCommand.After();
		return true;
	}

	Context.CheckForAbsurdTimeJumps();
	if (Context.TimedOut())
	{
		if (LatentCommand.AllowsTimeout())
		{
			UE_LOG(Angelscript, Display, TEXT("Done checking for '%s'. (Timeout was allowed)"), *LatentCommand.Describe());
		}
		else
		{
			FString ErrorMessage = FString::Printf(TEXT("Timed out waiting for: '%s'."), *LatentCommand.Describe());
			T.ReportErrorInAction(ErrorMessage, Context);
		}
		LatentCommand.After();
		return true;
	}
	return false;
}

DEFINE_LATENT_AUTOMATION_COMMAND_FIVE_PARAMETER(
	AngelscriptLatentCommandClient, FAngelscriptIntegrationTest&, T,
	FLatentCommandContext, Context,
	ULatentAutomationCommand&, LatentCommand,
	FLatentCommandClientStateMachine, ClientState,
	ALatentAutomationCommandClientExecutor*, ClientExecutor
);

bool AngelscriptLatentCommandClient::Update()
{
	// The log device in the automation framework will pick up any Angelscript errors either from asserts or otherwise.
	FAutomationTestBase* CurrentTest = FAutomationTestFramework::Get().GetCurrentTest();
	if (CurrentTest == nullptr || CurrentTest->HasAnyErrors())
	{
		UE_LOG(Angelscript, Display, TEXT("Skipping: '%s'; the test has already failed"), *LatentCommand.Describe());
		return true;
	}

	switch (ClientState.GetCurrentState())
	{
		case EClientLatentCommandState::CREATE_CLIENT_EXECUTOR:
		{
			APlayerController* Controller = GetTestWorld()->GetFirstPlayerController();

			// Wait for a player controller as we require one to be able to do replication.
			if (Controller == nullptr)
			{
				break;
			}

			// The checks will be done by a replicating Actor.
			// Set the owner to any available player controller so we get support for replication and RPCs.
			FActorSpawnParameters SpawnParms;
			SpawnParms.Owner = Controller;
			ClientExecutor = GetTestWorld()->SpawnActor<ALatentAutomationCommandClientExecutor>(ALatentAutomationCommandClientExecutor::StaticClass(), SpawnParms);
			ClientExecutor->SetTest(&LatentCommand);
			ClientState.SetCurrentState(EClientLatentCommandState::SETUP);
			break;
		}

		case EClientLatentCommandState::SETUP:
			// Run the server-side Before() and tell the client side to start running its before.
			Context.StartAction();
			LatentCommand.Before();

			UE_LOG(Angelscript, Display, TEXT("Starting to wait for: '%s'"), *LatentCommand.Describe());

			ClientExecutor->StartBefore();
			ClientState.SetCurrentState(EClientLatentCommandState::SETUP_CLIENT);
			break;

		case EClientLatentCommandState::SETUP_CLIENT:
			// Check the client-side Before() finished.
			if (ClientExecutor->Before())
			{
				UE_LOG(Angelscript, Display, TEXT("Starting to wait for (client): '%s'"), *ClientExecutor->Describe());
				ClientExecutor->StartUpdate();
				ClientState.SetCurrentState(EClientLatentCommandState::EXECUTE);
			}
			break;

		case EClientLatentCommandState::EXECUTE:
			// Run Update (server) and UpdateOnClient (client) until they succedd individually.
			// Transition to the next state when both functions have succedded.
			if (!ClientState.ServerSuccess())
			{
				if (LatentCommand.Update())
				{
					UE_LOG(Angelscript, Display, TEXT("Satisfied: '%s'"), *LatentCommand.Describe());
					ClientState.SetServerSuccess(true);
				}
			}

			if (!ClientState.ClientSuccess())
			{
				if (ClientExecutor->Update())
				{
					UE_LOG(Angelscript, Display, TEXT("Satisfied (client): '%s'"), *ClientExecutor->Describe());
					ClientState.SetClientSuccess(true);
				}
			}

			if (ClientState.ServerSuccess() && ClientState.ClientSuccess())
			{
				ClientExecutor->StartAfter();
				ClientState.SetCurrentState(EClientLatentCommandState::FINISH);
			}
			break;

		case EClientLatentCommandState::FINISH:
			// Run the server-side After().
			LatentCommand.After();
			ClientState.SetCurrentState(EClientLatentCommandState::FINISH_CLIENT);
			break;

		case EClientLatentCommandState::FINISH_CLIENT:
			// Check the client-side After() finished.
			if (ClientExecutor->After())
			{
				ClientState.SetCurrentState(EClientLatentCommandState::DONE);
			}
			break;

		case EClientLatentCommandState::DONE:
			ClientExecutor->Destroy();
			return true;
			break;
	}

	// Handle progress logs
	Context.TickFpsCounter();
	if (ClientState.GetCurrentState() != EClientLatentCommandState::DONE && Context.ShouldLogProgress())
	{
		if (!ClientState.ServerSuccess())
		{
			UE_LOG(Angelscript, Display, TEXT("Still waiting for %s. Current FPS %.2f."), *LatentCommand.Describe(), Context.GetFpsDuringThisCommand());
		}
		
		if (!ClientState.ClientSuccess())
		{
			UE_LOG(Angelscript, Display, TEXT("Still waiting for %s."), *ClientExecutor->Describe());
		}
	}

	// Handle timeouts
	Context.CheckForAbsurdTimeJumps();
	if (Context.TimedOut() &&
		ClientState.GetCurrentState() != EClientLatentCommandState::FINISH &&
		ClientState.GetCurrentState() != EClientLatentCommandState::FINISH_CLIENT)
	{
		if (LatentCommand.AllowsTimeout())
		{
			UE_LOG(Angelscript, Display, TEXT("Done checking for '%s'. (Timeout was allowed)"), *LatentCommand.Describe());
			UE_LOG(Angelscript, Display, TEXT("Done checking for '%s' (client). (Timeout was allowed)"), *ClientExecutor->Describe());
		}
		else
		{
			FString ErrorMessage = FString::Printf(TEXT("Timed out waiting for: '%s'."), *LatentCommand.Describe());
			T.ReportErrorInAction(ErrorMessage, Context);

			ErrorMessage = FString::Printf(TEXT("Timed out waiting for (client): '%s'."), *ClientExecutor->Describe());
			T.ReportErrorInAction(ErrorMessage, Context);
		}

		ClientState.SetCurrentState(EClientLatentCommandState::FINISH);
	}

	return false;
}

void BindAddLatentAutomationCommand(FAngelscriptBinds& T)
{
	const FString Signature = FString::Printf(TEXT("void AddLatentAutomationCommand(ULatentAutomationCommand LatentCommand, float32 TimeoutSecs=%f)"), DEFAULT_LATENT_COMMAND_TIMEOUT);
	T.Method(Signature, [](FAngelscriptIntegrationTest& Self, ULatentAutomationCommand& LatentCommand, float TimeoutSecs) {
		if (!WithEditor())
		{
			return;
		}

		UWorld* TestWorld = GetTestWorld();

		// Associate the latent command with our test.
		LatentCommand.SetWorld(TestWorld);
		LatentCommand.SetAssociatedTest(Self.AsShared());

		// Add the latent command to the Unreal root set while the test runs. There will be zero refs to
		// it when this function returns otherwise. There isn't really a rooted UObject we can attach
		// to - that would be more elegant. Also remember which line and column this AngelscriptLatentCommand was made
		// on so we can point back to it if there's an error later.
		Self.RememberLatentCommand(&LatentCommand);
		FLatentCommandContext Context = Self.DefineLatentCommand(TestWorld, TimeoutSecs);

		if (TimeoutSecs > 15.0f)
		{
			Self.ReportErrorInAction("Latent command timeouts can't be longer than 15s. Try speeding up your test scenario.", Context);
		}

		if (LatentCommand.RunsOnClient())
		{
			FLatentCommandClientStateMachine ClientState = FLatentCommandClientStateMachine();
			ALatentAutomationCommandClientExecutor* ClientExecutor = nullptr;
			ADD_LATENT_AUTOMATION_COMMAND(AngelscriptLatentCommandClient(Self, Context, LatentCommand, ClientState, ClientExecutor));
		}
		else
		{
			ADD_LATENT_AUTOMATION_COMMAND(AngelscriptLatentCommand(Self, Context, LatentCommand));
		}
	});
}

void BindGetParamIntegrationTest(FAngelscriptBinds& T)
{
	T.Method("FString GetParam()",
			[](FAngelscriptIntegrationTest& Self) {
		if (!Self.TestFunctionDesc.bIsComplexTest)
		{
			Self.Fail("GetParam() is only allowed for complex integration tests");
		}
		return Self.TestFunctionDesc.ComplexTestParam;
	});
}

void BindAddExpectedErrorIntegrationTest(FAngelscriptBinds& T)
{
	T.Method("void AddExpectedError(FString Regex, int Occurrences = 1)",
		[](FAngelscriptIntegrationTest& Self, const FString& Regex, int Occurrences) {
			// Only Contains is supported for now (need bindings for EAutomationExpectedErrorFlags?)
			Self.AddExpectedError(Regex, EAutomationExpectedErrorFlags::MatchType::Contains, Occurrences);
		});
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_AngelscriptIntegrationTesting(FAngelscriptBinds::EOrder::Late, [] {
	FBindFlags BindFlags;
	BindFlags.bPOD = false;
	auto T = FAngelscriptBinds::ValueClass<FAngelscriptIntegrationTest>("FIntegrationTest", BindFlags);

	FAngelscriptTest::BindAsserts(T);

	BindAddLatentAutomationCommand(T);
	BindGetParamIntegrationTest(T);
	BindAddExpectedErrorIntegrationTest(T);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ULatentAutomationCommand((int32)FAngelscriptBinds::EOrder::Late + 1, [] {
	auto L = FAngelscriptBinds::ExistingClass("ULatentAutomationCommand");
	L.Method("FIntegrationTest& GetCurrentTest()", [](ULatentAutomationCommand* Self) {
		ensureMsgf(!Self->RunsOnClient(), TEXT("GetCurrentTest() can not be called in latent commands that also run on client."));

		TSharedPtr<FAngelscriptIntegrationTest> T = Self->GetAssociatedTest();
		ensureMsgf(T.IsValid(), TEXT("Latent command has no associated test."));

		return T.Get();
	});
	SCRIPT_BIND_DOCUMENTATION(
		"Retrieves the current test. You can only call this after the command has been\n"
		"passed to T.AddLatentAutomationCommand() or after SetCurrentTest has been called.");
	L.Method("void SetCurrentTest(FIntegrationTest& T)", [](ULatentAutomationCommand* Self, FAngelscriptIntegrationTest& T) {
		UWorld* TestWorld = GetTestWorld();
		Self->SetWorld(TestWorld);
		Self->SetAssociatedTest(T.AsShared());
	});
	SCRIPT_BIND_DOCUMENTATION(
		"Retrieves the client executor or null if it's not a client test. Clients only\n"
		"have access to the client executor rather than the test itself.");
	L.Method("ALatentAutomationCommandClientExecutor GetClientExecutor()", [](ULatentAutomationCommand* Self) -> ALatentAutomationCommandClientExecutor* {
		ALatentAutomationCommandClientExecutor* ClientExecutor = nullptr;
		for (TActorIterator<ALatentAutomationCommandClientExecutor> It(Self->GetWorld(), ALatentAutomationCommandClientExecutor::StaticClass()); It; ++It)
		{
			if (IsValidChecked(*It))
			{
				ClientExecutor = *It;
				break;
			}
		}
		return ClientExecutor;
	});
	SCRIPT_BIND_DOCUMENTATION(
		"Use this for commands that are not added with AddLatentAutomationCommand.\n"
		"This could be the case if a latent command is a child to another command.\n");
});

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_COMPLEX_AUTOMATION_TEST(
	FAngelscriptIntegrationTests, "Angelscript.IntegrationTests", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

bool LookupIntegrationTest(const FString& ModuleAndTestName, TSharedPtr<struct FAngelscriptModuleDesc>* OutModule,
	FAngelscriptTestDesc* OutTestFuncDesc, FString* OutMapObjectPath)
{
	FString ModuleName;
	FString TestFunctionName;
	if (!ModuleAndTestName.Split(".", &ModuleName, &TestFunctionName, ESearchCase::IgnoreCase, ESearchDir::FromEnd))
	{
		UE_LOG(Angelscript, Error, TEXT("Invalid module and test name: %s"), *ModuleAndTestName);
		return false;
	}

	FAngelscriptManager* AngelscriptManager = &FAngelscriptManager::Get();
	*OutModule = AngelscriptManager->GetModule(ModuleName);
	if (*OutModule == nullptr)
	{
		UE_LOG(Angelscript, Error, TEXT("Was asked to run module %s, but it does not exist"), *ModuleName);
		return false;
	}

	FAngelscriptTestDesc* ModuleTestFuncDesc = (*OutModule)->GetIntegrationTestFunction(TestFunctionName);
	if (ModuleTestFuncDesc == nullptr)
	{
		UE_LOG(Angelscript, Error, TEXT("Was asked to run test %s, but it does not exist"), *ModuleAndTestName);
		return false;
	}
	*OutTestFuncDesc = *ModuleTestFuncDesc;

	FString NamingConvention = GetDefault<UAngelscriptTestSettings>()->IntegrationTestNamingConvention;
	if (NamingConvention.Len() > 0)
	{
		if (!ModuleName.MatchesWildcard(NamingConvention))
		{
			UE_LOG(Angelscript, Error, TEXT("Test '%s' found in module '%s', but tests should only be in modules matching '%s'."),
				*TestFunctionName, *ModuleName, *NamingConvention);
			return false;
		}
	}

	// For the test IntegrationTest_Whatever, the expected map name is {IntegrationTestMapRoot}/Whatever_IntegrationTest.umap.
	FString MapRoot = GetDefault<UAngelscriptTestSettings>()->IntegrationTestMapRoot;
	*OutMapObjectPath = MapRoot + OutTestFuncDesc->Function->GetName();
	return true;
}

#if WITH_EDITOR
struct IntegrationTestEditorGlobalState
{
	FString EditorMap;
	FDelegateHandle PopEditorMapHandle;
};

IntegrationTestEditorGlobalState& GetIntegrationTestGlobalState()
{
	static IntegrationTestEditorGlobalState* Impl = new IntegrationTestEditorGlobalState();
	return *Impl;
}

static IAutomationControllerManagerRef GetAutomationController()
{
	IAutomationControllerModule& AutomationModule = FModuleManager::LoadModuleChecked<IAutomationControllerModule>("AutomationController");
	return AutomationModule.GetAutomationController();
}

static void PopEditorMap()
{
	IntegrationTestEditorGlobalState& State = GetIntegrationTestGlobalState();

	IAutomationControllerManagerRef AutomationController = GetAutomationController();
	AutomationController->OnTestsComplete().Remove(State.PopEditorMapHandle);

	FEditorFileUtils::LoadMap(State.EditorMap, false, true);

	State.EditorMap = TEXT("");
}

static void PushEditorMap()
{
	IntegrationTestEditorGlobalState& State = GetIntegrationTestGlobalState();

	if (GEditor)
	{
		UWorld* ExistingWorld = GEditor->GetEditorWorldContext().World();
		State.EditorMap = ExistingWorld->GetPathName();

		IAutomationControllerManagerRef AutomationController = GetAutomationController();
		State.PopEditorMapHandle = AutomationController->OnTestsComplete().AddStatic(PopEditorMap);
	}
}
#endif // WITH_EDITOR

// Runs one test listed by GetTests.
bool FAngelscriptIntegrationTests::RunTest(const FString& ModuleAndTestName)
{
#if WITH_EDITOR
	// Store information to restore Editor map after tests
	IntegrationTestEditorGlobalState& State = GetIntegrationTestGlobalState();
	if (State.EditorMap.IsEmpty())
	{
		PushEditorMap();
	}
#endif // WITH_EDITOR

	FAngelscriptTestDesc TestFunctionDesc;
	TSharedPtr<struct FAngelscriptModuleDesc> Module;
	FString MapObjectPath;
	if (!LookupIntegrationTest(ModuleAndTestName, &Module, &TestFunctionDesc, &MapObjectPath))
	{
		return false;
	}

	FString Unused;
	if (!FPackageName::DoesPackageExist(MapObjectPath, &Unused))
	{
		UE_LOG(Angelscript, Error, TEXT("Expected a map to exist at %s for %s."), *MapObjectPath, *ModuleAndTestName);
		return false;
	}
	UWorld* World = GetTestWorld();
	if (World != nullptr)
	{
		UE_LOG(Angelscript, Error, TEXT("A previous test failed to clean up a test world named %s."), *World->GetName());
		UE_LOG(Angelscript, Error, TEXT("Refusing to even start test. You need to find the leaking test and fix it, unfortunately."));
		return false;
	}

	FEditorState* OriginalState = new FEditorState;
	ConfigureEditorForTest(*OriginalState);

	// Start loading the map. AutomationOpenMap will create a test world which we can use to
	// set up the Angelscript context, even if the map load isn't complete.
	AutomationOpenMap(MapObjectPath);
	ADD_LATENT_AUTOMATION_COMMAND(FEnsureWorldLoaded(ModuleAndTestName, MapObjectPath));

	World = GetTestWorld();
	if (World == nullptr)
	{
		UE_LOG(Angelscript, Error, TEXT("Something went wrong loading the test map."));
		RestoreEditorAfterTest(*OriginalState);
		delete OriginalState;
		return false;
	}

	// Spawn the actor that will terminate the test. This actor will replicate on all the world instances
	// and will terminate the test, on each world, when it is destroyed.
	ATestTerminator * Terminator = World->SpawnActor<ATestTerminator>(ATestTerminator::StaticClass());
	ADD_LATENT_AUTOMATION_COMMAND(FWaitReadyState(Terminator));

	double TestStartTime = FPlatformTime::Seconds();
	FAngelscriptManager& AngelscriptManager = FAngelscriptManager::Get();

	// Keep the test state in memory - latent actions will continue to run after this function returns.
	// The test Angelscript code can enqueue latent actions here. The latent actions themselves cannot
	// enqueue other latent actions, however. If they did, they would come after the test ends.
	TSharedPtr<FAngelscriptIntegrationTest> Test(
		new FAngelscriptIntegrationTest(&(*Module), TestFunctionDesc, &AngelscriptManager));

	FTestInMemory* TestInMemory = new FTestInMemory{Test};

	FAngelscriptContext AngelscriptContext(World);
	Test->StartTest(AngelscriptContext);

	// Enqueue latent actions to end the test after all test actions are finished.
	ADD_LATENT_AUTOMATION_COMMAND(FExitTest(Terminator));
	ADD_LATENT_AUTOMATION_COMMAND(FCleanupTest(TestInMemory, OriginalState));
	return true;
}

// Returns the list of tests to execute independently.
void FAngelscriptIntegrationTests::GetTests(TArray<FString>& OutBeautifiedNames, TArray<FString>& OutTestCommands) const
{
	auto ActiveModules = FAngelscriptManager::Get().GetActiveModules();
	for (const TSharedRef<FAngelscriptModuleDesc>& Module : ActiveModules)
	{
		for (auto Element : Module->IntegrationTestFunctions)
		{
			FString ModuleAndTestName = Module->ModuleName + "." + Element.Key;
			OutBeautifiedNames.Add(ModuleAndTestName);
			OutTestCommands.Add(ModuleAndTestName);
		}
	}
}

#endif    // WITH_DEV_AUTOMATION_TESTS
