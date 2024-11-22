#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
void FASRuntimeBind_30Module::Bind_SubmixEffectDynamicsProcessorPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDynamicsProcessorPreset::StaticClass(), "ResetKey", { ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, ResetKey, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDynamicsProcessorPreset::StaticClass(), "SetAudioBus", { ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, SetAudioBus, (UAudioBus*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDynamicsProcessorPreset::StaticClass(), "SetExternalSubmix", { ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, SetExternalSubmix, (USoundSubmix*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDynamicsProcessorPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, SetSettings, (const FSubmixEffectDynamicsProcessorSettings&), ERASE_ARGUMENT_PACK( void )) } );
}
