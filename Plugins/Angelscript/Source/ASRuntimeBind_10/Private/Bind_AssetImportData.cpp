#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "EditorFramework/AssetImportData.h"
void FASRuntimeBind_10Module::Bind_AssetImportData()
{
			FAngelscriptBinds::AddFunctionEntry(UAssetImportData::StaticClass(), "K2_ExtractFilenames", { ERASE_METHOD_PTR(UAssetImportData, K2_ExtractFilenames, () const, ERASE_ARGUMENT_PACK( TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetImportData::StaticClass(), "K2_GetFirstFilename", { ERASE_METHOD_PTR(UAssetImportData, K2_GetFirstFilename, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetImportData::StaticClass(), "ScriptedAddFilename", { ERASE_METHOD_PTR(UAssetImportData, ScriptedAddFilename, (const FString&,  int32,  FString), ERASE_ARGUMENT_PACK( void )) } );
}
