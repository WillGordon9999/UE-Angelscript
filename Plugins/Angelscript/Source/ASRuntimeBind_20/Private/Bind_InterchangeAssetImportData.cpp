#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeAssetImportData.h"
#include "Nodes/InterchangeBaseNodeContainer.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeTranslatorBase.h"
void FASRuntimeBind_20Module::Bind_InterchangeAssetImportData()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "GetNodeContainer", { ERASE_METHOD_PTR(UInterchangeAssetImportData, GetNodeContainer, () const, ERASE_ARGUMENT_PACK( UInterchangeBaseNodeContainer* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "GetNumberOfPipelines", { ERASE_METHOD_PTR(UInterchangeAssetImportData, GetNumberOfPipelines, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "GetPipelines", { ERASE_METHOD_PTR(UInterchangeAssetImportData, GetPipelines, () const, ERASE_ARGUMENT_PACK( TArray<UObject*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "GetStoredFactoryNode", { ERASE_METHOD_PTR(UInterchangeAssetImportData, GetStoredFactoryNode, (const FString&) const, ERASE_ARGUMENT_PACK( UInterchangeFactoryBaseNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "GetStoredNode", { ERASE_METHOD_PTR(UInterchangeAssetImportData, GetStoredNode, (const FString&) const, ERASE_ARGUMENT_PACK( const UInterchangeBaseNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "GetTranslatorSettings", { ERASE_METHOD_PTR(UInterchangeAssetImportData, GetTranslatorSettings, () const, ERASE_ARGUMENT_PACK( const UInterchangeTranslatorSettings* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "ScriptExtractDisplayLabels", { ERASE_METHOD_PTR(UInterchangeAssetImportData, ScriptExtractDisplayLabels, () const, ERASE_ARGUMENT_PACK(TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "ScriptExtractFilenames", { ERASE_METHOD_PTR(UInterchangeAssetImportData, ScriptExtractFilenames, () const, ERASE_ARGUMENT_PACK(TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "ScriptGetFirstFilename", { ERASE_METHOD_PTR(UInterchangeAssetImportData, ScriptGetFirstFilename, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "SetNodeContainer", { ERASE_METHOD_PTR(UInterchangeAssetImportData, SetNodeContainer, (UInterchangeBaseNodeContainer*) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "SetPipelines", { ERASE_METHOD_PTR(UInterchangeAssetImportData, SetPipelines, (const TArray<UObject*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeAssetImportData::StaticClass(), "SetTranslatorSettings", { ERASE_METHOD_PTR(UInterchangeAssetImportData, SetTranslatorSettings, (UInterchangeTranslatorSettings*) const, ERASE_ARGUMENT_PACK( void )) } );
}
