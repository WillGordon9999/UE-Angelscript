#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Widget.h"
void FASRuntimeBind_10Module::Bind_HorizontalBox()
{
			FAngelscriptBinds::AddFunctionEntry(UHorizontalBox::StaticClass(), "AddChildToHorizontalBox", { ERASE_METHOD_PTR(UHorizontalBox, AddChildToHorizontalBox, (UWidget*), ERASE_ARGUMENT_PACK( UHorizontalBoxSlot* )) } );
}
