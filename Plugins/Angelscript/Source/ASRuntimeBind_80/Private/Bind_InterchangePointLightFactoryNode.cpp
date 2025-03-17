#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightFactoryNode.h"
void FASRuntimeBind_80Module::Bind_InterchangePointLightFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightFactoryNode::StaticClass(), "GetCustomLightFalloffExponent", { ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, GetCustomLightFalloffExponent, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightFactoryNode::StaticClass(), "GetCustomUseInverseSquaredFalloff", { ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, GetCustomUseInverseSquaredFalloff, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightFactoryNode::StaticClass(), "SetCustomLightFalloffExponent", { ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, SetCustomLightFalloffExponent, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePointLightFactoryNode::StaticClass(), "SetCustomUseInverseSquaredFalloff", { ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, SetCustomUseInverseSquaredFalloff, (bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
