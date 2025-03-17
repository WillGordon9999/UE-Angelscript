#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneCameraCutSection.h"
#include "MovieSceneObjectBindingID.h"
void FASRuntimeBind_20Module::Bind_MovieSceneCameraCutSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCameraCutSection::StaticClass(), "GetCameraBindingID", { ERASE_METHOD_PTR(UMovieSceneCameraCutSection, GetCameraBindingID, () const, ERASE_ARGUMENT_PACK(const FMovieSceneObjectBindingID& )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCameraCutSection::StaticClass(), "SetCameraBindingID", { ERASE_METHOD_PTR(UMovieSceneCameraCutSection, SetCameraBindingID, (const FMovieSceneObjectBindingID&), ERASE_ARGUMENT_PACK(void )) } );
}
