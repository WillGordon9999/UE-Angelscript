#pragma once

#include "CoreMinimal.h"

#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"

#include "GameplayTagQueryMixinLibrary.generated.h"

/**
 * ScriptMixin library to bind functions on FGameplayTagQuery
 * that are not BlueprintCallable by default.
 */
//UCLASS(Meta = (ScriptMixin = "FGameplayTagQuery"))
UCLASS(Meta = ())
class UGameplayTagQueryMixinLibrary : public UObject
{
	GENERATED_BODY()
public:
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool Matches(const FGameplayTagQuery& GameplayTagQuery, const FGameplayTagContainer& Tags)
	{
		return GameplayTagQuery.Matches(Tags);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool IsEmpty(const FGameplayTagQuery& GameplayTagQuery)
	{
		return GameplayTagQuery.IsEmpty();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static const FString& GetDescription(const FGameplayTagQuery& GameplayTagQuery)
	{
		return GameplayTagQuery.GetDescription();
	}
};
