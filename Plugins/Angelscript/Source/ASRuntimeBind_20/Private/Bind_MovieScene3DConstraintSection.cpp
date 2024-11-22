#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieScene3DConstraintSection.h"
void FASRuntimeBind_20Module::Bind_MovieScene3DConstraintSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieScene3DConstraintSection::StaticClass(), "GetConstraintBindingID", { ERASE_METHOD_PTR(UMovieScene3DConstraintSection, GetConstraintBindingID, () const, ERASE_ARGUMENT_PACK(const FMovieSceneObjectBindingID& )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieScene3DConstraintSection::StaticClass(), "SetConstraintBindingID", { ERASE_METHOD_PTR(UMovieScene3DConstraintSection, SetConstraintBindingID, (const FMovieSceneObjectBindingID&), ERASE_ARGUMENT_PACK(void )) } );
}
