#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectFilter.h"
void FASRuntimeBind_80Module::Bind_SourceEffectFilterPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectFilterPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectFilterPreset, SetSettings, (const FSourceEffectFilterSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
