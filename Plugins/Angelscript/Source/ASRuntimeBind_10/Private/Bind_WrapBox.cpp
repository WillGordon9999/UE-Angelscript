#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WrapBox.h"
void FASRuntimeBind_10Module::Bind_WrapBox()
{
			FAngelscriptBinds::AddFunctionEntry(UWrapBox::StaticClass(), "AddChildToWrapBox", { ERASE_METHOD_PTR(UWrapBox, AddChildToWrapBox, (UWidget*), ERASE_ARGUMENT_PACK( UWrapBoxSlot* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWrapBox::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UWrapBox, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWrapBox::StaticClass(), "SetInnerSlotPadding", { ERASE_METHOD_PTR(UWrapBox, SetInnerSlotPadding, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
}
