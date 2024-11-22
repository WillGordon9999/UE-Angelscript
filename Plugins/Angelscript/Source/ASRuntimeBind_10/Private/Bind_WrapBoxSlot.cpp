#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WrapBoxSlot.h"
void FASRuntimeBind_10Module::Bind_WrapBoxSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UWrapBoxSlot::StaticClass(), "SetFillEmptySpace", { ERASE_METHOD_PTR(UWrapBoxSlot, SetFillEmptySpace, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWrapBoxSlot::StaticClass(), "SetFillSpanWhenLessThan", { ERASE_METHOD_PTR(UWrapBoxSlot, SetFillSpanWhenLessThan, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWrapBoxSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UWrapBoxSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWrapBoxSlot::StaticClass(), "SetNewLine", { ERASE_METHOD_PTR(UWrapBoxSlot, SetNewLine, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWrapBoxSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UWrapBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWrapBoxSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UWrapBoxSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
