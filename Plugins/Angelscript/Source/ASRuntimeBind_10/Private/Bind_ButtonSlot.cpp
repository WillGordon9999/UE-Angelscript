#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ButtonSlot.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_ButtonSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UButtonSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UButtonSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UButtonSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UButtonSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UButtonSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UButtonSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
