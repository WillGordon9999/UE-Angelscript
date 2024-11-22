#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "SynthComponents/SynthComponentWaveTable.h"
void FASRuntimeBind_70Module::Bind_SynthSamplePlayer()
{
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "GetCurrentPlaybackProgressPercent", { ERASE_METHOD_PTR(USynthSamplePlayer, GetCurrentPlaybackProgressPercent, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "GetCurrentPlaybackProgressTime", { ERASE_METHOD_PTR(USynthSamplePlayer, GetCurrentPlaybackProgressTime, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "GetSampleDuration", { ERASE_METHOD_PTR(USynthSamplePlayer, GetSampleDuration, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "IsLoaded", { ERASE_METHOD_PTR(USynthSamplePlayer, IsLoaded, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "SeekToTime", { ERASE_METHOD_PTR(USynthSamplePlayer, SeekToTime, (float,  ESamplePlayerSeekType,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "SetPitch", { ERASE_METHOD_PTR(USynthSamplePlayer, SetPitch, (float,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "SetScrubMode", { ERASE_METHOD_PTR(USynthSamplePlayer, SetScrubMode, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "SetScrubTimeWidth", { ERASE_METHOD_PTR(USynthSamplePlayer, SetScrubTimeWidth, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USynthSamplePlayer::StaticClass(), "SetSoundWave", { ERASE_METHOD_PTR(USynthSamplePlayer, SetSoundWave, (USoundWave*), ERASE_ARGUMENT_PACK(void )) } );
}
