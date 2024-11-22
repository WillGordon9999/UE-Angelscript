#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectStereoDelay.h"
void FASRuntimeBind_70Module::Bind_SubmixEffectStereoDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectStereoDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectStereoDelayPreset, SetSettings, (const FSubmixEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
