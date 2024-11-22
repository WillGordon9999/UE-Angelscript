#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectStereoDelay.h"
void FASRuntimeBind_70Module::Bind_SourceEffectStereoDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectStereoDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectStereoDelayPreset, SetSettings, (const FSourceEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
