#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SubmixEffects/SubmixEffectFilter.h"
void FASRuntimeBind_80Module::Bind_SubmixEffectFilterPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFilterPreset::StaticClass(), "SetFilterAlgorithm", { ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterAlgorithm, (ESubmixFilterAlgorithm), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFilterPreset::StaticClass(), "SetFilterCutoffFrequency", { ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterCutoffFrequency, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFilterPreset::StaticClass(), "SetFilterCutoffFrequencyMod", { ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterCutoffFrequencyMod, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFilterPreset::StaticClass(), "SetFilterQ", { ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterQ, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFilterPreset::StaticClass(), "SetFilterQMod", { ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterQMod, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFilterPreset::StaticClass(), "SetFilterType", { ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterType, (ESubmixFilterType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USubmixEffectFilterPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetSettings, (const FSubmixEffectFilterSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
