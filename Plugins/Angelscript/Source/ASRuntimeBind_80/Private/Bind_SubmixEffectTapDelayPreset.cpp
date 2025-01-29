#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectTapDelay.h"
void FASRuntimeBind_80Module::Bind_SubmixEffectTapDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "AddTap", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, AddTap, (int32&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "GetMaxDelayInMilliseconds", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, GetMaxDelayInMilliseconds, (), ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "GetTap", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, GetTap, (int32,  FTapDelayInfo&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "GetTapIds", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, GetTapIds, (TArray<int32>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "RemoveTap", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, RemoveTap, (int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "SetInterpolationTime", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, SetInterpolationTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, SetSettings, (const FSubmixEffectTapDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectTapDelayPreset::StaticClass(), "SetTap", { ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, SetTap, (int32,  const FTapDelayInfo&), ERASE_ARGUMENT_PACK(void )) } );
}
