#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SourceEffects/SourceEffectBitCrusher.h"
void FASRuntimeBind_70Module::Bind_SourceEffectBitCrusherPreset()
{
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetBitModulator", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetBitModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetBitModulators", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetBitModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetBits", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetBits, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetModulationSettings", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetModulationSettings, (const FSourceEffectBitCrusherSettings&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetSampleRate", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSampleRate, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetSampleRateModulator", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSampleRateModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetSampleRateModulators", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSampleRateModulators, (const TSet<USoundModulatorBase*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USourceEffectBitCrusherPreset::StaticClass(), "SetSettings", { ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSettings, (const FSourceEffectBitCrusherBaseSettings&), ERASE_ARGUMENT_PACK(void )) } );
}
