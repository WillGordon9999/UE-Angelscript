#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "ResonanceAudioSpatializationSourceSettings.h"
void FASRuntimeBind_60Module::Bind_ResonanceAudioSpatializationSourceSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UResonanceAudioSpatializationSourceSettings::StaticClass(), "SetSoundSourceDirectivity", { ERASE_METHOD_PTR(UResonanceAudioSpatializationSourceSettings, SetSoundSourceDirectivity, (float,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UResonanceAudioSpatializationSourceSettings::StaticClass(), "SetSoundSourceSpread", { ERASE_METHOD_PTR(UResonanceAudioSpatializationSourceSettings, SetSoundSourceSpread, (float), ERASE_ARGUMENT_PACK(void )) } );
}
