#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"

#include "IntegrationTestTerminator.generated.h"

// UTestTerminatorComponent
//
// This component is used as an acknowledge mechanism to ensure that replication
// of the ATestTermiantor actor has occurred.
//
// This mechanism is based on component replication and server RPC.
// This component is attached to the player controller by the ATestTerminator actor.
UCLASS()
class UTestTerminatorComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UTestTerminatorComponent();

	void BeginPlay();
	void EndPlay(const EEndPlayReason::Type EndPlayReason);

#if WITH_EDITOR
	void OnPausePIE(bool bIsSimulating);
	void OnResumePIE(bool bIsSimulating);
#endif

	bool ReadyForTermination();

	UFUNCTION(Server, Reliable)
	void ServerTerminatorReplicated();

private:
	bool bReadyForTermination;

#if WITH_EDITOR
	FDelegateHandle OnPause;
	FDelegateHandle OnResume;
#endif
};

// ATestTerminator
// 
// This actor will execute an Exit command in the world where it is spawned
// when this object is destroyed.
// 
// Replication is configured so the actor is replicated on client worlds.
// 
// Destruction is handled by the integration test system.
UCLASS()
class ATestTerminator : public AActor
{
	GENERATED_BODY()
public:
	ATestTerminator();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

	bool Ready();

private:
	bool bComponentSetup;
	bool bReplicated;
	UTestTerminatorComponent* TerminatorComponent;
};
