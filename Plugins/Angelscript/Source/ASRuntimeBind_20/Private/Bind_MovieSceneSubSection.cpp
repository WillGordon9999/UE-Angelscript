#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneSubSection.h"
void FASRuntimeBind_20Module::Bind_MovieSceneSubSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneSubSection::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(UMovieSceneSubSection, GetSequence, () const, ERASE_ARGUMENT_PACK( UMovieSceneSequence* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneSubSection::StaticClass(), "SetSequence", { ERASE_METHOD_PTR(UMovieSceneSubSection, SetSequence, (UMovieSceneSequence*), ERASE_ARGUMENT_PACK( void )) } );
}
