#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectDynamicsProcessor.h"
void FASRuntimeBind_70Module::Bind_SourceEffectDynamicsProcessorPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectDynamicsProcessorPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectDynamicsProcessorPreset, SetSettings, (const FSourceEffectDynamicsProcessorSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
