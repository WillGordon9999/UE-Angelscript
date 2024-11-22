#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectConvolutionReverb.h"
void FASRuntimeBind_60Module::Bind_SubmixEffectConvolutionReverbPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectConvolutionReverbPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectConvolutionReverbPreset, SetSettings, (const FSubmixEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
