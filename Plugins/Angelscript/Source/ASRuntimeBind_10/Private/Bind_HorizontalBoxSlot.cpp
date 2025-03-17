#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/HorizontalBoxSlot.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
void FASRuntimeBind_10Module::Bind_HorizontalBoxSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UHorizontalBoxSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UHorizontalBoxSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHorizontalBoxSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UHorizontalBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHorizontalBoxSlot::StaticClass(), "SetSize", { ERASE_METHOD_PTR(UHorizontalBoxSlot, SetSize, (FSlateChildSize), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHorizontalBoxSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UHorizontalBoxSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
