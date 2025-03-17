#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "MovieSceneMetaData.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_20Module::Bind_MovieSceneMetaData()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneMetaData::StaticClass(), "GetAuthor", { ERASE_METHOD_PTR(UMovieSceneMetaData, GetAuthor, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneMetaData::StaticClass(), "GetCreated", { ERASE_METHOD_PTR(UMovieSceneMetaData, GetCreated, () const, ERASE_ARGUMENT_PACK( FDateTime )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneMetaData::StaticClass(), "GetNotes", { ERASE_METHOD_PTR(UMovieSceneMetaData, GetNotes, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneMetaData::StaticClass(), "SetAuthor", { ERASE_METHOD_PTR(UMovieSceneMetaData, SetAuthor, (FString), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneMetaData::StaticClass(), "SetCreated", { ERASE_METHOD_PTR(UMovieSceneMetaData, SetCreated, (FDateTime), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneMetaData::StaticClass(), "SetNotes", { ERASE_METHOD_PTR(UMovieSceneMetaData, SetNotes, (FString), ERASE_ARGUMENT_PACK( void )) } );
}
