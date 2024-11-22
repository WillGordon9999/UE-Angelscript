#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WidgetSwitcherSlot.h"
void FASRuntimeBind_10Module::Bind_WidgetSwitcherSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcherSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UWidgetSwitcherSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcherSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UWidgetSwitcherSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetSwitcherSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UWidgetSwitcherSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
