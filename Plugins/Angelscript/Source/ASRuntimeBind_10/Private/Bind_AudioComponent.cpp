#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/AudioComponent.h"
void FASRuntimeBind_10Module::Bind_AudioComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "AdjustAttenuation", { ERASE_METHOD_PTR(UAudioComponent, AdjustAttenuation, (const FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "AdjustVolume", { ERASE_METHOD_PTR(UAudioComponent, AdjustVolume, (float,  float,  const EAudioFaderCurve), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "BP_GetAttenuationSettingsToApply", { ERASE_METHOD_PTR(UAudioComponent, BP_GetAttenuationSettingsToApply, (FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "FadeIn", { ERASE_METHOD_PTR(UAudioComponent, FadeIn, (float,  float,  float,  const EAudioFaderCurve), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "FadeOut", { ERASE_METHOD_PTR(UAudioComponent, FadeOut, (float,  float,  const EAudioFaderCurve), ERASE_ARGUMENT_PACK( 	void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "GetCookedEnvelopeData", { ERASE_METHOD_PTR(UAudioComponent, GetCookedEnvelopeData, (float&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "GetCookedEnvelopeDataForAllPlayingSounds", { ERASE_METHOD_PTR(UAudioComponent, GetCookedEnvelopeDataForAllPlayingSounds, (TArray<FSoundWaveEnvelopeDataPerSound>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "GetCookedFFTData", { ERASE_METHOD_PTR(UAudioComponent, GetCookedFFTData, (const TArray<float>&,  TArray<FSoundWaveSpectralData>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "GetCookedFFTDataForAllPlayingSounds", { ERASE_METHOD_PTR(UAudioComponent, GetCookedFFTDataForAllPlayingSounds, (TArray<FSoundWaveSpectralDataPerSound>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "GetModulators", { ERASE_METHOD_PTR(UAudioComponent, GetModulators, (const EModulationDestination), ERASE_ARGUMENT_PACK(  TSet<USoundModulatorBase*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "GetPlayState", { ERASE_METHOD_PTR(UAudioComponent, GetPlayState, () const, ERASE_ARGUMENT_PACK( EAudioComponentPlayState )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "HasCookedAmplitudeEnvelopeData", { ERASE_METHOD_PTR(UAudioComponent, HasCookedAmplitudeEnvelopeData, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "HasCookedFFTData", { ERASE_METHOD_PTR(UAudioComponent, HasCookedFFTData, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "IsPlaying", { ERASE_METHOD_PTR(UAudioComponent, IsPlaying, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "IsVirtualized", { ERASE_METHOD_PTR(UAudioComponent, IsVirtualized, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(UAudioComponent, Play, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "PlayQuantized", { ERASE_METHOD_PTR(UAudioComponent, PlayQuantized, (
		  const UObject*,  UQuartzClockHandle*&,  FQuartzQuantizationBoundary&,  const FOnQuartzCommandEventBP&,  float,  float,  float,  EAudioFaderCurve), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetAudioBusSendPostEffect", { ERASE_METHOD_PTR(UAudioComponent, SetAudioBusSendPostEffect, (UAudioBus*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetAudioBusSendPreEffect", { ERASE_METHOD_PTR(UAudioComponent, SetAudioBusSendPreEffect, (UAudioBus*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetBoolParameter", { ERASE_METHOD_PTR(UAudioComponent, SetBoolParameter, (FName,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetFloatParameter", { ERASE_METHOD_PTR(UAudioComponent, SetFloatParameter, (FName,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetIntParameter", { ERASE_METHOD_PTR(UAudioComponent, SetIntParameter, (FName,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetLowPassFilterEnabled", { ERASE_METHOD_PTR(UAudioComponent, SetLowPassFilterEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetLowPassFilterFrequency", { ERASE_METHOD_PTR(UAudioComponent, SetLowPassFilterFrequency, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetModulationRouting", { ERASE_METHOD_PTR(UAudioComponent, SetModulationRouting, (const TSet<USoundModulatorBase*>&,  const EModulationDestination,  const EModulationRouting), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetOutputToBusOnly", { ERASE_METHOD_PTR(UAudioComponent, SetOutputToBusOnly, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetPaused", { ERASE_METHOD_PTR(UAudioComponent, SetPaused, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetPitchMultiplier", { ERASE_METHOD_PTR(UAudioComponent, SetPitchMultiplier, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetSound", { ERASE_METHOD_PTR(UAudioComponent, SetSound, (USoundBase*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetSourceBusSendPostEffect", { ERASE_METHOD_PTR(UAudioComponent, SetSourceBusSendPostEffect, (USoundSourceBus*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetSourceBusSendPreEffect", { ERASE_METHOD_PTR(UAudioComponent, SetSourceBusSendPreEffect, (USoundSourceBus*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetSubmixSend", { ERASE_METHOD_PTR(UAudioComponent, SetSubmixSend, (USoundSubmixBase*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetUISound", { ERASE_METHOD_PTR(UAudioComponent, SetUISound, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetVolumeMultiplier", { ERASE_METHOD_PTR(UAudioComponent, SetVolumeMultiplier, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "SetWaveParameter", { ERASE_METHOD_PTR(UAudioComponent, SetWaveParameter, (FName,  USoundWave*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "Stop", { ERASE_METHOD_PTR(UAudioComponent, Stop, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioComponent::StaticClass(), "StopDelayed", { ERASE_METHOD_PTR(UAudioComponent, StopDelayed, (float), ERASE_ARGUMENT_PACK( void )) } );
}
