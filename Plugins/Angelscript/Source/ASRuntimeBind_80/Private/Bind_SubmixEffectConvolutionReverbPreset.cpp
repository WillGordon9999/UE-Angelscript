#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectConvolutionReverb.h"
#include "EffectConvolutionReverb.h"
void FASRuntimeBind_80Module::Bind_SubmixEffectConvolutionReverbPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectConvolutionReverbPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectConvolutionReverbPreset, SetSettings, (const FSubmixEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
