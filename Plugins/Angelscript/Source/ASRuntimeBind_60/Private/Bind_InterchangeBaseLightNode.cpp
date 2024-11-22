#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeBaseLightNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "GetCustomIntensity", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomIntensity, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "GetCustomLightColor", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomLightColor, (FLinearColor&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "GetCustomTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomTemperature, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "GetCustomUseTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomUseTemperature, (bool &) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "SetCustomIntensity", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomIntensity, (float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "SetCustomLightColor", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomLightColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "SetCustomTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomTemperature, (float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightNode::StaticClass(), "SetCustomUseTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomUseTemperature, (bool), ERASE_ARGUMENT_PACK(bool )) } );
}
