#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WindowTitleBarArea.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_WindowTitleBarArea()
{
			FAngelscriptBinds::AddFunctionEntry(UWindowTitleBarArea::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UWindowTitleBarArea, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindowTitleBarArea::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UWindowTitleBarArea, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWindowTitleBarArea::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UWindowTitleBarArea, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
