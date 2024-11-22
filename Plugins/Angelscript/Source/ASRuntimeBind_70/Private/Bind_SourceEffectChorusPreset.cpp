#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectChorus.h"
void FASRuntimeBind_70Module::Bind_SourceEffectChorusPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetDepth", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDepth, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetDepthModulator", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDepthModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetDepthModulators", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDepthModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetDry", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDry, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetDryModulator", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDryModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetDryModulators", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDryModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetFeedback", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFeedback, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetFeedbackModulator", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFeedbackModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetFeedbackModulators", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFeedbackModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetFrequency", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFrequency, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetFrequencyModulator", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFrequencyModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetFrequencyModulators", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFrequencyModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetModulationSettings", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetModulationSettings, (const FSourceEffectChorusSettings&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSettings, (const FSourceEffectChorusBaseSettings&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetSpread", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSpread, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetSpreadModulator", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSpreadModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetSpreadModulators", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSpreadModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetWet", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetWet, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetWetModulator", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetWetModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectChorusPreset::StaticClass(), "SetWetModulators", { ERASE_METHOD_PTR(USourceEffectChorusPreset, SetWetModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
}
