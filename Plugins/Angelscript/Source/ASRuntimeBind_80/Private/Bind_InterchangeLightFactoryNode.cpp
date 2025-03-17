#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightFactoryNode.h"
#include "Engine/Scene.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeLightFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "GetCustomAttenuationRadius", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomAttenuationRadius, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "GetCustomIESBrightnessScale", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomIESBrightnessScale, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "GetCustomIESTexture", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomIESTexture, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "GetCustomIntensityUnits", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomIntensityUnits, (ELightUnits&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "GetCustomRotation", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomRotation, (FRotator&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "GetCustomUseIESBrightness", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomUseIESBrightness, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "SetCustomAttenuationRadius", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomAttenuationRadius, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "SetCustomIESBrightnessScale", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomIESBrightnessScale, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "SetCustomIESTexture", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomIESTexture, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "SetCustomIntensityUnits", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomIntensityUnits, (ELightUnits,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "SetCustomRotation", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomRotation, (const FRotator&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightFactoryNode::StaticClass(), "SetCustomUseIESBrightness", { ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomUseIESBrightness, (const bool&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
