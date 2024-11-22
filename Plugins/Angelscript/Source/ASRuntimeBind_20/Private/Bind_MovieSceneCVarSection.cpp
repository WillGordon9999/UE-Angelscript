#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneCVarSection.h"
void FASRuntimeBind_20Module::Bind_MovieSceneCVarSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCVarSection::StaticClass(), "GetString", { ERASE_METHOD_PTR(UMovieSceneCVarSection, GetString, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCVarSection::StaticClass(), "SetFromString", { ERASE_METHOD_PTR(UMovieSceneCVarSection, SetFromString, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
}
