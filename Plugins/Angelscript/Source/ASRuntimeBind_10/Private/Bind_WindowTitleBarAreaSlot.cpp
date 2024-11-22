#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WindowTitleBarAreaSlot.h"
void FASRuntimeBind_10Module::Bind_WindowTitleBarAreaSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UWindowTitleBarAreaSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UWindowTitleBarAreaSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindowTitleBarAreaSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UWindowTitleBarAreaSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindowTitleBarAreaSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UWindowTitleBarAreaSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
