#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeDecalNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeDecalNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalNode::StaticClass(), "GetCustomDecalMaterialPathName", { ERASE_METHOD_PTR(UInterchangeDecalNode, GetCustomDecalMaterialPathName, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalNode::StaticClass(), "GetCustomDecalSize", { ERASE_METHOD_PTR(UInterchangeDecalNode, GetCustomDecalSize, (FVector&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalNode::StaticClass(), "GetCustomSortOrder", { ERASE_METHOD_PTR(UInterchangeDecalNode, GetCustomSortOrder, (int32&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalNode::StaticClass(), "SetCustomDecalMaterialPathName", { ERASE_METHOD_PTR(UInterchangeDecalNode, SetCustomDecalMaterialPathName, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalNode::StaticClass(), "SetCustomDecalSize", { ERASE_METHOD_PTR(UInterchangeDecalNode, SetCustomDecalSize, (const FVector&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalNode::StaticClass(), "SetCustomSortOrder", { ERASE_METHOD_PTR(UInterchangeDecalNode, SetCustomSortOrder, (const int32&), ERASE_ARGUMENT_PACK(bool )) } );
}
