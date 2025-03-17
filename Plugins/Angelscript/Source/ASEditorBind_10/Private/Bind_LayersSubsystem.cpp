#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Layers/LayersSubsystem.h"
#include "GameFramework/Actor.h"
#include "Layers/Layer.h"
#include "Engine/Level.h"
#include "Engine/World.h"
void FASEditorBind_10Module::Bind_LayersSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddActorsToLayer", { ERASE_METHOD_PTR(ULayersSubsystem, AddActorsToLayer, (const TArray< AActor* >&,  const FName&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddActorsToLayers", { ERASE_METHOD_PTR(ULayersSubsystem, AddActorsToLayers, (const TArray< AActor* >&,  const TArray< FName >&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddActorToLayer", { ERASE_METHOD_PTR(ULayersSubsystem, AddActorToLayer, (AActor*,  const FName&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddActorToLayers", { ERASE_METHOD_PTR(ULayersSubsystem, AddActorToLayers, (AActor*,  const TArray< FName >&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddAllLayerNamesTo", { ERASE_METHOD_PTR(ULayersSubsystem, AddAllLayerNamesTo, (TArray< FName >&) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddAllLayersTo", { ERASE_METHOD_PTR(ULayersSubsystem, AddAllLayersTo, (TArray< ULayer* > &) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddLevelLayerInformation", { ERASE_METHOD_PTR(ULayersSubsystem, AddLevelLayerInformation, (ULevel*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddSelectedActorsToLayer", { ERASE_METHOD_PTR(ULayersSubsystem, AddSelectedActorsToLayer, (const FName&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AddSelectedActorsToLayers", { ERASE_METHOD_PTR(ULayersSubsystem, AddSelectedActorsToLayers, (const TArray< FName >&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AppendActorsFromLayer", { ERASE_METHOD_PTR(ULayersSubsystem, AppendActorsFromLayer, (const FName&,  TArray< AActor* >&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "AppendActorsFromLayers", { ERASE_METHOD_PTR(ULayersSubsystem, AppendActorsFromLayers, (const TArray< FName >&,  TArray< AActor* >&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "CreateLayer", { ERASE_METHOD_PTR(ULayersSubsystem, CreateLayer, (const FName&), ERASE_ARGUMENT_PACK( ULayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "DeleteLayer", { ERASE_METHOD_PTR(ULayersSubsystem, DeleteLayer, (const FName&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "DeleteLayers", { ERASE_METHOD_PTR(ULayersSubsystem, DeleteLayers, (const TArray< FName >&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "DisassociateActorFromLayers", { ERASE_METHOD_PTR(ULayersSubsystem, DisassociateActorFromLayers, (AActor*), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "DisassociateActorsFromLayers", { ERASE_METHOD_PTR(ULayersSubsystem, DisassociateActorsFromLayers, (const TArray< AActor* >&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "EditorMapChange", { ERASE_METHOD_PTR(ULayersSubsystem, EditorMapChange, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "EditorRefreshLayerBrowser", { ERASE_METHOD_PTR(ULayersSubsystem, EditorRefreshLayerBrowser, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "GetActorsFromLayer", { ERASE_METHOD_PTR(ULayersSubsystem, GetActorsFromLayer, (const FName&) const, ERASE_ARGUMENT_PACK( TArray< AActor* > )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "GetActorsFromLayers", { ERASE_METHOD_PTR(ULayersSubsystem, GetActorsFromLayers, (const TArray< FName >&) const, ERASE_ARGUMENT_PACK( TArray< AActor* > )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "GetLayer", { ERASE_METHOD_PTR(ULayersSubsystem, GetLayer, (const FName&) const, ERASE_ARGUMENT_PACK( ULayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "GetSelectedActors", { ERASE_METHOD_PTR(ULayersSubsystem, GetSelectedActors, () const, ERASE_ARGUMENT_PACK( TArray< AActor* > )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "GetWorld", { ERASE_METHOD_PTR(ULayersSubsystem, GetWorld, () const, ERASE_ARGUMENT_PACK( UWorld* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "InitializeNewActorLayers", { ERASE_METHOD_PTR(ULayersSubsystem, InitializeNewActorLayers, (AActor*), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "IsActorValidForLayer", { ERASE_METHOD_PTR(ULayersSubsystem, IsActorValidForLayer, (AActor*), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "IsLayer", { ERASE_METHOD_PTR(ULayersSubsystem, IsLayer, (const FName&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "MakeAllLayersVisible", { ERASE_METHOD_PTR(ULayersSubsystem, MakeAllLayersVisible, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RemoveActorFromLayer", { ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorFromLayer, (AActor*,  const FName&,  const bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RemoveActorFromLayers", { ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorFromLayers, (AActor*,  const TArray< FName >&,  const bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RemoveActorsFromLayer", { ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorsFromLayer, (const TArray< AActor* >&,  const FName&,  const bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RemoveActorsFromLayers", { ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorsFromLayers, (const TArray< AActor* >&,  const TArray< FName >&,  const bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RemoveLevelLayerInformation", { ERASE_METHOD_PTR(ULayersSubsystem, RemoveLevelLayerInformation, (ULevel*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RemoveSelectedActorsFromLayer", { ERASE_METHOD_PTR(ULayersSubsystem, RemoveSelectedActorsFromLayer, (const FName&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RemoveSelectedActorsFromLayers", { ERASE_METHOD_PTR(ULayersSubsystem, RemoveSelectedActorsFromLayers, (const TArray< FName >&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "RenameLayer", { ERASE_METHOD_PTR(ULayersSubsystem, RenameLayer, (const FName&,  const FName&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "SelectActorsInLayer", { ERASE_METHOD_PTR(ULayersSubsystem, SelectActorsInLayer, (const FName&,  const bool,  const bool,  const bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "SelectActorsInLayers", { ERASE_METHOD_PTR(ULayersSubsystem, SelectActorsInLayers, (const TArray< FName >&,  const bool,  const bool,  const bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "SetLayersVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, SetLayersVisibility, (const TArray< FName >&,  const bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "SetLayerVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, SetLayerVisibility, (const FName&,  const bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "ToggleLayersVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, ToggleLayersVisibility, (const TArray< FName >&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "ToggleLayerVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, ToggleLayerVisibility, (const FName&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "TryGetLayer", { ERASE_METHOD_PTR(ULayersSubsystem, TryGetLayer, (const FName&,  ULayer*&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "UpdateActorAllViewsVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, UpdateActorAllViewsVisibility, (AActor*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "UpdateActorVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, UpdateActorVisibility, (AActor*,  bool&,  bool&,  const bool,  const bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "UpdateAllActorsVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, UpdateAllActorsVisibility, (const bool,  const bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULayersSubsystem::StaticClass(), "UpdateAllViewVisibility", { ERASE_METHOD_PTR(ULayersSubsystem, UpdateAllViewVisibility, (const FName&), ERASE_ARGUMENT_PACK(  void )) } );
}
