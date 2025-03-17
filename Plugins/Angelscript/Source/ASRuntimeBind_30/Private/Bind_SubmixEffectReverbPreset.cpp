#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/AudioMixerSubmixEffectReverb.h"
#include "Sound/ReverbEffect.h"
void FASRuntimeBind_30Module::Bind_SubmixEffectReverbPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectReverbPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectReverbPreset, SetSettings, (const FSubmixEffectReverbSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectReverbPreset::StaticClass(), "SetSettingsWithReverbEffect", { ERASE_METHOD_PTR(USubmixEffectReverbPreset, SetSettingsWithReverbEffect, (const UReverbEffect*,  const float,  const float), ERASE_ARGUMENT_PACK( void )) } );
}
