#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "ToolMenu.h"
#include "ToolMenuSection.h"
#include "ToolMenuEntry.h"
#include "ToolMenuEntryScript.h"
#include "ToolMenuMisc.h"
#include "ToolMenuOwner.h"
#include "Framework/MultiBox/MultiBoxDefs.h"
void FASRuntimeBind_0Module::Bind_ToolMenu()
{
			FAngelscriptBinds::AddFunctionEntry(UToolMenu::StaticClass(), "AddDynamicSectionScript", { ERASE_METHOD_PTR(UToolMenu, AddDynamicSectionScript, (const FName,  UToolMenuSectionDynamic*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenu::StaticClass(), "AddMenuEntry", { ERASE_METHOD_PTR(UToolMenu, AddMenuEntry, (const FName,  const FToolMenuEntry&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenu::StaticClass(), "AddMenuEntryObject", { ERASE_METHOD_PTR(UToolMenu, AddMenuEntryObject, (UToolMenuEntryScript*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenu::StaticClass(), "AddSectionScript", { ERASE_METHOD_PTR(UToolMenu, AddSectionScript, (const FName,  const FText&,  const FName,  const EToolMenuInsertType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenu::StaticClass(), "AddSubMenuScript", { ERASE_METHOD_PTR(UToolMenu, AddSubMenuScript, (const FName,  const FName,  const FName,  const FText&,  const FText&), ERASE_ARGUMENT_PACK(UToolMenu* )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenu::StaticClass(), "InitMenu", { ERASE_METHOD_PTR(UToolMenu, InitMenu, (const FToolMenuOwner,  FName,  FName,  EMultiBoxType), ERASE_ARGUMENT_PACK(void )) } );
}
