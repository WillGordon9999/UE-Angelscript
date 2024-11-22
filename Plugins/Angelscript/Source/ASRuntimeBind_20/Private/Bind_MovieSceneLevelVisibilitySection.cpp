#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneLevelVisibilitySection.h"
void FASRuntimeBind_20Module::Bind_MovieSceneLevelVisibilitySection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneLevelVisibilitySection::StaticClass(), "GetLevelNames", { ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, GetLevelNames, () const, ERASE_ARGUMENT_PACK(const TArray<FName>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneLevelVisibilitySection::StaticClass(), "GetVisibility", { ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, GetVisibility, () const, ERASE_ARGUMENT_PACK( ELevelVisibility )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneLevelVisibilitySection::StaticClass(), "SetLevelNames", { ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, SetLevelNames, (const TArray<FName>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneLevelVisibilitySection::StaticClass(), "SetVisibility", { ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, SetVisibility, (ELevelVisibility), ERASE_ARGUMENT_PACK( void )) } );
}
