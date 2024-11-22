#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectStereoDelay.h"
void FASRuntimeBind_60Module::Bind_SourceEffectStereoDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectStereoDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectStereoDelayPreset, SetSettings, (const FSourceEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
