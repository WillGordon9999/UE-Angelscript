#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeShaderGraphNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeFunctionCallShaderNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFunctionCallShaderNode::StaticClass(), "GetCustomMaterialFunction", { ERASE_METHOD_PTR(UInterchangeFunctionCallShaderNode, GetCustomMaterialFunction, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeFunctionCallShaderNode::StaticClass(), "SetCustomMaterialFunction", { ERASE_METHOD_PTR(UInterchangeFunctionCallShaderNode, SetCustomMaterialFunction, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
