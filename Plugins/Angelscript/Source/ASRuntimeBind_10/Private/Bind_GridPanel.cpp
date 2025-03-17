#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/GridPanel.h"
#include "Components/GridSlot.h"
#include "Components/Widget.h"
void FASRuntimeBind_10Module::Bind_GridPanel()
{
			FAngelscriptBinds::AddFunctionEntry(UGridPanel::StaticClass(), "AddChildToGrid", { ERASE_METHOD_PTR(UGridPanel, AddChildToGrid, (UWidget*,  int32,  int32), ERASE_ARGUMENT_PACK( UGridSlot* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridPanel::StaticClass(), "SetColumnFill", { ERASE_METHOD_PTR(UGridPanel, SetColumnFill, (int32,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGridPanel::StaticClass(), "SetRowFill", { ERASE_METHOD_PTR(UGridPanel, SetRowFill, (int32,  float), ERASE_ARGUMENT_PACK( void )) } );
}
