#pragma once
#include "CoreMinimal.h"
#include "UObjectInWorld.generated.h"

UCLASS(Blueprintable)
class ANGELSCRIPTCODE_API UObjectInWorld : public UObject
{
	GENERATED_BODY()

public:
	//UPROPERTY(ScriptReadWrite)
	UPROPERTY(BlueprintReadWrite)
	UWorld* World;

	virtual UWorld* GetWorld() const override;

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	void SetWorld(UWorld* InWorld);

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	void SetWorldContext(UObject* WorldContext);

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	void DestroyObject()
	{
		MarkAsGarbage();
	}
};