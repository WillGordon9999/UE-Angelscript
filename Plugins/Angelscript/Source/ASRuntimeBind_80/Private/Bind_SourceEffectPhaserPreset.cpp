#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectPhaser.h"
void FASRuntimeBind_80Module::Bind_SourceEffectPhaserPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectPhaserPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectPhaserPreset, SetSettings, (const FSourceEffectPhaserSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
