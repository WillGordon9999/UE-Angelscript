#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectMultiBandCompressor.h"
void FASRuntimeBind_70Module::Bind_SubmixEffectMultibandCompressorPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectMultibandCompressorPreset::StaticClass(), "ResetKey", { ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, ResetKey, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectMultibandCompressorPreset::StaticClass(), "SetAudioBus", { ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, SetAudioBus, (UAudioBus*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectMultibandCompressorPreset::StaticClass(), "SetExternalSubmix", { ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, SetExternalSubmix, (USoundSubmix*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectMultibandCompressorPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, SetSettings, (const FSubmixEffectMultibandCompressorSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
