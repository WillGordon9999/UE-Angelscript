#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ScaleBoxSlot.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_ScaleBoxSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UScaleBoxSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UScaleBoxSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScaleBoxSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UScaleBoxSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
