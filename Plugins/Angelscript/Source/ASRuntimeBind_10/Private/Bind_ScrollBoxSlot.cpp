#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ScrollBoxSlot.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_ScrollBoxSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UScrollBoxSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UScrollBoxSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBoxSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UScrollBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBoxSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UScrollBoxSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
