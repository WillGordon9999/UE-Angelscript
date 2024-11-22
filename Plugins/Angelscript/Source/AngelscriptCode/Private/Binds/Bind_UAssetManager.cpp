#include "Engine/AssetManager.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_ToString.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_PrimaryAssetType(FAngelscriptBinds::EOrder::Late, []
{
	auto FPrimaryAssetType_ = FAngelscriptBinds::ExistingClass("FPrimaryAssetType");

	FPrimaryAssetType_.Constructor("void f(FName InName)", [](FPrimaryAssetType* Address, FName InName)
	{
		new(Address) FPrimaryAssetType(InName);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FPrimaryAssetType_, "FPrimaryAssetType");

	FPrimaryAssetType_.Method("FName GetName() const", METHOD_TRIVIAL(FPrimaryAssetType, GetName));
	FPrimaryAssetType_.Method("bool IsValid() const", METHOD_TRIVIAL(FPrimaryAssetType, IsValid));

	FPrimaryAssetType_.Method("bool opEquals(const FPrimaryAssetType& Other) const", METHODPR_TRIVIAL(bool, FPrimaryAssetType, operator==, (const FPrimaryAssetType&) const));

	FToStringHelper::Register(TEXT("FPrimaryAssetType"), [](void* Ptr, FString& Str)
	{
		Str += ((FPrimaryAssetType*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_PrimaryAssetId(FAngelscriptBinds::EOrder::Late, []
{
	auto FPrimaryAssetId_ = FAngelscriptBinds::ExistingClass("FPrimaryAssetId");

	FPrimaryAssetId_.Constructor("void f(const FString& InString)", [](FPrimaryAssetType* Address, const FString& InString)
	{
		new(Address) FPrimaryAssetId(InString);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FPrimaryAssetId_, "FPrimaryAssetId");

	FPrimaryAssetId_.Method("bool IsValid() const", METHOD_TRIVIAL(FPrimaryAssetId, IsValid));

	FPrimaryAssetId_.Method("bool opEquals(const FPrimaryAssetId& Other) const", METHODPR_TRIVIAL(bool, FPrimaryAssetId, operator==, (const FPrimaryAssetId&) const));

	FToStringHelper::Register(TEXT("FPrimaryAssetId"), [](void* Ptr, FString& Str)
	{
		Str += ((FPrimaryAssetId*)Ptr)->ToString();
	});
});

void AssetManager_LoadPrimaryAssets(UAssetManager* AssetManager, const TArray<FPrimaryAssetId>& AssetsToLoad, const TArray<FName>& LoadBundles, int32 Priority, UObject* OptionalCallbackObject, FName OptionalFinishedCallbackFunctionName, FName OptionalCanceledCallbackName)
{
	bool bShouldLoad = true;
	for (const FPrimaryAssetId& Asset : AssetsToLoad)
	{
		if (!ensureMsgf(Asset.IsValid(), TEXT("Tried to load invalid asset!")))
		{
			bShouldLoad = false;
			break;
		}
	}

	if (!bShouldLoad)
	{
		return;
	}

	FStreamableDelegate CompleteDelegate{};
	if (OptionalCallbackObject != nullptr && !OptionalFinishedCallbackFunctionName.IsNone())
	{
		// We bind the complete delegate here since it can be called by LoadPrimaryAssets if there's no work to be done.
		CompleteDelegate.BindUFunction(OptionalCallbackObject, OptionalFinishedCallbackFunctionName);
	}

	TSharedPtr<FStreamableHandle> Handle = AssetManager->LoadPrimaryAssets(AssetsToLoad, LoadBundles, CompleteDelegate, Priority);

	if (Handle.IsValid() && OptionalCallbackObject != nullptr && !OptionalCanceledCallbackName.IsNone())
	{
		FStreamableDelegate CancelDelegate;
		CancelDelegate.BindUFunction(OptionalCallbackObject, OptionalCanceledCallbackName);
		Handle->BindCancelDelegate(CancelDelegate);
	}
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_AssetManager(FAngelscriptBinds::EOrder::Late, []
{
	auto UAssetManager_ = FAngelscriptBinds::ExistingClass("UAssetManager");

	UAssetManager_.Method("FPrimaryAssetId GetPrimaryAssetIdForPath(const FSoftObjectPath& ObjectPath) const", METHODPR_TRIVIAL(FPrimaryAssetId, UAssetManager, GetPrimaryAssetIdForPath, (const FSoftObjectPath&) const));
	UAssetManager_.Method("FSoftObjectPath GetPrimaryAssetPath(const FPrimaryAssetId& PrimaryAssetId) const", METHOD_TRIVIAL(UAssetManager, GetPrimaryAssetPath));

	UAssetManager_.Method("FPrimaryAssetId GetPrimaryAssetIdForData(const FAssetData& AssetData) const", METHODPR_TRIVIAL(FPrimaryAssetId, UAssetManager, GetPrimaryAssetIdForData, (const FAssetData& AssetData) const));
	UAssetManager_.Method("int UnloadPrimaryAsset(const FPrimaryAssetId& AssetToUnload)", METHODPR_TRIVIAL(int32, UAssetManager, UnloadPrimaryAsset, (const FPrimaryAssetId& AssetToUnload)));
	UAssetManager_.Method("int UnloadPrimaryAssets(const TArray<FPrimaryAssetId>& AssetsToUnload)", METHODPR_TRIVIAL(int32, UAssetManager, UnloadPrimaryAssets, (const TArray<FPrimaryAssetId>&AssetsToUnload)));
	UAssetManager_.Method("void LoadPrimaryAsset(const FPrimaryAssetId& AssetToLoad, const TArray<FName>& LoadBundles, int32 Priority = 0, UObject OptionalCallbackObject = nullptr, FName OptionalFinishedCallbackFunctionName = NAME_None, FName OptionalCanceledCallbackName = NAME_None)",
		[](UAssetManager* AssetManager, const FPrimaryAssetId& AssetToLoad, const TArray<FName>& LoadBundles, int32 Priority, UObject* OptionalCallbackObject, FName OptionalFinishedCallbackFunctionName, FName OptionalCanceledCallbackName)
	{
		TArray<FPrimaryAssetId> AssetsToLoad;
		AssetsToLoad.Add(AssetToLoad);

		AssetManager_LoadPrimaryAssets(AssetManager, AssetsToLoad, LoadBundles, Priority, OptionalCallbackObject, OptionalFinishedCallbackFunctionName, OptionalCanceledCallbackName);
	});
	UAssetManager_.Method("void LoadPrimaryAssets(const TArray<FPrimaryAssetId>& AssetsToLoad, const TArray<FName>& LoadBundles, int32 Priority = 0, UObject OptionalCallbackObject = nullptr, FName OptionalFinishedCallbackFunctionName = NAME_None, FName OptionalCanceledCallbackName = NAME_None)",
		[](UAssetManager* AssetManager, const TArray<FPrimaryAssetId>& AssetsToLoad, const TArray<FName>& LoadBundles, int32 Priority, UObject* OptionalCallbackObject, FName OptionalFinishedCallbackFunctionName, FName OptionalCanceledCallbackName)
	{
		AssetManager_LoadPrimaryAssets(AssetManager, AssetsToLoad, LoadBundles, Priority, OptionalCallbackObject, OptionalFinishedCallbackFunctionName, OptionalCanceledCallbackName);
	});

	{
		FAngelscriptBinds::FNamespace ns("UAssetManager");
		//FAngelscriptBinds::BindGlobalFunction("bool IsInitialized()", FUNC_TRIVIAL(UAssetManager::IsInitialized));
		//FAngelscriptBinds::BindGlobalFunction("UAssetManager Get()", FUNC_TRIVIAL(UAssetManager::GetIfInitialized));
	}
});
