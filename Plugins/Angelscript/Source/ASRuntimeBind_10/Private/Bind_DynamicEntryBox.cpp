#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/DynamicEntryBox.h"
void FASRuntimeBind_10Module::Bind_DynamicEntryBox()
{
			FAngelscriptBinds::AddFunctionEntry(UDynamicEntryBox::StaticClass(), "RemoveEntry", { ERASE_METHOD_PTR(UDynamicEntryBox, RemoveEntry, (UUserWidget*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicEntryBox::StaticClass(), "Reset", { ERASE_METHOD_PTR(UDynamicEntryBox, Reset, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
