#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectEQ.h"
void FASRuntimeBind_70Module::Bind_SourceEffectEQPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectEQPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectEQPreset, SetSettings, (const FSourceEffectEQSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
