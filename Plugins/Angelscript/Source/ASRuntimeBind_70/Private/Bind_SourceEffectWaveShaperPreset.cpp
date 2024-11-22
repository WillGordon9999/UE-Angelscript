#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectWaveShaper.h"
void FASRuntimeBind_70Module::Bind_SourceEffectWaveShaperPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectWaveShaperPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectWaveShaperPreset, SetSettings, (const FSourceEffectWaveShaperSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
