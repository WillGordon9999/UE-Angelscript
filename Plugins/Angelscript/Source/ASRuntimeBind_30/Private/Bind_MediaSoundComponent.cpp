#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "MediaSoundComponent.h"
#include "Sound/SoundAttenuation.h"
#include "MediaPlayer.h"
void FASRuntimeBind_30Module::Bind_MediaSoundComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "BP_GetAttenuationSettingsToApply", { ERASE_METHOD_PTR(UMediaSoundComponent, BP_GetAttenuationSettingsToApply, (FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "GetEnvelopeValue", { ERASE_METHOD_PTR(UMediaSoundComponent, GetEnvelopeValue, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "GetMediaPlayer", { ERASE_METHOD_PTR(UMediaSoundComponent, GetMediaPlayer, () const, ERASE_ARGUMENT_PACK( UMediaPlayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "GetNormalizedSpectralData", { ERASE_METHOD_PTR(UMediaSoundComponent, GetNormalizedSpectralData, (), ERASE_ARGUMENT_PACK( TArray<FMediaSoundComponentSpectralData> )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "GetSpectralData", { ERASE_METHOD_PTR(UMediaSoundComponent, GetSpectralData, (), ERASE_ARGUMENT_PACK( TArray<FMediaSoundComponentSpectralData> )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "SetEnableEnvelopeFollowing", { ERASE_METHOD_PTR(UMediaSoundComponent, SetEnableEnvelopeFollowing, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "SetEnableSpectralAnalysis", { ERASE_METHOD_PTR(UMediaSoundComponent, SetEnableSpectralAnalysis, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "SetEnvelopeFollowingsettings", { ERASE_METHOD_PTR(UMediaSoundComponent, SetEnvelopeFollowingsettings, (int32,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "SetMediaPlayer", { ERASE_METHOD_PTR(UMediaSoundComponent, SetMediaPlayer, (UMediaPlayer*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaSoundComponent::StaticClass(), "SetSpectralAnalysisSettings", { ERASE_METHOD_PTR(UMediaSoundComponent, SetSpectralAnalysisSettings, (TArray<float>,  EMediaSoundComponentFFTSize), ERASE_ARGUMENT_PACK( void )) } );
}
