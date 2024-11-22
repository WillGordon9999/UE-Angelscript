#include "IntegrationTestTerminator.h"

#include "GameFramework/PlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

#include "AngelscriptManager.h"

UTestTerminatorComponent::UTestTerminatorComponent()
{
	ENetMode mode = GetNetMode();
	if (mode == NM_Standalone || mode == NM_ListenServer )
	{
		// In these modes replication is not used,
		// so we are ready to terminate from the beginning.
		bReadyForTermination = true;
	}
	else
	{
		// Replication is involved in the termination mechanism, so we need
		// confirmation through the ServerTerminatorReplicated RPC call.
		bReadyForTermination = false;
	}
	
	SetIsReplicatedByDefault(true);
}


void UTestTerminatorComponent::BeginPlay()
{
	Super::BeginPlay();

#if WITH_EDITOR
	OnPause = FEditorDelegates::PausePIE.AddUObject(this, &UTestTerminatorComponent::OnPausePIE);
	OnResume = FEditorDelegates::ResumePIE.AddUObject(this, &UTestTerminatorComponent::OnResumePIE);
#endif
}

void UTestTerminatorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
#if WITH_EDITOR
	FEditorDelegates::PausePIE.Remove(OnPause);
	FEditorDelegates::ResumePIE.Remove(OnResume);
#endif

	Super::EndPlay(EndPlayReason);
}

#if WITH_EDITOR
void UTestTerminatorComponent::OnPausePIE(bool bIsSimulating)
{
	APlayerController* PC = Cast<APlayerController>(GetOwner());
	if (PC != nullptr && PC->HasAuthority())
	{
		PC->SetPause(true);
	}
}

void UTestTerminatorComponent::OnResumePIE(bool bIsSimulating)
{
	APlayerController* PC = Cast<APlayerController>(GetOwner());
	if (PC != nullptr && PC->HasAuthority())
	{
		PC->SetPause(false);
	}
}
#endif

void UTestTerminatorComponent::ServerTerminatorReplicated_Implementation()
{
	bReadyForTermination = true;
}

bool UTestTerminatorComponent::ReadyForTermination()
{
	return bReadyForTermination;
}

ATestTerminator::ATestTerminator()
{
	// Replication is needed in order to spawn the actor on all worlds (client/server)
	bReplicates = true;
	bAlwaysRelevant = true;

	// Some operation can only be performed after BeginPlay
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bTickEvenWhenPaused = true;

	// Termination status
	bComponentSetup = false;
	bReplicated = false;
	TerminatorComponent = nullptr;
}

void ATestTerminator::BeginPlay()
{
	Super::BeginPlay();
}

void ATestTerminator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Description of the acknowledge mechanism for test setup:
	// - We attach the Terminator component when the Terminator is created and ticking in server world.
	// - We search for the replicated component when the Terminator is created and ticking in client world.
	// - When client finds the Terminator component and GameState are available, we notify
	//   the server that the replication is completed and the test is ready.

	// Setup terminator component, attaching it to the player controller.
	// This is done in server world and replication of the component is used as
	// acknowledge mechanism of the complete test setup.
	if (!bComponentSetup && HasAuthority())
	{
		for (int i = 0; i < GetWorld()->GetNumControllers(); ++i)
		{
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), i);
			if (PlayerController != nullptr)
			{
				// The PlayerController that we are interested is of the type
				// selected in the GameMode in the Game World Settings
				AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
				if (PlayerController->IsA(GameMode->PlayerControllerClass))
				{
					TerminatorComponent = NewObject<UTestTerminatorComponent>(PlayerController);
					TerminatorComponent->SetIsReplicated(true);
					TerminatorComponent->RegisterComponentWithWorld(GetWorld());
					PlayerController->AddInstanceComponent(TerminatorComponent);
					bComponentSetup = true;
				}
			}
		}
	}

	// If the component has been replicated (found in the player controller in client world)
	// and the GameState of the world is ready, we inform the server that the replication has occurred.
	if (!bReplicated && !HasAuthority())
	{
		for (int i = 0; i < GetWorld()->GetNumControllers(); ++i)
		{
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), i);
			if (PlayerController != nullptr)
			{
				AGameStateBase* GameState = GetWorld()->GetGameState();
				TerminatorComponent = Cast<UTestTerminatorComponent>(PlayerController->GetComponentByClass(UTestTerminatorComponent::StaticClass()));
				if (TerminatorComponent != nullptr && GameState != nullptr)
				{
					TerminatorComponent->ServerTerminatorReplicated();
					bReplicated = true;
				}
			}
		}
	}
}

void ATestTerminator::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("Exit"));
};

bool ATestTerminator::Ready()
{
	if (TerminatorComponent != nullptr)
	{
		return TerminatorComponent->ReadyForTermination();
	}
	else
	{
		return false;
	}
}
