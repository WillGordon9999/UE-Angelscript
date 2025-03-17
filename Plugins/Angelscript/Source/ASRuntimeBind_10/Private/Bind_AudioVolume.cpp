#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Sound/AudioVolume.h"
#include "Sound/ReverbSettings.h"
void FASRuntimeBind_10Module::Bind_AudioVolume()
{
			FAngelscriptBinds::AddFunctionEntry(AAudioVolume::StaticClass(), "SetEnabled", { ERASE_METHOD_PTR(AAudioVolume, SetEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAudioVolume::StaticClass(), "SetInteriorSettings", { ERASE_METHOD_PTR(AAudioVolume, SetInteriorSettings, (const FInteriorSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAudioVolume::StaticClass(), "SetPriority", { ERASE_METHOD_PTR(AAudioVolume, SetPriority, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAudioVolume::StaticClass(), "SetReverbSettings", { ERASE_METHOD_PTR(AAudioVolume, SetReverbSettings, (const FReverbSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAudioVolume::StaticClass(), "SetSubmixOverrideSettings", { ERASE_METHOD_PTR(AAudioVolume, SetSubmixOverrideSettings, (const TArray<FAudioVolumeSubmixOverrideSettings>&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAudioVolume::StaticClass(), "SetSubmixSendSettings", { ERASE_METHOD_PTR(AAudioVolume, SetSubmixSendSettings, (const TArray<FAudioVolumeSubmixSendSettings>&), ERASE_ARGUMENT_PACK( void )) } );
}
