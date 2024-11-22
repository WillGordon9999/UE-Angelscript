#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

#include "GameplayTagContainerMixinLibrary.generated.h"

/**
 * ScriptMixin library to bind functions on FGameplayTagContainer
 * that are not BlueprintCallable by default.
 */
//UCLASS(Meta = (ScriptMixin = "FGameplayTagContainer"))
UCLASS(Meta = ())
class UGameplayTagContainerMixinLibrary : public UObject
{
	GENERATED_BODY()
public:
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static void AddTag(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToAdd)
	{
		GameplayTagContainer.AddTag(TagToAdd);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static void AddTagFast(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToAdd)
	{
		GameplayTagContainer.AddTagFast(TagToAdd);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static void AddLeafTag(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToAdd)
	{
		GameplayTagContainer.AddLeafTag(TagToAdd);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool RemoveTag(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToRemove)
	{
		return GameplayTagContainer.RemoveTag(TagToRemove);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static void RemoveTags(FGameplayTagContainer& GameplayTagContainer, FGameplayTagContainer TagsToRemove)
	{
		GameplayTagContainer.RemoveTags(TagsToRemove);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool HasTag(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToCheck)
	{
		return GameplayTagContainer.HasTag(TagToCheck);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool HasTagExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToCheck)
	{
		return GameplayTagContainer.HasTagExact(TagToCheck);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool HasAny(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck)
	{
		return GameplayTagContainer.HasAny(ContainerToCheck);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool HasAnyExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck)
	{
		return GameplayTagContainer.HasAnyExact(ContainerToCheck);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool HasAll(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck)
	{
		return GameplayTagContainer.HasAll(ContainerToCheck);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool HasAllExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck)
	{
		return GameplayTagContainer.HasAllExact(ContainerToCheck);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static int32 Num(const FGameplayTagContainer& GameplayTagContainer)
	{
		return GameplayTagContainer.Num();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool IsValid(const FGameplayTagContainer& GameplayTagContainer)
	{
		return GameplayTagContainer.IsValid();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool IsEmpty(const FGameplayTagContainer& GameplayTagContainer)
	{
		return GameplayTagContainer.IsEmpty();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static FGameplayTagContainer GetGameplayTagParents(const FGameplayTagContainer& GameplayTagContainer)
	{
		return GameplayTagContainer.GetGameplayTagParents();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static FGameplayTagContainer Filter(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& OtherContainer)
	{
		return GameplayTagContainer.Filter(OtherContainer);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static FGameplayTagContainer FilterExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& OtherContainer)
	{
		return GameplayTagContainer.FilterExact(OtherContainer);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool MatchesQuery(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagQuery& Query)
	{
		return GameplayTagContainer.MatchesQuery(Query);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static FGameplayTag Last(const FGameplayTagContainer& GameplayTagContainer)
	{
		return GameplayTagContainer.Last();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static FGameplayTag First(const FGameplayTagContainer& GameplayTagContainer)
	{
		return GameplayTagContainer.First();
	}
};
