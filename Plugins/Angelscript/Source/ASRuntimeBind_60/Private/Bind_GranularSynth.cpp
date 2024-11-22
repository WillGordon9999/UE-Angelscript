#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "SynthComponents/SynthComponentGranulator.h"
void FASRuntimeBind_60Module::Bind_GranularSynth()
{
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "GetCurrentPlayheadTime", { ERASE_METHOD_PTR(UGranularSynth, GetCurrentPlayheadTime, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "GetSampleDuration", { ERASE_METHOD_PTR(UGranularSynth, GetSampleDuration, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "IsLoaded", { ERASE_METHOD_PTR(UGranularSynth, IsLoaded, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "NoteOff", { ERASE_METHOD_PTR(UGranularSynth, NoteOff, (const float,  const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "NoteOn", { ERASE_METHOD_PTR(UGranularSynth, NoteOn, (const float,  const int32,  const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetAttackTime", { ERASE_METHOD_PTR(UGranularSynth, SetAttackTime, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetDecayTime", { ERASE_METHOD_PTR(UGranularSynth, SetDecayTime, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetGrainDuration", { ERASE_METHOD_PTR(UGranularSynth, SetGrainDuration, (const float,  const FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetGrainEnvelopeType", { ERASE_METHOD_PTR(UGranularSynth, SetGrainEnvelopeType, (const EGranularSynthEnvelopeType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetGrainPan", { ERASE_METHOD_PTR(UGranularSynth, SetGrainPan, (const float,  const FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetGrainPitch", { ERASE_METHOD_PTR(UGranularSynth, SetGrainPitch, (const float,  const FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetGrainProbability", { ERASE_METHOD_PTR(UGranularSynth, SetGrainProbability, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetGrainsPerSecond", { ERASE_METHOD_PTR(UGranularSynth, SetGrainsPerSecond, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetGrainVolume", { ERASE_METHOD_PTR(UGranularSynth, SetGrainVolume, (const float,  const FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetPlaybackSpeed", { ERASE_METHOD_PTR(UGranularSynth, SetPlaybackSpeed, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetPlayheadTime", { ERASE_METHOD_PTR(UGranularSynth, SetPlayheadTime, (const float,  const float,  EGranularSynthSeekType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetReleaseTimeMsec", { ERASE_METHOD_PTR(UGranularSynth, SetReleaseTimeMsec, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetScrubMode", { ERASE_METHOD_PTR(UGranularSynth, SetScrubMode, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetSoundWave", { ERASE_METHOD_PTR(UGranularSynth, SetSoundWave, (USoundWave*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGranularSynth::StaticClass(), "SetSustainGain", { ERASE_METHOD_PTR(UGranularSynth, SetSustainGain, (const float), ERASE_ARGUMENT_PACK(void )) } );
}
