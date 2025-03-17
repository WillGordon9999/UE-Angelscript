#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "LevelEditorSubsystem.h"
#include "Engine/Level.h"
#include "GameFramework/Actor.h"
#include "Elements/Framework/TypedElementSelectionSet.h"
void FASEditorBind_0Module::Bind_LevelEditorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "BuildLightMaps", { ERASE_METHOD_PTR(ULevelEditorSubsystem, BuildLightMaps, (ELightingBuildQuality,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "EditorGetGameView", { ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorGetGameView, (FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "EditorInvalidateViewports", { ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorInvalidateViewports, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "EditorPlaySimulate", { ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorPlaySimulate, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "EditorRequestEndPlay", { ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorRequestEndPlay, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "EditorSetGameView", { ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorSetGameView, (bool,  FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "EjectPilotLevelActor", { ERASE_METHOD_PTR(ULevelEditorSubsystem, EjectPilotLevelActor, (FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "GetActiveViewportConfigKey", { ERASE_METHOD_PTR(ULevelEditorSubsystem, GetActiveViewportConfigKey, (), ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "GetAllowsCinematicControl", { ERASE_METHOD_PTR(ULevelEditorSubsystem, GetAllowsCinematicControl, (FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "GetCurrentLevel", { ERASE_METHOD_PTR(ULevelEditorSubsystem, GetCurrentLevel, (), ERASE_ARGUMENT_PACK(ULevel* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "GetPilotLevelActor", { ERASE_METHOD_PTR(ULevelEditorSubsystem, GetPilotLevelActor, (FName), ERASE_ARGUMENT_PACK(AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "GetSelectionSet", { ERASE_METHOD_PTR(ULevelEditorSubsystem, GetSelectionSet, (), ERASE_ARGUMENT_PACK(UTypedElementSelectionSet* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "GetViewportConfigKeys", { ERASE_METHOD_PTR(ULevelEditorSubsystem, GetViewportConfigKeys, (), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "IsInPlayInEditor", { ERASE_METHOD_PTR(ULevelEditorSubsystem, IsInPlayInEditor, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "LoadLevel", { ERASE_METHOD_PTR(ULevelEditorSubsystem, LoadLevel, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "NewLevel", { ERASE_METHOD_PTR(ULevelEditorSubsystem, NewLevel, (const FString&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "NewLevelFromTemplate", { ERASE_METHOD_PTR(ULevelEditorSubsystem, NewLevelFromTemplate, (const FString&,  const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "PilotLevelActor", { ERASE_METHOD_PTR(ULevelEditorSubsystem, PilotLevelActor, (AActor*,  FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "SaveAllDirtyLevels", { ERASE_METHOD_PTR(ULevelEditorSubsystem, SaveAllDirtyLevels, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "SaveCurrentLevel", { ERASE_METHOD_PTR(ULevelEditorSubsystem, SaveCurrentLevel, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "SetAllowsCinematicControl", { ERASE_METHOD_PTR(ULevelEditorSubsystem, SetAllowsCinematicControl, (bool,  FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorSubsystem::StaticClass(), "SetCurrentLevelByName", { ERASE_METHOD_PTR(ULevelEditorSubsystem, SetCurrentLevelByName, (FName), ERASE_ARGUMENT_PACK(bool )) } );
}
