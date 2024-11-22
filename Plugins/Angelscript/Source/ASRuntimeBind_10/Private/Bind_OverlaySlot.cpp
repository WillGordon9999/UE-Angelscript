#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/OverlaySlot.h"
void FASRuntimeBind_10Module::Bind_OverlaySlot()
{
			FAngelscriptBinds::AddFunctionEntry(UOverlaySlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UOverlaySlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UOverlaySlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UOverlaySlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UOverlaySlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UOverlaySlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
