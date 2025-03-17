#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_10Module::Bind_EditorAssetSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "AddOnExtractAssetFromFile", { ERASE_METHOD_PTR(UEditorAssetSubsystem, AddOnExtractAssetFromFile, (FOnExtractAssetFromFileDynamic), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "CheckoutAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutAsset, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "CheckoutDirectory", { ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutDirectory, (const FString&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "CheckoutLoadedAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutLoadedAsset, (UObject*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "CheckoutLoadedAssets", { ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutLoadedAssets, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "ConsolidateAssets", { ERASE_METHOD_PTR(UEditorAssetSubsystem, ConsolidateAssets, (UObject*,  const TArray<UObject*>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DeleteAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteAsset, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DeleteDirectory", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteDirectory, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DeleteLoadedAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteLoadedAsset, (UObject*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DeleteLoadedAssets", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteLoadedAssets, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DoAssetsExist", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DoAssetsExist, (const TArray<FString>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DoesAssetExist", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesAssetExist, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DoesDirectoryContainAssets", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesDirectoryContainAssets, (const FString&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DoesDirectoryExist", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesDirectoryExist, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DuplicateAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateAsset, (const FString&,  const FString&), ERASE_ARGUMENT_PACK( UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DuplicateDirectory", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateDirectory, (const FString&,  const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "DuplicateLoadedAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateLoadedAsset, (UObject*,  const FString&), ERASE_ARGUMENT_PACK( UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "FindAssetData", { ERASE_METHOD_PTR(UEditorAssetSubsystem, FindAssetData, (const FString&), ERASE_ARGUMENT_PACK( FAssetData )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "FindPackageReferencersForAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, FindPackageReferencersForAsset, (const FString&,  bool), ERASE_ARGUMENT_PACK( TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "GetMetadataTag", { ERASE_METHOD_PTR(UEditorAssetSubsystem, GetMetadataTag, (UObject*,  FName), ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "GetMetadataTagValues", { ERASE_METHOD_PTR(UEditorAssetSubsystem, GetMetadataTagValues, (UObject*), ERASE_ARGUMENT_PACK( TMap<FName, FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "GetPathNameForLoadedAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, GetPathNameForLoadedAsset, (UObject*), ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "GetTagValues", { ERASE_METHOD_PTR(UEditorAssetSubsystem, GetTagValues, (const FString&), ERASE_ARGUMENT_PACK( TMap<FName, FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "ListAssets", { ERASE_METHOD_PTR(UEditorAssetSubsystem, ListAssets, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK( TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "ListAssetsByTagValue", { ERASE_METHOD_PTR(UEditorAssetSubsystem, ListAssetsByTagValue, (FName,  const FString&), ERASE_ARGUMENT_PACK( TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "LoadAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, LoadAsset, (const FString&), ERASE_ARGUMENT_PACK( UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "LoadBlueprintClass", { ERASE_METHOD_PTR(UEditorAssetSubsystem, LoadBlueprintClass, (const FString&), ERASE_ARGUMENT_PACK( UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "MakeDirectory", { ERASE_METHOD_PTR(UEditorAssetSubsystem, MakeDirectory, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "RemoveMetadataTag", { ERASE_METHOD_PTR(UEditorAssetSubsystem, RemoveMetadataTag, (UObject*,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "RemoveOnExtractAssetFromFile", { ERASE_METHOD_PTR(UEditorAssetSubsystem, RemoveOnExtractAssetFromFile, (FOnExtractAssetFromFileDynamic), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "RenameAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameAsset, (const FString&,  const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "RenameDirectory", { ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameDirectory, (const FString&,  const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "RenameLoadedAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameLoadedAsset, (UObject*,  const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "SaveAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveAsset, (const FString&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "SaveDirectory", { ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveDirectory, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "SaveLoadedAsset", { ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveLoadedAsset, (UObject*,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "SaveLoadedAssets", { ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveLoadedAssets, (const TArray<UObject*>&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorAssetSubsystem::StaticClass(), "SetMetadataTag", { ERASE_METHOD_PTR(UEditorAssetSubsystem, SetMetadataTag, (UObject*,  FName,  const FString&), ERASE_ARGUMENT_PACK( void )) } );
}
