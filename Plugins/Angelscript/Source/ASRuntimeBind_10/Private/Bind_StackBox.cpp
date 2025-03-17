#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/StackBox.h"
#include "Components/StackBoxSlot.h"
#include "Components/Widget.h"
void FASRuntimeBind_10Module::Bind_StackBox()
{
			FAngelscriptBinds::AddFunctionEntry(UStackBox::StaticClass(), "AddChildToStackBox", { ERASE_METHOD_PTR(UStackBox, AddChildToStackBox, (UWidget*), ERASE_ARGUMENT_PACK( UStackBoxSlot* )) } );
			FAngelscriptBinds::AddFunctionEntry(UStackBox::StaticClass(), "ReplaceStackBoxChildAt", { ERASE_METHOD_PTR(UStackBox, ReplaceStackBoxChildAt, (int32,  UWidget*), ERASE_ARGUMENT_PACK( bool )) } );
}
