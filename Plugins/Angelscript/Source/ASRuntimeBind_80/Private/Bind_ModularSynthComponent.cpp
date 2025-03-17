#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "SynthComponents/EpicSynth1Component.h"
#include "EpicSynth1Types.h"
void FASRuntimeBind_80Module::Bind_ModularSynthComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "CreatePatch", { ERASE_METHOD_PTR(UModularSynthComponent, CreatePatch, (const ESynth1PatchSource,  const TArray<FSynth1PatchCable>&,  const bool), ERASE_ARGUMENT_PACK(FPatchId )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "NoteOff", { ERASE_METHOD_PTR(UModularSynthComponent, NoteOff, (const float,  const bool,  const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "NoteOn", { ERASE_METHOD_PTR(UModularSynthComponent, NoteOn, (const float,  const int32,  const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetAttackTime", { ERASE_METHOD_PTR(UModularSynthComponent, SetAttackTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetChorusDepth", { ERASE_METHOD_PTR(UModularSynthComponent, SetChorusDepth, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetChorusEnabled", { ERASE_METHOD_PTR(UModularSynthComponent, SetChorusEnabled, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetChorusFeedback", { ERASE_METHOD_PTR(UModularSynthComponent, SetChorusFeedback, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetChorusFrequency", { ERASE_METHOD_PTR(UModularSynthComponent, SetChorusFrequency, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetDecayTime", { ERASE_METHOD_PTR(UModularSynthComponent, SetDecayTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetEnableLegato", { ERASE_METHOD_PTR(UModularSynthComponent, SetEnableLegato, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetEnablePatch", { ERASE_METHOD_PTR(UModularSynthComponent, SetEnablePatch, (const FPatchId,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetEnablePolyphony", { ERASE_METHOD_PTR(UModularSynthComponent, SetEnablePolyphony, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetEnableRetrigger", { ERASE_METHOD_PTR(UModularSynthComponent, SetEnableRetrigger, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetEnableUnison", { ERASE_METHOD_PTR(UModularSynthComponent, SetEnableUnison, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetFilterAlgorithm", { ERASE_METHOD_PTR(UModularSynthComponent, SetFilterAlgorithm, (ESynthFilterAlgorithm), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetFilterFrequency", { ERASE_METHOD_PTR(UModularSynthComponent, SetFilterFrequency, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetFilterFrequencyMod", { ERASE_METHOD_PTR(UModularSynthComponent, SetFilterFrequencyMod, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetFilterQ", { ERASE_METHOD_PTR(UModularSynthComponent, SetFilterQ, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetFilterQMod", { ERASE_METHOD_PTR(UModularSynthComponent, SetFilterQMod, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetFilterType", { ERASE_METHOD_PTR(UModularSynthComponent, SetFilterType, (ESynthFilterType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetGainDb", { ERASE_METHOD_PTR(UModularSynthComponent, SetGainDb, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetLFOFrequency", { ERASE_METHOD_PTR(UModularSynthComponent, SetLFOFrequency, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetLFOFrequencyMod", { ERASE_METHOD_PTR(UModularSynthComponent, SetLFOFrequencyMod, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetLFOGain", { ERASE_METHOD_PTR(UModularSynthComponent, SetLFOGain, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetLFOGainMod", { ERASE_METHOD_PTR(UModularSynthComponent, SetLFOGainMod, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetLFOMode", { ERASE_METHOD_PTR(UModularSynthComponent, SetLFOMode, (int32,  ESynthLFOMode), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetLFOPatch", { ERASE_METHOD_PTR(UModularSynthComponent, SetLFOPatch, (int32,  ESynthLFOPatchType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetLFOType", { ERASE_METHOD_PTR(UModularSynthComponent, SetLFOType, (int32,  ESynthLFOType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvAttackTime", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvAttackTime, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvBiasInvert", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvBiasInvert, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvBiasPatch", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvBiasPatch, (const ESynthModEnvBiasPatch), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvDecayTime", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvDecayTime, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvDepth", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvDepth, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvInvert", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvInvert, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvPatch", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvPatch, (const ESynthModEnvPatch), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvReleaseTime", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvReleaseTime, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetModEnvSustainGain", { ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvSustainGain, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscCents", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscCents, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscFrequencyMod", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscFrequencyMod, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscGain", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscGain, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscGainMod", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscGainMod, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscOctave", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscOctave, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscPulsewidth", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscPulsewidth, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscSemitones", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscSemitones, (int32,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscSync", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscSync, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetOscType", { ERASE_METHOD_PTR(UModularSynthComponent, SetOscType, (int32,  ESynth1OscType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetPan", { ERASE_METHOD_PTR(UModularSynthComponent, SetPan, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetPitchBend", { ERASE_METHOD_PTR(UModularSynthComponent, SetPitchBend, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetPortamento", { ERASE_METHOD_PTR(UModularSynthComponent, SetPortamento, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetReleaseTime", { ERASE_METHOD_PTR(UModularSynthComponent, SetReleaseTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetSpread", { ERASE_METHOD_PTR(UModularSynthComponent, SetSpread, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetStereoDelayFeedback", { ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayFeedback, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetStereoDelayIsEnabled", { ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayIsEnabled, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetStereoDelayMode", { ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayMode, (ESynthStereoDelayMode), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetStereoDelayRatio", { ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayRatio, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetStereoDelayTime", { ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetStereoDelayWetlevel", { ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayWetlevel, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetSustainGain", { ERASE_METHOD_PTR(UModularSynthComponent, SetSustainGain, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularSynthComponent::StaticClass(), "SetSynthPreset", { ERASE_METHOD_PTR(UModularSynthComponent, SetSynthPreset, (const FModularSynthPreset&), ERASE_ARGUMENT_PACK(void )) } );
}
