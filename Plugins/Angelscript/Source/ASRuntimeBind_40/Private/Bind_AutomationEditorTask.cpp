#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "AutomationBlueprintFunctionLibrary.h"
void FASRuntimeBind_40Module::Bind_AutomationEditorTask()
{
			FAngelscriptBinds::AddFunctionEntry(UAutomationEditorTask::StaticClass(), "IsTaskDone", { ERASE_METHOD_PTR(UAutomationEditorTask, IsTaskDone, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationEditorTask::StaticClass(), "IsValidTask", { ERASE_METHOD_PTR(UAutomationEditorTask, IsValidTask, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
