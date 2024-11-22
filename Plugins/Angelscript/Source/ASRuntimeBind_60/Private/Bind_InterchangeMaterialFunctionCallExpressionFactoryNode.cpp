#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeMaterialFactoryNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeMaterialFunctionCallExpressionFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass(), "GetCustomMaterialFunctionDependency", { ERASE_METHOD_PTR(UInterchangeMaterialFunctionCallExpressionFactoryNode, GetCustomMaterialFunctionDependency, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass(), "SetCustomMaterialFunctionDependency", { ERASE_METHOD_PTR(UInterchangeMaterialFunctionCallExpressionFactoryNode, SetCustomMaterialFunctionDependency, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
