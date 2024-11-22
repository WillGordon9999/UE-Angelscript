#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneComponentMaterialParameterSection.h"
void FASRuntimeBind_20Module::Bind_MovieSceneComponentMaterialParameterSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneComponentMaterialParameterSection::StaticClass(), "AddColorParameterKey", { ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, AddColorParameterKey, (const FMaterialParameterInfo&,  FFrameNumber,  FLinearColor,  const FString&,  const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneComponentMaterialParameterSection::StaticClass(), "AddScalarParameterKey", { ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, AddScalarParameterKey, (const FMaterialParameterInfo&,  FFrameNumber,  float,  const FString&,  const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneComponentMaterialParameterSection::StaticClass(), "RemoveColorParameter", { ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, RemoveColorParameter, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneComponentMaterialParameterSection::StaticClass(), "RemoveScalarParameter", { ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, RemoveScalarParameter, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK( bool )) } );
}
