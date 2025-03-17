#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/BorderSlot.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_BorderSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UBorderSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UBorderSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorderSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UBorderSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorderSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UBorderSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
