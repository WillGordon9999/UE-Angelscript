#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "EditorUtilitySubsystem.h"
#include "UObject/NoExportTypes.h"
#include "EditorUtilityWidget.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilityTask.h"
#include "Blueprint/WidgetBlueprintGeneratedClass.h"
void FASEditorBind_20Module::Bind_EditorUtilitySubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "CanRun", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, CanRun, (UObject*) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "CloseTabByID", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, CloseTabByID, (FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "DoesTabExist", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, DoesTabExist, (FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "FindUtilityWidgetFromBlueprint", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, FindUtilityWidgetFromBlueprint, (class UEditorUtilityWidgetBlueprint*), ERASE_ARGUMENT_PACK(UEditorUtilityWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "RegisterAndExecuteTask", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, RegisterAndExecuteTask, (UEditorUtilityTask*,  UEditorUtilityTask*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "RegisterTabAndGetID", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, RegisterTabAndGetID, (class UEditorUtilityWidgetBlueprint*,  FName&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "RegisterTabAndGetIDGeneratedClass", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, RegisterTabAndGetIDGeneratedClass, (UWidgetBlueprintGeneratedClass*,  FName&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "ReleaseInstanceOfAsset", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, ReleaseInstanceOfAsset, (UObject*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "SpawnAndRegisterTab", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTab, (class UEditorUtilityWidgetBlueprint*), ERASE_ARGUMENT_PACK(UEditorUtilityWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "SpawnAndRegisterTabAndGetID", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabAndGetID, (class UEditorUtilityWidgetBlueprint*,  FName&), ERASE_ARGUMENT_PACK(UEditorUtilityWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "SpawnAndRegisterTabAndGetIDGeneratedClass", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabAndGetIDGeneratedClass, (UWidgetBlueprintGeneratedClass*,  FName&), ERASE_ARGUMENT_PACK(UEditorUtilityWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "SpawnAndRegisterTabGeneratedClass", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabGeneratedClass, (UWidgetBlueprintGeneratedClass*), ERASE_ARGUMENT_PACK(UEditorUtilityWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "SpawnAndRegisterTabWithId", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabWithId, (class UEditorUtilityWidgetBlueprint*,  FName), ERASE_ARGUMENT_PACK(UEditorUtilityWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "SpawnAndRegisterTabWithIdGeneratedClass", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabWithIdGeneratedClass, (UWidgetBlueprintGeneratedClass*,  FName), ERASE_ARGUMENT_PACK(UEditorUtilityWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "SpawnRegisteredTabByID", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnRegisteredTabByID, (FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "TryRun", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, TryRun, (UObject*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "TryRunClass", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, TryRunClass, (UClass*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilitySubsystem::StaticClass(), "UnregisterTabByID", { ERASE_METHOD_PTR(UEditorUtilitySubsystem, UnregisterTabByID, (FName), ERASE_ARGUMENT_PACK(bool )) } );
}
