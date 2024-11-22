#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightNode.h"
void FASRuntimeBind_60Module::Bind_InterchangePointLightNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightNode::StaticClass(), "GetCustomLightFalloffExponent", { ERASE_METHOD_PTR(UInterchangePointLightNode, GetCustomLightFalloffExponent, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightNode::StaticClass(), "GetCustomUseInverseSquaredFalloff", { ERASE_METHOD_PTR(UInterchangePointLightNode, GetCustomUseInverseSquaredFalloff, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightNode::StaticClass(), "SetCustomLightFalloffExponent", { ERASE_METHOD_PTR(UInterchangePointLightNode, SetCustomLightFalloffExponent, (float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightNode::StaticClass(), "SetCustomUseInverseSquaredFalloff", { ERASE_METHOD_PTR(UInterchangePointLightNode, SetCustomUseInverseSquaredFalloff, (bool), ERASE_ARGUMENT_PACK(bool )) } );
}
