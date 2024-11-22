#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectConvolutionReverb.h"
void FASRuntimeBind_70Module::Bind_SourceEffectConvolutionReverbPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectConvolutionReverbPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectConvolutionReverbPreset, SetSettings, (const FSourceEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
