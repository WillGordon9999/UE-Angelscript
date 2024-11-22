#pragma once

#include "UObject/Object.h"

#include "LatentAutomationCommand.generated.h"

class FAngelscriptIntegrationTest;

UCLASS(Blueprintable)
class ULatentAutomationCommand : public UObject
{
	GENERATED_BODY()

public:
	ULatentAutomationCommand();

	UFUNCTION(BlueprintNativeEvent)
	void Before();

	UFUNCTION(BlueprintNativeEvent)
	bool BeforeOnClient();

	UFUNCTION(BlueprintNativeEvent)
	bool Update();

	UFUNCTION(BlueprintNativeEvent)
	bool UpdateOnClient();

	UFUNCTION(BlueprintNativeEvent)
	void After();

	UFUNCTION(BlueprintNativeEvent)
	bool AfterOnClient();

	UFUNCTION(BlueprintImplementableEvent)
	FString Describe() const;

	UFUNCTION(BlueprintImplementableEvent)
	FString DescribeOnClient() const;

	UFUNCTION(BlueprintCallable, Category = "LatentAutomationCommand")
	bool HasAuthority() const;

	UWorld* GetWorld() const override;

	void SetWorld(UWorld* InWorld);

	void SetAssociatedTest(TSharedPtr<FAngelscriptIntegrationTest> T);
	TSharedPtr<FAngelscriptIntegrationTest> GetAssociatedTest();

	bool AllowsTimeout() const;
	bool RunsOnClient() const;

	bool IsSupportedForNetworking() const override;

	int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override;
	bool CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack) override;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	UPROPERTY()
	UWorld* World;

	UPROPERTY(Replicated, EditDefaultsOnly, Category=Settings)
	bool bAllowTimeout = false;

	UPROPERTY(Replicated, EditDefaultsOnly, Category=Settings)
	bool bAlsoRunOnClient = false;

	// This type is outside the Unreal type system, so keep track of it using a smart
	// pointer. We can't use raw pointer since we don't control the copy constructor
	// of this class.
	TSharedPtr<FAngelscriptIntegrationTest> AssociatedTest;
};
