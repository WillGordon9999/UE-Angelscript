#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LevelSequenceDirector.h"
#include "GameFramework/Actor.h"
#include "MovieSceneObjectBindingID.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSequence.h"
void FASRuntimeBind_30Module::Bind_LevelSequenceDirector()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceDirector::StaticClass(), "GetBoundActor", { ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundActor, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceDirector::StaticClass(), "GetBoundActors", { ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundActors, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK( TArray<AActor*> )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceDirector::StaticClass(), "GetBoundObject", { ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundObject, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK( UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceDirector::StaticClass(), "GetBoundObjects", { ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundObjects, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK( TArray<UObject*> )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceDirector::StaticClass(), "GetCurrentTime", { ERASE_METHOD_PTR(ULevelSequenceDirector, GetCurrentTime, () const, ERASE_ARGUMENT_PACK( FQualifiedFrameTime )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceDirector::StaticClass(), "GetRootSequenceTime", { ERASE_METHOD_PTR(ULevelSequenceDirector, GetRootSequenceTime, () const, ERASE_ARGUMENT_PACK( FQualifiedFrameTime )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceDirector::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(ULevelSequenceDirector, GetSequence, (), ERASE_ARGUMENT_PACK( UMovieSceneSequence* )) } );
}
