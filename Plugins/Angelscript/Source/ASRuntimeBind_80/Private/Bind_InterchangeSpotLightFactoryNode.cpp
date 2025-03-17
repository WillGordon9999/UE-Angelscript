#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightFactoryNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeSpotLightFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightFactoryNode::StaticClass(), "GetCustomInnerConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, GetCustomInnerConeAngle, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightFactoryNode::StaticClass(), "GetCustomOuterConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, GetCustomOuterConeAngle, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightFactoryNode::StaticClass(), "SetCustomInnerConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, SetCustomInnerConeAngle, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSpotLightFactoryNode::StaticClass(), "SetCustomOuterConeAngle", { ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, SetCustomOuterConeAngle, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
