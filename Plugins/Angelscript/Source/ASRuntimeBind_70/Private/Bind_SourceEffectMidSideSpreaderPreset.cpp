#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectMidSideSpreader.h"
void FASRuntimeBind_70Module::Bind_SourceEffectMidSideSpreaderPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectMidSideSpreaderPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectMidSideSpreaderPreset, SetSettings, (const FSourceEffectMidSideSpreaderSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
