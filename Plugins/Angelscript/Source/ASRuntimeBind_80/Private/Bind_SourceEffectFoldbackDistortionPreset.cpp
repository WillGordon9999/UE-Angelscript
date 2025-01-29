#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectFoldbackDistortion.h"
void FASRuntimeBind_80Module::Bind_SourceEffectFoldbackDistortionPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectFoldbackDistortionPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectFoldbackDistortionPreset, SetSettings, (const FSourceEffectFoldbackDistortionSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
