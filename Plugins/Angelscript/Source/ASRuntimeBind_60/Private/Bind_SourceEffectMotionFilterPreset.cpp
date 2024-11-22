#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectMotionFilter.h"
void FASRuntimeBind_60Module::Bind_SourceEffectMotionFilterPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectMotionFilterPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectMotionFilterPreset, SetSettings, (const FSourceEffectMotionFilterSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
