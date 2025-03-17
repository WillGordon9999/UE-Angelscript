#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeMaterialFactoryNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeMaterialFunctionCallExpressionFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass(), "GetCustomMaterialFunctionDependency", { ERASE_METHOD_PTR(UInterchangeMaterialFunctionCallExpressionFactoryNode, GetCustomMaterialFunctionDependency, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass(), "SetCustomMaterialFunctionDependency", { ERASE_METHOD_PTR(UInterchangeMaterialFunctionCallExpressionFactoryNode, SetCustomMaterialFunctionDependency, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
