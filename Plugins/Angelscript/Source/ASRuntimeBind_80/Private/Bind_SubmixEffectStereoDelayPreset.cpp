#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectStereoDelay.h"
void FASRuntimeBind_80Module::Bind_SubmixEffectStereoDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectStereoDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectStereoDelayPreset, SetSettings, (const FSubmixEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
