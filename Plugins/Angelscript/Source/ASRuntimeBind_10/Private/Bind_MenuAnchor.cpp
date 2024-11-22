#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/MenuAnchor.h"
void FASRuntimeBind_10Module::Bind_MenuAnchor()
{
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "Close", { ERASE_METHOD_PTR(UMenuAnchor, Close, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "FitInWindow", { ERASE_METHOD_PTR(UMenuAnchor, FitInWindow, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "GetMenuPosition", { ERASE_METHOD_PTR(UMenuAnchor, GetMenuPosition, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "HasOpenSubMenus", { ERASE_METHOD_PTR(UMenuAnchor, HasOpenSubMenus, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "IsOpen", { ERASE_METHOD_PTR(UMenuAnchor, IsOpen, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "Open", { ERASE_METHOD_PTR(UMenuAnchor, Open, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "SetPlacement", { ERASE_METHOD_PTR(UMenuAnchor, SetPlacement, (EMenuPlacement), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "ShouldOpenDueToClick", { ERASE_METHOD_PTR(UMenuAnchor, ShouldOpenDueToClick, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMenuAnchor::StaticClass(), "ToggleOpen", { ERASE_METHOD_PTR(UMenuAnchor, ToggleOpen, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
