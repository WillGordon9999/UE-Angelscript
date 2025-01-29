#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectSimpleDelay.h"
void FASRuntimeBind_80Module::Bind_SourceEffectSimpleDelayPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectSimpleDelayPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectSimpleDelayPreset, SetSettings, (const FSourceEffectSimpleDelaySettings&), ERASE_ARGUMENT_PACK(void )) } );
}
