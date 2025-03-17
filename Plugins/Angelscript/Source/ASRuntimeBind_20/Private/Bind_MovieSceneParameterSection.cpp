#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneParameterSection.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_20Module::Bind_MovieSceneParameterSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "AddBoolParameterKey", { ERASE_METHOD_PTR(UMovieSceneParameterSection, AddBoolParameterKey, (FName,  FFrameNumber,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "AddColorParameterKey", { ERASE_METHOD_PTR(UMovieSceneParameterSection, AddColorParameterKey, (FName,  FFrameNumber,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "AddScalarParameterKey", { ERASE_METHOD_PTR(UMovieSceneParameterSection, AddScalarParameterKey, (FName,  FFrameNumber,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "AddTransformParameterKey", { ERASE_METHOD_PTR(UMovieSceneParameterSection, AddTransformParameterKey, (FName,  FFrameNumber,  const FTransform&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "AddVector2DParameterKey", { ERASE_METHOD_PTR(UMovieSceneParameterSection, AddVector2DParameterKey, (FName,  FFrameNumber,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "AddVectorParameterKey", { ERASE_METHOD_PTR(UMovieSceneParameterSection, AddVectorParameterKey, (FName,  FFrameNumber,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "GetParameterNames", { ERASE_METHOD_PTR(UMovieSceneParameterSection, GetParameterNames, (TSet<FName>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "RemoveBoolParameter", { ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveBoolParameter, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "RemoveColorParameter", { ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveColorParameter, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "RemoveScalarParameter", { ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveScalarParameter, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "RemoveTransformParameter", { ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveTransformParameter, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "RemoveVector2DParameter", { ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveVector2DParameter, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneParameterSection::StaticClass(), "RemoveVectorParameter", { ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveVectorParameter, (FName), ERASE_ARGUMENT_PACK( bool )) } );
}
