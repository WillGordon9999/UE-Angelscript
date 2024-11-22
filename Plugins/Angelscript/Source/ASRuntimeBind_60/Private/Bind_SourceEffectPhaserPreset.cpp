#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectPhaser.h"
void FASRuntimeBind_60Module::Bind_SourceEffectPhaserPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectPhaserPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectPhaserPreset, SetSettings, (const FSourceEffectPhaserSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
