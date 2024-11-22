#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WidgetSwitcher.h"
void FASRuntimeBind_10Module::Bind_WidgetSwitcher()
{
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcher::StaticClass(), "GetActiveWidget", { ERASE_METHOD_PTR(UWidgetSwitcher, GetActiveWidget, () const, ERASE_ARGUMENT_PACK( UWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcher::StaticClass(), "GetActiveWidgetIndex", { ERASE_METHOD_PTR(UWidgetSwitcher, GetActiveWidgetIndex, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcher::StaticClass(), "GetNumWidgets", { ERASE_METHOD_PTR(UWidgetSwitcher, GetNumWidgets, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcher::StaticClass(), "GetWidgetAtIndex", { ERASE_METHOD_PTR(UWidgetSwitcher, GetWidgetAtIndex, ( int32) const, ERASE_ARGUMENT_PACK( UWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcher::StaticClass(), "SetActiveWidget", { ERASE_METHOD_PTR(UWidgetSwitcher, SetActiveWidget, (UWidget*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcher::StaticClass(), "SetActiveWidgetIndex", { ERASE_METHOD_PTR(UWidgetSwitcher, SetActiveWidgetIndex, ( int32), ERASE_ARGUMENT_PACK(  void )) } );
}
