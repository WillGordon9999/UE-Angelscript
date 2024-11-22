#pragma once
#include "LatentAutomationCommand.h"

#include "LatentAutomationCommandClientExecutor.generated.h"

// Contains the execution phases of the client latent command
enum class EClientExecutorState
{
	SETUP,
	READY,
	OBSERVING,
	OBSERVED,
	DONE
};

// ALatentAutomationCommandClientExecutor
//
// Executes a ULatentAutomationCommand on client.
// 
// This Actor replicates. The provided ULatentAutomationCommand will be replicated.
// When ticking, this Actor will inject a component into the player controller to be
// able to synchronize execution between client and server.
// This Actor executes the test on client.
//
// The executor will use the different replicated properties to communicate the
// different phases of execution from server to client.
UCLASS(BlueprintType)
class ALatentAutomationCommandClientExecutor : public AActor
{
	GENERATED_BODY()
public:
	ALatentAutomationCommandClientExecutor();

	// Used by the Latent Command execution
	void SetTest(ULatentAutomationCommand* LatentCommand);
	bool AllowsTimeout() const;
	bool Before();
	bool Update();
	bool After();
	FString Describe() const;

	// Prepares client component on server for synchronization
	// and executes the test on client
	void Tick(float DeltaTime) override;
	void TickServer();
	void TickClient();

	// Used by server to synchronize execution
	void StartBefore();
	void StartUpdate();
	void StartAfter();

	//
	// Used by client to synchronize execution
	//
	bool CanStartBefore() const;
	bool CanStartUpdate() const;
	bool CanStartAfter() const;

	// Allows replication for properties and subobjects
	bool IsSupportedForNetworking() const override;
	bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Client functions
	UFUNCTION(BlueprintCallable, Category = "Automation Command Client Executor")
	void Fail(const FString& Message);
	UFUNCTION(BlueprintCallable, Category = "Automation Command Client Executor")
	void AssertSame(const UObject* Expected, const UObject* Actual, const FString& Message);
	UFUNCTION(BlueprintCallable, Category = "Automation Command Client Executor")
	void AssertNotSame(const UObject* Expected, const UObject* Actual, const FString& Message);
	UFUNCTION(BlueprintCallable, Category = "Automation Command Client Executor")
	void AssertTrue(bool bExpression, const FString& Message);
	UFUNCTION(BlueprintCallable, Category = "Automation Command Client Executor")
	void AssertFalse(bool bExpression, const FString& Message);
	UFUNCTION(BlueprintCallable, Category = "Automation Command Client Executor")
	void AssertNull(const UObject* Object, const FString& Message);
	UFUNCTION(BlueprintCallable, Category = "Automation Command Client Executor")
	void AssertNotNull(const UObject* Object, const FString& Message);

private:
	UFUNCTION(Server, Reliable)
	void ServerFail(const FString& Message);
	UFUNCTION(Server, Reliable)
	void ServerAssertSame(const UObject* Expected, const UObject* Actual, const FString& Message);
	UFUNCTION(Server, Reliable)
	void ServerAssertNotSame(const UObject* Expected, const UObject* Actual, const FString& Message);
	UFUNCTION(Server, Reliable)
	void ServerAssertTrue(bool bExpression, const FString& Message);
	UFUNCTION(Server, Reliable)
	void ServerAssertFalse(bool bExpression, const FString& Message);
	UFUNCTION(Server, Reliable)
	void ServerAssertNull(const UObject* Object, const FString& Message);
	UFUNCTION(Server, Reliable)
	void ServerAssertNotNull(const UObject* Object, const FString& Message);

private:
	UFUNCTION(Server, Reliable)
	void ServerLatentCommandClientReady();

	UFUNCTION(Server, Reliable)
	void ServerLatentCommandClientChecked();

	UFUNCTION(Server, Reliable)
	void ServerLatentCommandClientDone();

	UFUNCTION(Server, Reliable)
	void ServerLatentCommandDescribeOnClient(const FString& NewDescription);

private:
	EClientExecutorState CurrentState;
	FString Description;

	UPROPERTY(Replicated)
	ULatentAutomationCommand* LatentCommand;

	// Server-Client synchronization data
	UPROPERTY(Replicated)
	bool bCanStartBefore;

	UPROPERTY(Replicated)
	bool bCanStartUpdate;

	UPROPERTY(Replicated)
	bool bCanStartAfter;

	// Client state
	bool bClientReady;
	bool bClientChecked;
	bool bClientDone;
};
