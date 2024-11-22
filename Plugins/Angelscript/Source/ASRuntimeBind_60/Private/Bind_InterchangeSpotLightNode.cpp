#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeSpotLightNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightNode::StaticClass(), "GetCustomInnerConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightNode, GetCustomInnerConeAngle, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightNode::StaticClass(), "GetCustomOuterConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightNode, GetCustomOuterConeAngle, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightNode::StaticClass(), "SetCustomInnerConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightNode, SetCustomInnerConeAngle, (float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightNode::StaticClass(), "SetCustomOuterConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightNode, SetCustomOuterConeAngle, (float), ERASE_ARGUMENT_PACK(bool )) } );
}
