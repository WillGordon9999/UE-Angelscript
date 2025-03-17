#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/Widget.h"
void FASRuntimeBind_10Module::Bind_VerticalBox()
{
			FAngelscriptBinds::AddFunctionEntry(UVerticalBox::StaticClass(), "AddChildToVerticalBox", { ERASE_METHOD_PTR(UVerticalBox, AddChildToVerticalBox, (UWidget*), ERASE_ARGUMENT_PACK( UVerticalBoxSlot* )) } );
}
