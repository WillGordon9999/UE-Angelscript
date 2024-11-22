#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneAudioSection.h"
void FASRuntimeBind_20Module::Bind_MovieSceneAudioSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "GetAttenuationSettings", { ERASE_METHOD_PTR(UMovieSceneAudioSection, GetAttenuationSettings, () const, ERASE_ARGUMENT_PACK(USoundAttenuation* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "GetLooping", { ERASE_METHOD_PTR(UMovieSceneAudioSection, GetLooping, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "GetOverrideAttenuation", { ERASE_METHOD_PTR(UMovieSceneAudioSection, GetOverrideAttenuation, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "GetSound", { ERASE_METHOD_PTR(UMovieSceneAudioSection, GetSound, () const, ERASE_ARGUMENT_PACK(class USoundBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "GetStartOffset", { ERASE_METHOD_PTR(UMovieSceneAudioSection, GetStartOffset, () const, ERASE_ARGUMENT_PACK(FFrameNumber )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "GetSuppressSubtitles", { ERASE_METHOD_PTR(UMovieSceneAudioSection, GetSuppressSubtitles, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "SetAttenuationSettings", { ERASE_METHOD_PTR(UMovieSceneAudioSection, SetAttenuationSettings, (USoundAttenuation*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "SetLooping", { ERASE_METHOD_PTR(UMovieSceneAudioSection, SetLooping, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "SetOverrideAttenuation", { ERASE_METHOD_PTR(UMovieSceneAudioSection, SetOverrideAttenuation, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "SetSound", { ERASE_METHOD_PTR(UMovieSceneAudioSection, SetSound, (class USoundBase*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "SetStartOffset", { ERASE_METHOD_PTR(UMovieSceneAudioSection, SetStartOffset, (FFrameNumber), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneAudioSection::StaticClass(), "SetSuppressSubtitles", { ERASE_METHOD_PTR(UMovieSceneAudioSection, SetSuppressSubtitles, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
