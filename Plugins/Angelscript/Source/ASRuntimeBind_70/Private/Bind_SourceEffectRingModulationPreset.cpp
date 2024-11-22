#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectRingModulation.h"
void FASRuntimeBind_70Module::Bind_SourceEffectRingModulationPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectRingModulationPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectRingModulationPreset, SetSettings, (const FSourceEffectRingModulationSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
