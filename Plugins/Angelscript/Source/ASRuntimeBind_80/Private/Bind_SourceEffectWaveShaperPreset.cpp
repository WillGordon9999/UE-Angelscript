#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectWaveShaper.h"
void FASRuntimeBind_80Module::Bind_SourceEffectWaveShaperPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectWaveShaperPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectWaveShaperPreset, SetSettings, (const FSourceEffectWaveShaperSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
