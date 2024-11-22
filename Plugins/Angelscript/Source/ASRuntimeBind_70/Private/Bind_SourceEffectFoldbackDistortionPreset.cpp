#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectFoldbackDistortion.h"
void FASRuntimeBind_70Module::Bind_SourceEffectFoldbackDistortionPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectFoldbackDistortionPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectFoldbackDistortionPreset, SetSettings, (const FSourceEffectFoldbackDistortionSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
