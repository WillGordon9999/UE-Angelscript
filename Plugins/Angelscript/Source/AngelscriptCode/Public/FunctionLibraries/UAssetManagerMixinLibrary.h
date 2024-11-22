#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "UAssetManagerMixinLibrary.generated.h"

//UCLASS(MinimalAPI, Meta = (ScriptMixin = "UAssetManager"))
UCLASS(MinimalAPI, Meta = ())
class UAssetManagerMixinLibrary : public UObject
{
	GENERATED_BODY()

public:
	/** Gets the FAssetData for a primary asset with the specified type/name, will only work for once that have been scanned for already. Returns true if it found a valid data */
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool GetPrimaryAssetData(UAssetManager* AssetManager, const FPrimaryAssetId& PrimaryAssetId, FAssetData& AssetData)
	{
		return AssetManager->GetPrimaryAssetData(PrimaryAssetId, AssetData);
	}

	/** Gets list of all FAssetData for a primary asset type, returns true if any were found */
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool GetPrimaryAssetDataList(UAssetManager* AssetManager, FPrimaryAssetType PrimaryAssetType, TArray<FAssetData>& AssetDataList)
	{
		return AssetManager->GetPrimaryAssetDataList(PrimaryAssetType, AssetDataList);
	}

	/** Gets the in-memory UObject for a primary asset id, returning nullptr if it's not in memory. Will return blueprint class for blueprint assets. This works even if the asset wasn't loaded explicitly */
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static UObject* GetPrimaryAssetObject(UAssetManager* AssetManager, const FPrimaryAssetId& PrimaryAssetId)
	{
		return AssetManager->GetPrimaryAssetObject(PrimaryAssetId);
	}

	/** Sees if the passed in object is a registered primary asset, if so return it. Returns invalid Identifier if not found */
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static FPrimaryAssetId GetPrimaryAssetIdForObject(UAssetManager* AssetManager, UObject* Object)
	{
		return AssetManager->GetPrimaryAssetIdForObject(Object);
	}

	/** Gets list of all FPrimaryAssetId for a primary asset type, returns true if any were found */
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool GetPrimaryAssetIdList(UAssetManager* AssetManager, FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& PrimaryAssetIdList)
	{
		return AssetManager->GetPrimaryAssetIdList(PrimaryAssetType, PrimaryAssetIdList);
	}

	/** Gets metadata for a specific asset type, returns false if not found */
	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static bool GetPrimaryAssetTypeInfo(UAssetManager* AssetManager, FPrimaryAssetType PrimaryAssetType, FPrimaryAssetTypeInfo& AssetTypeInfo)
	{
		return AssetManager->GetPrimaryAssetTypeInfo(PrimaryAssetType, AssetTypeInfo);
	}

	/** Gets list of all primary asset types infos */
	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void GetPrimaryAssetTypeInfoList(UAssetManager* AssetManager, TArray<FPrimaryAssetTypeInfo>& AssetTypeInfoList)
	{
		AssetManager->GetPrimaryAssetTypeInfoList(AssetTypeInfoList);
	}

	/** Gets the management rules for a specific asset, this will merge the type and individual values */
	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static FPrimaryAssetRules GetPrimaryAssetRules(UAssetManager* AssetManager, const FPrimaryAssetId& PrimaryAssetId)
	{
		return AssetManager->GetPrimaryAssetRules(PrimaryAssetId);
	}

	/** Register a function to call when all types are scanned at startup, if this has already happened call immediately */
	//UFUNCTION(ScriptCallable, Meta = (DelegateObjectParam = "Object", DelegateFunctionParam = "FunctionName", DelegateBindType = "FSimpleDelegate"))
	UFUNCTION(BlueprintCallable, Meta = (DelegateObjectParam = "Object", DelegateFunctionParam = "FunctionName", DelegateBindType = "FSimpleDelegate"))
	static void CallOrRegister_OnCompletedInitialScan(UAssetManager* AssetManager, UObject* Object, const FName& FunctionName)
	{
		AssetManager->CallOrRegister_OnCompletedInitialScan(FSimpleDelegate::CreateUFunction(Object, FunctionName));
	}
};
