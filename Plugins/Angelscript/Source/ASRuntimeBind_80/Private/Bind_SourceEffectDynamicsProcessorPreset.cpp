#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectDynamicsProcessor.h"
void FASRuntimeBind_80Module::Bind_SourceEffectDynamicsProcessorPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectDynamicsProcessorPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectDynamicsProcessorPreset, SetSettings, (const FSourceEffectDynamicsProcessorSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
