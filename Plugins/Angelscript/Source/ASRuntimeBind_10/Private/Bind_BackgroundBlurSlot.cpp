#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/BackgroundBlurSlot.h"
void FASRuntimeBind_10Module::Bind_BackgroundBlurSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlurSlot::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UBackgroundBlurSlot, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlurSlot::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UBackgroundBlurSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBackgroundBlurSlot::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UBackgroundBlurSlot, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
