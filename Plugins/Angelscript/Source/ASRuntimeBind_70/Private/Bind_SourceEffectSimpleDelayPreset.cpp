#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectSimpleDelay.h"
void FASRuntimeBind_70Module::Bind_SourceEffectSimpleDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectSimpleDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectSimpleDelayPreset, SetSettings, (const FSourceEffectSimpleDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
