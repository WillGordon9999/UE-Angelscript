#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectConvolutionReverb.h"
#include "EffectConvolutionReverb.h"
void FASRuntimeBind_80Module::Bind_SourceEffectConvolutionReverbPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectConvolutionReverbPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectConvolutionReverbPreset, SetSettings, (const FSourceEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
