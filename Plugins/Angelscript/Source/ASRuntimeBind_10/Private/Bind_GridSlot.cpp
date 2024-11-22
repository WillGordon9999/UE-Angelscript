#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/GridSlot.h"
void FASRuntimeBind_10Module::Bind_GridSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetColumn", { ERASE_METHOD_PTR(UGridSlot, SetColumn, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetColumnSpan", { ERASE_METHOD_PTR(UGridSlot, SetColumnSpan, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UGridSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetLayer", { ERASE_METHOD_PTR(UGridSlot, SetLayer, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetNudge", { ERASE_METHOD_PTR(UGridSlot, SetNudge, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UGridSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetRow", { ERASE_METHOD_PTR(UGridSlot, SetRow, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetRowSpan", { ERASE_METHOD_PTR(UGridSlot, SetRowSpan, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UGridSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
