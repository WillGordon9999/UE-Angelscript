#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneCinematicShotSection.h"
void FASRuntimeBind_20Module::Bind_MovieSceneCinematicShotSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCinematicShotSection::StaticClass(), "GetShotDisplayName", { ERASE_METHOD_PTR(UMovieSceneCinematicShotSection, GetShotDisplayName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCinematicShotSection::StaticClass(), "SetShotDisplayName", { ERASE_METHOD_PTR(UMovieSceneCinematicShotSection, SetShotDisplayName, (const FString&), ERASE_ARGUMENT_PACK(void )) } );
}
