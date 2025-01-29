#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectPanner.h"
void FASRuntimeBind_80Module::Bind_SourceEffectPannerPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectPannerPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectPannerPreset, SetSettings, (const FSourceEffectPannerSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
