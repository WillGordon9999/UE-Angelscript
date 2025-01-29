#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectStereoDelay.h"
void FASRuntimeBind_80Module::Bind_SourceEffectStereoDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectStereoDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectStereoDelayPreset, SetSettings, (const FSourceEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
