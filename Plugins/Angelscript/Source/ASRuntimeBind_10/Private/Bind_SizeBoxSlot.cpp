#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SizeBoxSlot.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_SizeBoxSlot()
{
			FAngelscriptBinds::AddFunctionEntry(USizeBoxSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(USizeBoxSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBoxSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(USizeBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBoxSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(USizeBoxSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
