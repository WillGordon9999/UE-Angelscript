#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
//#include "AssetTagsSubsystem.h"
//void FASRuntimeBind_80Module::Bind_AssetTagsSubsystem()
//{
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "AddAssetDatasToCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetDatasToCollection, (const FName,  const TArray<FAssetData>&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "AddAssetDataToCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetDataToCollection, (const FName,  const FAssetData&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "AddAssetPtrsToCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetPtrsToCollection, (const FName,  const TArray<UObject*>&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "AddAssetPtrToCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetPtrToCollection, (const FName,  const UObject*), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "CollectionExists", { ERASE_METHOD_PTR(UAssetTagsSubsystem, CollectionExists, (const FName), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "CreateCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, CreateCollection, (const FName,  const ECollectionScriptingShareType), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "DestroyCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, DestroyCollection, (const FName), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "EmptyCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, EmptyCollection, (const FName), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "GetAssetsInCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, GetAssetsInCollection, (const FName), ERASE_ARGUMENT_PACK(TArray<FAssetData> )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "GetCollections", { ERASE_METHOD_PTR(UAssetTagsSubsystem, GetCollections, (), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "GetCollectionsContainingAssetData", { ERASE_METHOD_PTR(UAssetTagsSubsystem, GetCollectionsContainingAssetData, (const FAssetData&), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "GetCollectionsContainingAssetPtr", { ERASE_METHOD_PTR(UAssetTagsSubsystem, GetCollectionsContainingAssetPtr, (const UObject*), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "K2_AddAssetsToCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_AddAssetsToCollection, (const FName,  const TArray<FSoftObjectPath>&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "K2_AddAssetToCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_AddAssetToCollection, (const FName,  const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "K2_GetCollectionsContainingAsset", { ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_GetCollectionsContainingAsset, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "K2_RemoveAssetFromCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_RemoveAssetFromCollection, (const FName,  const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "K2_RemoveAssetsFromCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_RemoveAssetsFromCollection, (const FName,  const TArray<FSoftObjectPath>&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "RemoveAssetDataFromCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetDataFromCollection, (const FName,  const FAssetData&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "RemoveAssetDatasFromCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetDatasFromCollection, (const FName,  const TArray<FAssetData>&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "RemoveAssetPtrFromCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetPtrFromCollection, (const FName,  const UObject*), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "RemoveAssetPtrsFromCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetPtrsFromCollection, (const FName,  const TArray<UObject*>&), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "RenameCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, RenameCollection, (const FName,  const FName), ERASE_ARGUMENT_PACK(bool )) } );
//			FAngelscriptBinds::AddFunctionEntry(UAssetTagsSubsystem::StaticClass(), "ReparentCollection", { ERASE_METHOD_PTR(UAssetTagsSubsystem, ReparentCollection, (const FName,  const FName), ERASE_ARGUMENT_PACK(bool )) } );
//}
