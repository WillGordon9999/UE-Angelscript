#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "MediaPlayer.h"
#include "MediaSource.h"
#include "UObject/NoExportTypes.h"
#include "MediaPlaylist.h"
#include "Engine/LatentActionManager.h"
#include "MediaPlayerOptions.h"
void FASRuntimeBind_30Module::Bind_MediaPlayer()
{
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "CanPause", { ERASE_METHOD_PTR(UMediaPlayer, CanPause, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "CanPlaySource", { ERASE_METHOD_PTR(UMediaPlayer, CanPlaySource, (UMediaSource*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "CanPlayUrl", { ERASE_METHOD_PTR(UMediaPlayer, CanPlayUrl, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Close", { ERASE_METHOD_PTR(UMediaPlayer, Close, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetAudioTrackChannels", { ERASE_METHOD_PTR(UMediaPlayer, GetAudioTrackChannels, (int32,  int32) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetAudioTrackSampleRate", { ERASE_METHOD_PTR(UMediaPlayer, GetAudioTrackSampleRate, (int32,  int32) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetAudioTrackType", { ERASE_METHOD_PTR(UMediaPlayer, GetAudioTrackType, (int32,  int32) const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetDesiredPlayerName", { ERASE_METHOD_PTR(UMediaPlayer, GetDesiredPlayerName, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetDisplayTime", { ERASE_METHOD_PTR(UMediaPlayer, GetDisplayTime, () const, ERASE_ARGUMENT_PACK( FTimespan )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetDisplayTimeStamp", { ERASE_METHOD_PTR(UMediaPlayer, GetDisplayTimeStamp, () const, ERASE_ARGUMENT_PACK( UMediaTimeStampInfo* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetDuration", { ERASE_METHOD_PTR(UMediaPlayer, GetDuration, () const, ERASE_ARGUMENT_PACK( FTimespan )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetHorizontalFieldOfView", { ERASE_METHOD_PTR(UMediaPlayer, GetHorizontalFieldOfView, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetMediaMetadataItems", { ERASE_METHOD_PTR(UMediaPlayer, GetMediaMetadataItems, () const, ERASE_ARGUMENT_PACK( TMap<FString, FMediaMetadataItemsBPT> )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetMediaName", { ERASE_METHOD_PTR(UMediaPlayer, GetMediaName, () const, ERASE_ARGUMENT_PACK(  FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetNumTrackFormats", { ERASE_METHOD_PTR(UMediaPlayer, GetNumTrackFormats, (EMediaPlayerTrack,  int32) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetNumTracks", { ERASE_METHOD_PTR(UMediaPlayer, GetNumTracks, (EMediaPlayerTrack) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetPlaybackTimeRange", { ERASE_METHOD_PTR(UMediaPlayer, GetPlaybackTimeRange, (EMediaTimeRangeBPType), ERASE_ARGUMENT_PACK( FFloatInterval )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetPlayerName", { ERASE_METHOD_PTR(UMediaPlayer, GetPlayerName, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetPlaylist", { ERASE_METHOD_PTR(UMediaPlayer, GetPlaylist, () const, ERASE_ARGUMENT_PACK(UMediaPlaylist* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetPlaylistIndex", { ERASE_METHOD_PTR(UMediaPlayer, GetPlaylistIndex, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetRate", { ERASE_METHOD_PTR(UMediaPlayer, GetRate, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetSelectedTrack", { ERASE_METHOD_PTR(UMediaPlayer, GetSelectedTrack, (EMediaPlayerTrack) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetSupportedRates", { ERASE_METHOD_PTR(UMediaPlayer, GetSupportedRates, (TArray<FFloatRange>&,  bool) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetTime", { ERASE_METHOD_PTR(UMediaPlayer, GetTime, () const, ERASE_ARGUMENT_PACK( FTimespan )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetTimeDelay", { ERASE_METHOD_PTR(UMediaPlayer, GetTimeDelay, () const, ERASE_ARGUMENT_PACK( FTimespan )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetTimeStamp", { ERASE_METHOD_PTR(UMediaPlayer, GetTimeStamp, () const, ERASE_ARGUMENT_PACK( UMediaTimeStampInfo* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetTrackDisplayName", { ERASE_METHOD_PTR(UMediaPlayer, GetTrackDisplayName, (EMediaPlayerTrack,  int32) const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetTrackFormat", { ERASE_METHOD_PTR(UMediaPlayer, GetTrackFormat, (EMediaPlayerTrack,  int32) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetTrackLanguage", { ERASE_METHOD_PTR(UMediaPlayer, GetTrackLanguage, (EMediaPlayerTrack,  int32) const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetUrl", { ERASE_METHOD_PTR(UMediaPlayer, GetUrl, () const, ERASE_ARGUMENT_PACK( const FString& )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetVerticalFieldOfView", { ERASE_METHOD_PTR(UMediaPlayer, GetVerticalFieldOfView, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetVideoTrackAspectRatio", { ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackAspectRatio, (int32,  int32) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetVideoTrackDimensions", { ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackDimensions, (int32,  int32) const, ERASE_ARGUMENT_PACK( FIntPoint )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetVideoTrackFrameRate", { ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackFrameRate, (int32,  int32) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetVideoTrackFrameRates", { ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackFrameRates, (int32,  int32) const, ERASE_ARGUMENT_PACK( FFloatRange )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetVideoTrackType", { ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackType, (int32,  int32) const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "GetViewRotation", { ERASE_METHOD_PTR(UMediaPlayer, GetViewRotation, () const, ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "HasError", { ERASE_METHOD_PTR(UMediaPlayer, HasError, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsBuffering", { ERASE_METHOD_PTR(UMediaPlayer, IsBuffering, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsClosed", { ERASE_METHOD_PTR(UMediaPlayer, IsClosed, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsConnecting", { ERASE_METHOD_PTR(UMediaPlayer, IsConnecting, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsLooping", { ERASE_METHOD_PTR(UMediaPlayer, IsLooping, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsPaused", { ERASE_METHOD_PTR(UMediaPlayer, IsPaused, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsPlaying", { ERASE_METHOD_PTR(UMediaPlayer, IsPlaying, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsPreparing", { ERASE_METHOD_PTR(UMediaPlayer, IsPreparing, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "IsReady", { ERASE_METHOD_PTR(UMediaPlayer, IsReady, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Next", { ERASE_METHOD_PTR(UMediaPlayer, Next, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "OpenFile", { ERASE_METHOD_PTR(UMediaPlayer, OpenFile, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "OpenPlaylist", { ERASE_METHOD_PTR(UMediaPlayer, OpenPlaylist, (UMediaPlaylist*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "OpenPlaylistIndex", { ERASE_METHOD_PTR(UMediaPlayer, OpenPlaylistIndex, (UMediaPlaylist*,  int32), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "OpenSource", { ERASE_METHOD_PTR(UMediaPlayer, OpenSource, (UMediaSource*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "OpenSourceLatent", { ERASE_METHOD_PTR(UMediaPlayer, OpenSourceLatent, (const UObject*,  struct FLatentActionInfo,  UMediaSource*,  const FMediaPlayerOptions&,  bool&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "OpenSourceWithOptions", { ERASE_METHOD_PTR(UMediaPlayer, OpenSourceWithOptions, (UMediaSource*,  const FMediaPlayerOptions&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "OpenUrl", { ERASE_METHOD_PTR(UMediaPlayer, OpenUrl, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Pause", { ERASE_METHOD_PTR(UMediaPlayer, Pause, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Play", { ERASE_METHOD_PTR(UMediaPlayer, Play, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "PlayAndSeek", { ERASE_METHOD_PTR(UMediaPlayer, PlayAndSeek, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Previous", { ERASE_METHOD_PTR(UMediaPlayer, Previous, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Reopen", { ERASE_METHOD_PTR(UMediaPlayer, Reopen, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Rewind", { ERASE_METHOD_PTR(UMediaPlayer, Rewind, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "Seek", { ERASE_METHOD_PTR(UMediaPlayer, Seek, (const FTimespan&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SelectTrack", { ERASE_METHOD_PTR(UMediaPlayer, SelectTrack, (EMediaPlayerTrack,  int32), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetBlockOnTime", { ERASE_METHOD_PTR(UMediaPlayer, SetBlockOnTime, (const FTimespan&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetDesiredPlayerName", { ERASE_METHOD_PTR(UMediaPlayer, SetDesiredPlayerName, (FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetLooping", { ERASE_METHOD_PTR(UMediaPlayer, SetLooping, (bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetMediaOptions", { ERASE_METHOD_PTR(UMediaPlayer, SetMediaOptions, (const UMediaSource*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetNativeVolume", { ERASE_METHOD_PTR(UMediaPlayer, SetNativeVolume, (float), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetPlaybackTimeRange", { ERASE_METHOD_PTR(UMediaPlayer, SetPlaybackTimeRange, (FFloatInterval), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetRate", { ERASE_METHOD_PTR(UMediaPlayer, SetRate, (float), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetTimeDelay", { ERASE_METHOD_PTR(UMediaPlayer, SetTimeDelay, (FTimespan), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetTrackFormat", { ERASE_METHOD_PTR(UMediaPlayer, SetTrackFormat, (EMediaPlayerTrack,  int32,  int32), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetVideoTrackFrameRate", { ERASE_METHOD_PTR(UMediaPlayer, SetVideoTrackFrameRate, (int32,  int32,  float), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetViewField", { ERASE_METHOD_PTR(UMediaPlayer, SetViewField, (float,  float,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SetViewRotation", { ERASE_METHOD_PTR(UMediaPlayer, SetViewRotation, (const FRotator&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SupportsPlaybackTimeRange", { ERASE_METHOD_PTR(UMediaPlayer, SupportsPlaybackTimeRange, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SupportsRate", { ERASE_METHOD_PTR(UMediaPlayer, SupportsRate, (float,  bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SupportsScrubbing", { ERASE_METHOD_PTR(UMediaPlayer, SupportsScrubbing, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlayer::StaticClass(), "SupportsSeeking", { ERASE_METHOD_PTR(UMediaPlayer, SupportsSeeking, () const, ERASE_ARGUMENT_PACK( bool )) } );
}
