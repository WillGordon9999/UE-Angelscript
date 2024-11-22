#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightFactoryNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeBaseLightFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "GetCustomIntensity", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomIntensity, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "GetCustomLightColor", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomLightColor, (FColor&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "GetCustomTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomTemperature, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "GetCustomUseTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomUseTemperature, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "SetCustomIntensity", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomIntensity, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "SetCustomLightColor", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomLightColor, (const FColor&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "SetCustomTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomTemperature, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseLightFactoryNode::StaticClass(), "SetCustomUseTemperature", { ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomUseTemperature, (bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
