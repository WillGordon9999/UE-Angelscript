#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Subsystems/EditorActorSubsystem.h"
void FASEditorBind_10Module::Bind_EditorActorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "ClearActorSelectionSet", { ERASE_METHOD_PTR(UEditorActorSubsystem, ClearActorSelectionSet, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "ConvertActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, ConvertActors, (const TArray<class AActor*>&,  TSubclassOf<class AActor>,  const FString&), ERASE_ARGUMENT_PACK( TArray<class AActor*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "DeleteSelectedActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, DeleteSelectedActors, (UWorld*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "DestroyActor", { ERASE_METHOD_PTR(UEditorActorSubsystem, DestroyActor, (AActor*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "DestroyActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, DestroyActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "DuplicateActor", { ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateActor, (AActor*,  UWorld*,  FVector), ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "DuplicateActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateActors, (const TArray<AActor*>&,  UWorld*,  FVector), ERASE_ARGUMENT_PACK( TArray<AActor*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "DuplicateSelectedActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateSelectedActors, (UWorld*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "GetActorReference", { ERASE_METHOD_PTR(UEditorActorSubsystem, GetActorReference, (FString), ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "GetAllLevelActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, GetAllLevelActors, (), ERASE_ARGUMENT_PACK( TArray<class AActor*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "GetAllLevelActorsComponents", { ERASE_METHOD_PTR(UEditorActorSubsystem, GetAllLevelActorsComponents, (), ERASE_ARGUMENT_PACK( TArray<class UActorComponent*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "GetSelectedLevelActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, GetSelectedLevelActors, (), ERASE_ARGUMENT_PACK( TArray<class AActor*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "InvertSelection", { ERASE_METHOD_PTR(UEditorActorSubsystem, InvertSelection, (UWorld*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SelectAll", { ERASE_METHOD_PTR(UEditorActorSubsystem, SelectAll, (UWorld*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SelectAllChildren", { ERASE_METHOD_PTR(UEditorActorSubsystem, SelectAllChildren, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SelectNothing", { ERASE_METHOD_PTR(UEditorActorSubsystem, SelectNothing, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SetActorSelectionState", { ERASE_METHOD_PTR(UEditorActorSubsystem, SetActorSelectionState, (AActor*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SetActorTransform", { ERASE_METHOD_PTR(UEditorActorSubsystem, SetActorTransform, (AActor*,  const FTransform&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SetComponentTransform", { ERASE_METHOD_PTR(UEditorActorSubsystem, SetComponentTransform, (USceneComponent*,  const FTransform&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SetSelectedLevelActors", { ERASE_METHOD_PTR(UEditorActorSubsystem, SetSelectedLevelActors, (const TArray<class AActor*>&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SpawnActorFromClass", { ERASE_METHOD_PTR(UEditorActorSubsystem, SpawnActorFromClass, (TSubclassOf<class AActor>,  FVector,  FRotator,  bool), ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorActorSubsystem::StaticClass(), "SpawnActorFromObject", { ERASE_METHOD_PTR(UEditorActorSubsystem, SpawnActorFromObject, (class UObject*,  FVector,  FRotator,  bool), ERASE_ARGUMENT_PACK( AActor* )) } );
}
