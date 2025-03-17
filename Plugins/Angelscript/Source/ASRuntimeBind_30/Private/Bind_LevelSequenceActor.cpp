#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LevelSequenceActor.h"
#include "MovieSceneObjectBindingID.h"
#include "GameFramework/Actor.h"
#include "LevelSequence.h"
#include "LevelSequencePlayer.h"
void FASRuntimeBind_30Module::Bind_LevelSequenceActor()
{
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "AddBinding", { ERASE_METHOD_PTR(ALevelSequenceActor, AddBinding, (FMovieSceneObjectBindingID,  AActor*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "AddBindingByTag", { ERASE_METHOD_PTR(ALevelSequenceActor, AddBindingByTag, (FName,  AActor*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "FindNamedBinding", { ERASE_METHOD_PTR(ALevelSequenceActor, FindNamedBinding, (FName) const, ERASE_ARGUMENT_PACK( FMovieSceneObjectBindingID )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "FindNamedBindings", { ERASE_METHOD_PTR(ALevelSequenceActor, FindNamedBindings, (FName) const, ERASE_ARGUMENT_PACK( const TArray<FMovieSceneObjectBindingID>& )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(ALevelSequenceActor, GetSequence, () const, ERASE_ARGUMENT_PACK( ULevelSequence* )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "HideBurnin", { ERASE_METHOD_PTR(ALevelSequenceActor, HideBurnin, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "RemoveBinding", { ERASE_METHOD_PTR(ALevelSequenceActor, RemoveBinding, (FMovieSceneObjectBindingID,  AActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "RemoveBindingByTag", { ERASE_METHOD_PTR(ALevelSequenceActor, RemoveBindingByTag, (FName,  AActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "ResetBinding", { ERASE_METHOD_PTR(ALevelSequenceActor, ResetBinding, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "ResetBindings", { ERASE_METHOD_PTR(ALevelSequenceActor, ResetBindings, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "SetBinding", { ERASE_METHOD_PTR(ALevelSequenceActor, SetBinding, (FMovieSceneObjectBindingID,  const TArray<AActor*>&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "SetBindingByTag", { ERASE_METHOD_PTR(ALevelSequenceActor, SetBindingByTag, (FName,  const TArray<AActor*>&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "SetSequence", { ERASE_METHOD_PTR(ALevelSequenceActor, SetSequence, (ULevelSequence*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceActor::StaticClass(), "ShowBurnin", { ERASE_METHOD_PTR(ALevelSequenceActor, ShowBurnin, (), ERASE_ARGUMENT_PACK( void )) } );
}
