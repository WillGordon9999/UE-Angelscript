#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/VerticalBoxSlot.h"
void FASRuntimeBind_10Module::Bind_VerticalBoxSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UVerticalBoxSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UVerticalBoxSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVerticalBoxSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UVerticalBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVerticalBoxSlot::StaticClass(), "SetSize", { ERASE_METHOD_PTR(UVerticalBoxSlot, SetSize, (FSlateChildSize), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVerticalBoxSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UVerticalBoxSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
