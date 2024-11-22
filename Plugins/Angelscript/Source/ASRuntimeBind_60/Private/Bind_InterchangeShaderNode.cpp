#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeShaderGraphNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeShaderNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeShaderNode::StaticClass(), "AddFloatInput", { ERASE_METHOD_PTR(UInterchangeShaderNode, AddFloatInput, (const FString&,  const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeShaderNode::StaticClass(), "AddLinearColorInput", { ERASE_METHOD_PTR(UInterchangeShaderNode, AddLinearColorInput, (const FString&,  const FLinearColor&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeShaderNode::StaticClass(), "AddStringInput", { ERASE_METHOD_PTR(UInterchangeShaderNode, AddStringInput, (const FString&,  const FString&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeShaderNode::StaticClass(), "GetCustomShaderType", { ERASE_METHOD_PTR(UInterchangeShaderNode, GetCustomShaderType, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeShaderNode::StaticClass(), "SetCustomShaderType", { ERASE_METHOD_PTR(UInterchangeShaderNode, SetCustomShaderType, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
