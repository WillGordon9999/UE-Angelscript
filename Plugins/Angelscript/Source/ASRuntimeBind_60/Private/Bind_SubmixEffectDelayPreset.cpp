#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectDelay.h"
void FASRuntimeBind_60Module::Bind_SubmixEffectDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDelayPreset::StaticClass(), "GetMaxDelayInMilliseconds", { ERASE_METHOD_PTR(USubmixEffectDelayPreset, GetMaxDelayInMilliseconds, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDelayPreset::StaticClass(), "SetDefaultSettings", { ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetDefaultSettings, (const FSubmixEffectDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDelayPreset::StaticClass(), "SetDelay", { ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetDelay, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDelayPreset::StaticClass(), "SetInterpolationTime", { ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetInterpolationTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetSettings, (const FSubmixEffectDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
