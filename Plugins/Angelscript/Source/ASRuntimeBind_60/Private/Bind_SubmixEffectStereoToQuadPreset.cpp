#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectStereoToQuad.h"
void FASRuntimeBind_60Module::Bind_SubmixEffectStereoToQuadPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectStereoToQuadPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectStereoToQuadPreset, SetSettings, (const FSubmixEffectStereoToQuadSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
