#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "ToolMenus.h"
#include "ToolMenu.h"
#include "Framework/MultiBox/MultiBoxDefs.h"
#include "ToolMenuMisc.h"
void FASRuntimeBind_0Module::Bind_ToolMenus()
{
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "ExtendMenu", { ERASE_METHOD_PTR(UToolMenus, ExtendMenu, (const FName), ERASE_ARGUMENT_PACK(UToolMenu* )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "FindMenu", { ERASE_METHOD_PTR(UToolMenus, FindMenu, (const FName), ERASE_ARGUMENT_PACK(UToolMenu* )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "IsMenuRegistered", { ERASE_METHOD_PTR(UToolMenus, IsMenuRegistered, (const FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "RefreshAllWidgets", { ERASE_METHOD_PTR(UToolMenus, RefreshAllWidgets, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "RefreshMenuWidget", { ERASE_METHOD_PTR(UToolMenus, RefreshMenuWidget, (const FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "RegisterMenu", { ERASE_METHOD_PTR(UToolMenus, RegisterMenu, (FName,  const FName,  EMultiBoxType,  bool), ERASE_ARGUMENT_PACK(UToolMenu* )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "RemoveEntry", { ERASE_METHOD_PTR(UToolMenus, RemoveEntry, (const FName,  const FName,  const FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "RemoveMenu", { ERASE_METHOD_PTR(UToolMenus, RemoveMenu, (const FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "RemoveSection", { ERASE_METHOD_PTR(UToolMenus, RemoveSection, (const FName,  const FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "SetSectionLabel", { ERASE_METHOD_PTR(UToolMenus, SetSectionLabel, (const FName,  const FName,  const FText), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "SetSectionPosition", { ERASE_METHOD_PTR(UToolMenus, SetSectionPosition, (const FName,  const FName,  const FName,  const EToolMenuInsertType), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UToolMenus::StaticClass(), "UnregisterOwnerByName", { ERASE_METHOD_PTR(UToolMenus, UnregisterOwnerByName, (FName), ERASE_ARGUMENT_PACK(void )) } );
}
