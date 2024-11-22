#include "LatentAutomationCommandClientExecutor.h"

#include "Engine/ActorChannel.h"
#include "GameFramework/Actor.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Testing/AngelscriptTest.h"

//
// ALatentAutomationCommandClientExecutor Implementation
//
ALatentAutomationCommandClientExecutor::ALatentAutomationCommandClientExecutor()
{
	// Replication is needed in order to spawn the actor on all worlds (client/server)
	bReplicates = true;
	bAlwaysRelevant = true;

	// Some operation can only be performed after BeginPlay
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bTickEvenWhenPaused = false;

	// Execution data
	CurrentState = EClientExecutorState::SETUP;
	Description = FString();
	LatentCommand = nullptr;

	// Server-Client synchronization data
	bCanStartBefore = false;
	bCanStartUpdate = false;
	bCanStartAfter = false;

	// Client state
	bClientReady = false;
	bClientChecked = false;
	bClientDone = false;
}

void ALatentAutomationCommandClientExecutor::SetTest(ULatentAutomationCommand* command)
{
	LatentCommand = command;
}

bool ALatentAutomationCommandClientExecutor::AllowsTimeout() const
{
	return LatentCommand->AllowsTimeout();
}

bool ALatentAutomationCommandClientExecutor::Before()
{
	return bClientReady;
}

bool ALatentAutomationCommandClientExecutor::Update()
{
	return bClientChecked;
}

bool ALatentAutomationCommandClientExecutor::After()
{
	return bClientDone;
}

FString ALatentAutomationCommandClientExecutor::Describe() const
{
	return Description;
}

void ALatentAutomationCommandClientExecutor::ServerLatentCommandDescribeOnClient_Implementation(const FString& NewDescription)
{
	Description = NewDescription;
}

void ALatentAutomationCommandClientExecutor::ServerFail_Implementation(const FString& Message)
{
	Fail(Message);
}

void ALatentAutomationCommandClientExecutor::ServerAssertSame_Implementation(const UObject* Expected, const UObject* Actual, const FString& Message)
{
	AssertSame(Expected, Actual, Message);
}

void ALatentAutomationCommandClientExecutor::ServerAssertNotSame_Implementation(const UObject* Expected, const UObject* Actual, const FString& Message)
{
	AssertNotSame(Expected, Actual, Message);
}

void ALatentAutomationCommandClientExecutor::ServerAssertTrue_Implementation(bool bExpression, const FString& Message)
{
	AssertTrue(bExpression, Message);
}

void ALatentAutomationCommandClientExecutor::ServerAssertFalse_Implementation(bool bExpression, const FString& Message)
{
	AssertFalse(bExpression, Message);
}

void ALatentAutomationCommandClientExecutor::ServerAssertNull_Implementation(const UObject* Object, const FString& Message)
{
	AssertNull(Object, Message);
}

void ALatentAutomationCommandClientExecutor::ServerAssertNotNull_Implementation(const UObject* Object, const FString& Message)
{
	AssertNotNull(Object, Message);
}

void ALatentAutomationCommandClientExecutor::ServerLatentCommandClientReady_Implementation()
{
	bClientReady = true;
}

void ALatentAutomationCommandClientExecutor::ServerLatentCommandClientChecked_Implementation()
{
	bClientChecked = true;
}

void ALatentAutomationCommandClientExecutor::ServerLatentCommandClientDone_Implementation()
{
	bClientDone = true;
}

void ALatentAutomationCommandClientExecutor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentState == EClientExecutorState::DONE)
	{
		return;
	}

	if (LatentCommand != nullptr && LatentCommand->GetWorld() == nullptr)
	{
		// The client and server uses different worlds - make sure the latent command has one set.
		LatentCommand->SetWorld(GetWorld());
	}


	if (HasAuthority())
	{
		TickServer();
	}
	else
	{
		TickClient();
	}
}

void ALatentAutomationCommandClientExecutor::TickServer()
{
	CurrentState = EClientExecutorState::DONE;
}

void ALatentAutomationCommandClientExecutor::TickClient()
{
	// This state machine executes the latent command in client world.
	// Communicates progress of the different phases of execution calling RPCs from the
	// injected component in the Player Controller.
	// Uses the replicated variables to synchronize the execution with server.
	if (LatentCommand != nullptr)
	{
		// Handle client description.
		Description = LatentCommand->DescribeOnClient();
		if (!Description.IsEmpty())
		{
			ServerLatentCommandDescribeOnClient(Description);
		}

		switch (CurrentState)
		{
			case EClientExecutorState::SETUP:
				// Client executor is synced to the client - we're ready.
				CurrentState = EClientExecutorState::READY;
				break;

			case EClientExecutorState::READY:
				// Run until client-side Before() finishes.
				if (CanStartBefore() && LatentCommand->BeforeOnClient())
				{
					ServerLatentCommandClientReady();
					CurrentState = EClientExecutorState::OBSERVING;
				}
				break;

			case EClientExecutorState::OBSERVING:
				// Run until client-side Update() finishes.
				if (CanStartUpdate() && LatentCommand->UpdateOnClient())
				{
					ServerLatentCommandClientChecked();
					CurrentState = EClientExecutorState::OBSERVED;
				}
				break;

			case EClientExecutorState::OBSERVED:
				// Run until client-side After() finishes.
				if (CanStartAfter() && LatentCommand->AfterOnClient())
				{
					ServerLatentCommandClientDone();
					CurrentState = EClientExecutorState::DONE;
				}
				break;
		}
	}
}

void ALatentAutomationCommandClientExecutor::StartBefore()
{
	bCanStartBefore = true;
}

void ALatentAutomationCommandClientExecutor::StartUpdate()
{
	bCanStartUpdate = true;
}

void ALatentAutomationCommandClientExecutor::StartAfter()
{
	bCanStartAfter = true;
}

bool ALatentAutomationCommandClientExecutor::CanStartBefore() const
{
	return bCanStartBefore;
}

bool ALatentAutomationCommandClientExecutor::CanStartUpdate() const
{
	return bCanStartUpdate;
}

bool ALatentAutomationCommandClientExecutor::CanStartAfter() const
{
	return bCanStartAfter;
}

bool ALatentAutomationCommandClientExecutor::IsSupportedForNetworking() const
{
	return true;
}

bool ALatentAutomationCommandClientExecutor::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	bWroteSomething |= Channel->ReplicateSubobject(LatentCommand, *Bunch, *RepFlags);

	return bWroteSomething;
}

void ALatentAutomationCommandClientExecutor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALatentAutomationCommandClientExecutor, LatentCommand);
	DOREPLIFETIME(ALatentAutomationCommandClientExecutor, bCanStartBefore);
	DOREPLIFETIME(ALatentAutomationCommandClientExecutor, bCanStartUpdate);
	DOREPLIFETIME(ALatentAutomationCommandClientExecutor, bCanStartAfter);
}

void ALatentAutomationCommandClientExecutor::Fail(const FString& Message)
{
	const TCHAR* ClientPrefixStr = TEXT("Client: ");
	FString PrefixStr = ClientPrefixStr;

	if (!HasAuthority())
	{
		ServerFail(PrefixStr + Message);
		return;
	}

	if (Message.Left(FPlatformString::Strlen(ClientPrefixStr)) != ClientPrefixStr)
	{
		PrefixStr = "Server: ";
	}

	// FAngelscriptIntegrationTest does not exist in a header so we need to cast it to the base class so we can use it.
	// Consider moving FAngelscriptIntegrationTest to a header file the future.
	FAngelscriptTest* AngelscriptTest = (FAngelscriptTest*)(LatentCommand->GetAssociatedTest().Get());
	AngelscriptTest->Fail(PrefixStr + Message);
}

void ALatentAutomationCommandClientExecutor::AssertSame(const UObject* Expected, const UObject* Actual, const FString& Message)
{
	const TCHAR* ClientPrefixStr = TEXT("Client: ");
	FString PrefixStr = ClientPrefixStr;

	if (!HasAuthority())
	{
		ServerAssertSame(Expected, Actual, PrefixStr + Message);
		return;
	}

	if (Message.Left(FPlatformString::Strlen(ClientPrefixStr)) != ClientPrefixStr)
	{
		PrefixStr = "Server: ";
	}

	// FAngelscriptIntegrationTest does not exist in a header so we need to cast it to the base class so we can use it.
	// Consider moving FAngelscriptIntegrationTest to a header file the future.
	FAngelscriptTest* AngelscriptTest = (FAngelscriptTest*)(LatentCommand->GetAssociatedTest().Get());
	AngelscriptTest->AssertSame(Expected, Actual, PrefixStr + Message);
}

void ALatentAutomationCommandClientExecutor::AssertNotSame(const UObject* Expected, const UObject* Actual, const FString& Message)
{
	const TCHAR* ClientPrefixStr = TEXT("Client: ");
	FString PrefixStr = ClientPrefixStr;

	if (!HasAuthority())
	{
		ServerAssertSame(Expected, Actual, PrefixStr + Message);
		return;
	}

	if (Message.Left(FPlatformString::Strlen(ClientPrefixStr)) != ClientPrefixStr)
	{
		PrefixStr = "Server: ";
	}

	// FAngelscriptIntegrationTest does not exist in a header so we need to cast it to the base class so we can use it.
	// Consider moving FAngelscriptIntegrationTest to a header file the future.
	FAngelscriptTest* AngelscriptTest = (FAngelscriptTest*)(LatentCommand->GetAssociatedTest().Get());
	AngelscriptTest->AssertNotSame(Expected, Actual, PrefixStr + Message);
}

void ALatentAutomationCommandClientExecutor::AssertTrue(bool bExpression, const FString& Message)
{
	const TCHAR* ClientPrefixStr = TEXT("Client: ");
	FString PrefixStr = ClientPrefixStr;

	if (!HasAuthority())
	{
		ServerAssertTrue(bExpression, PrefixStr + Message);
		return;
	}

	if (Message.Left(FPlatformString::Strlen(ClientPrefixStr)) != ClientPrefixStr)
	{
		PrefixStr = "Server: ";
	}

	// FAngelscriptIntegrationTest does not exist in a header so we need to cast it to the base class so we can use it.
	// Consider moving FAngelscriptIntegrationTest to a header file the future.
	FAngelscriptTest* AngelscriptTest = (FAngelscriptTest*)(LatentCommand->GetAssociatedTest().Get());
	AngelscriptTest->AssertTrue(bExpression, PrefixStr + Message);
}

void ALatentAutomationCommandClientExecutor::AssertFalse(bool bExpression, const FString& Message)
{
	const TCHAR* ClientPrefixStr = TEXT("Client: ");
	FString PrefixStr = ClientPrefixStr;

	if (!HasAuthority())
	{
		ServerAssertFalse(bExpression, PrefixStr + Message);
		return;
	}

	if (Message.Left(FPlatformString::Strlen(ClientPrefixStr)) != ClientPrefixStr)
	{
		PrefixStr = "Server: ";
	}

	// FAngelscriptIntegrationTest does not exist in a header so we need to cast it to the base class so we can use it.
	// Consider moving FAngelscriptIntegrationTest to a header file the future.
	FAngelscriptTest* AngelscriptTest = (FAngelscriptTest*)(LatentCommand->GetAssociatedTest().Get());
	AngelscriptTest->AssertFalse(bExpression, PrefixStr + Message);
}

void ALatentAutomationCommandClientExecutor::AssertNull(const UObject* Object, const FString& Message)
{
	const TCHAR* ClientPrefixStr = TEXT("Client: ");
	FString PrefixStr = ClientPrefixStr;

	if (!HasAuthority())
	{
		ServerAssertNull(Object, PrefixStr + Message);
		return;
	}

	if (Message.Left(FPlatformString::Strlen(ClientPrefixStr)) != ClientPrefixStr)
	{
		PrefixStr = "Server: ";
	}

	// FAngelscriptIntegrationTest does not exist in a header so we need to cast it to the base class so we can use it.
	// Consider moving FAngelscriptIntegrationTest to a header file the future.
	FAngelscriptTest* AngelscriptTest = (FAngelscriptTest*)(LatentCommand->GetAssociatedTest().Get());
	AngelscriptTest->AssertNull(Object, PrefixStr + Message);
}

void ALatentAutomationCommandClientExecutor::AssertNotNull(const UObject* Object, const FString& Message)
{
	const TCHAR* ClientPrefixStr = TEXT("Client: ");
	FString PrefixStr = ClientPrefixStr;

	if (!HasAuthority())
	{
		ServerAssertNotNull(Object, PrefixStr + Message);
		return;
	}

	if (Message.Left(FPlatformString::Strlen(ClientPrefixStr)) != ClientPrefixStr)
	{
		PrefixStr = "Server: ";
	}

	// FAngelscriptIntegrationTest does not exist in a header so we need to cast it to the base class so we can use it.
	// Consider moving FAngelscriptIntegrationTest to a header file the future.
	FAngelscriptTest* AngelscriptTest = (FAngelscriptTest*)(LatentCommand->GetAssociatedTest().Get());
	AngelscriptTest->AssertNotNull(Object, PrefixStr + Message);
}
