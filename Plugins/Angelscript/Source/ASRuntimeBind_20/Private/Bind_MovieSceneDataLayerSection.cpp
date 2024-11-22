#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Sections/MovieSceneDataLayerSection.h"
void FASRuntimeBind_20Module::Bind_MovieSceneDataLayerSection()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "GetDataLayerAssets", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetDataLayerAssets, () const, ERASE_ARGUMENT_PACK(const TArray<UDataLayerAsset*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "GetDesiredState", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetDesiredState, () const, ERASE_ARGUMENT_PACK( EDataLayerRuntimeState )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "GetFlushOnActivated", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetFlushOnActivated, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "GetFlushOnUnload", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetFlushOnUnload, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "GetPerformGCOnUnload", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetPerformGCOnUnload, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "GetPrerollState", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetPrerollState, () const, ERASE_ARGUMENT_PACK( EDataLayerRuntimeState )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "SetDataLayerAssets", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetDataLayerAssets, (const TArray<UDataLayerAsset*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "SetDesiredState", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetDesiredState, (EDataLayerRuntimeState), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "SetFlushOnActivated", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetFlushOnActivated, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "SetFlushOnUnload", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetFlushOnUnload, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "SetPerformGCOnUnload", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetPerformGCOnUnload, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneDataLayerSection::StaticClass(), "SetPrerollState", { ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetPrerollState, (EDataLayerRuntimeState), ERASE_ARGUMENT_PACK( void )) } );
}
