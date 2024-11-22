#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectFlexiverb.h"
void FASRuntimeBind_60Module::Bind_SubmixEffectFlexiverbPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFlexiverbPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectFlexiverbPreset, SetSettings, (const FSubmixEffectFlexiverbSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
