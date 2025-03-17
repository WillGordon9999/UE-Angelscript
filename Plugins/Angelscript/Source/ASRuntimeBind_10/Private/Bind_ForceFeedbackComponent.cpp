#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ForceFeedbackComponent.h"
#include "GameFramework/ForceFeedbackAttenuation.h"
#include "GameFramework/ForceFeedbackEffect.h"
void FASRuntimeBind_10Module::Bind_ForceFeedbackComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UForceFeedbackComponent::StaticClass(), "AdjustAttenuation", { ERASE_METHOD_PTR(UForceFeedbackComponent, AdjustAttenuation, (const FForceFeedbackAttenuationSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UForceFeedbackComponent::StaticClass(), "BP_GetAttenuationSettingsToApply", { ERASE_METHOD_PTR(UForceFeedbackComponent, BP_GetAttenuationSettingsToApply, (FForceFeedbackAttenuationSettings&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UForceFeedbackComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(UForceFeedbackComponent, Play, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UForceFeedbackComponent::StaticClass(), "SetForceFeedbackEffect", { ERASE_METHOD_PTR(UForceFeedbackComponent, SetForceFeedbackEffect, ( UForceFeedbackEffect*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UForceFeedbackComponent::StaticClass(), "SetIntensityMultiplier", { ERASE_METHOD_PTR(UForceFeedbackComponent, SetIntensityMultiplier, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UForceFeedbackComponent::StaticClass(), "Stop", { ERASE_METHOD_PTR(UForceFeedbackComponent, Stop, (), ERASE_ARGUMENT_PACK(  void )) } );
}
