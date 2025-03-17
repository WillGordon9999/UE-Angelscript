#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeLightNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "GetCustomAttenuationRadius", { ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomAttenuationRadius, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "GetCustomIESBrightnessScale", { ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomIESBrightnessScale, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "GetCustomIESTexture", { ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomIESTexture, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "GetCustomIntensityUnits", { ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomIntensityUnits, (EInterchangeLightUnits&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "GetCustomRotation", { ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomRotation, (FRotator&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "GetCustomUseIESBrightness", { ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomUseIESBrightness, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "SetCustomAttenuationRadius", { ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomAttenuationRadius, (float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "SetCustomIESBrightnessScale", { ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomIESBrightnessScale, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "SetCustomIESTexture", { ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomIESTexture, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "SetCustomIntensityUnits", { ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomIntensityUnits, (const EInterchangeLightUnits &), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "SetCustomRotation", { ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomRotation, (const FRotator&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeLightNode::StaticClass(), "SetCustomUseIESBrightness", { ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomUseIESBrightness, (const bool&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
