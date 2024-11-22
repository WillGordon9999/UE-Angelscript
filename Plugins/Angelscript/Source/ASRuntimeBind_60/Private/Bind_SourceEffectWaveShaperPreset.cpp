#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectWaveShaper.h"
void FASRuntimeBind_60Module::Bind_SourceEffectWaveShaperPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectWaveShaperPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectWaveShaperPreset, SetSettings, (const FSourceEffectWaveShaperSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
