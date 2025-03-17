#include "ASEditorBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LevelSequenceEditorSubsystem.h"
#include "MovieSceneBindingProxy.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "BakingAnimationKeySettings.h"
#include "MovieSceneFolder.h"
#include "MovieSceneSection.h"
#include "MovieSceneTrack.h"
#include "CineCameraActor.h"
#include "SequencerCurveEditorObject.h"
#include "Scripting/SequencerModuleScriptingLayer.h"
#include "SequencerUtilities.h"
void FASEditorBind_30Module::Bind_LevelSequenceEditorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "AddActors", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, AddActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneBindingProxy> )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "AddActorsToBinding", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, AddActorsToBinding, (const TArray<AActor*>&,  const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "BakeTransformWithSettings", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, BakeTransformWithSettings, (const TArray<FMovieSceneBindingProxy>&,  const FBakingAnimationKeySettings&,  const FMovieSceneScriptingParams&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "ConvertToPossessable", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, ConvertToPossessable, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(FMovieSceneBindingProxy )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "ConvertToSpawnable", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, ConvertToSpawnable, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneBindingProxy> )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "CopyBindings", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopyBindings, (const TArray<FMovieSceneBindingProxy>&,  FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "CopyFolders", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopyFolders, (const TArray<UMovieSceneFolder*>&,  FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "CopySections", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopySections, (const TArray<UMovieSceneSection*>&,  FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "CopyTracks", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopyTracks, (const TArray<UMovieSceneTrack*>&,  FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "CreateCamera", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CreateCamera, (bool,  ACineCameraActor*&), ERASE_ARGUMENT_PACK(FMovieSceneBindingProxy )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "FixActorReferences", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, FixActorReferences, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "GetCurveEditor", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, GetCurveEditor, (), ERASE_ARGUMENT_PACK(USequencerCurveEditorObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "GetScriptingLayer", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, GetScriptingLayer, (), ERASE_ARGUMENT_PACK(USequencerModuleScriptingLayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "PasteBindings", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteBindings, (const FString&,  FMovieScenePasteBindingsParams,  TArray<FMovieSceneBindingProxy>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "PasteFolders", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteFolders, (const FString&,  FMovieScenePasteFoldersParams,  TArray<UMovieSceneFolder*>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "PasteSections", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteSections, (const FString&,  FMovieScenePasteSectionsParams,  TArray<UMovieSceneSection*>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "PasteTracks", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteTracks, (const FString&,  FMovieScenePasteTracksParams,  TArray<UMovieSceneTrack*>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "RebindComponent", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RebindComponent, (const TArray<FMovieSceneBindingProxy>&,  const FName&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "RemoveActorsFromBinding", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RemoveActorsFromBinding, (const TArray<AActor*>&,  const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "RemoveAllBindings", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RemoveAllBindings, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "RemoveInvalidBindings", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RemoveInvalidBindings, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "ReplaceBindingWithActors", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, ReplaceBindingWithActors, (const TArray<AActor*>&,  const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "SnapSectionsToTimelineUsingSourceTimecode", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, SnapSectionsToTimelineUsingSourceTimecode, (const TArray<UMovieSceneSection*>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceEditorSubsystem::StaticClass(), "SyncSectionsUsingSourceTimecode", { ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, SyncSectionsUsingSourceTimecode, (const TArray<UMovieSceneSection*>&), ERASE_ARGUMENT_PACK(void )) } );
}
