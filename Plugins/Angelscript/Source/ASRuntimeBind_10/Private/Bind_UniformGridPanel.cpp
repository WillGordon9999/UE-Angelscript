#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "Components/Widget.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_UniformGridPanel()
{
			FAngelscriptBinds::AddFunctionEntry(UUniformGridPanel::StaticClass(), "AddChildToUniformGrid", { ERASE_METHOD_PTR(UUniformGridPanel, AddChildToUniformGrid, (UWidget*,  int32,  int32), ERASE_ARGUMENT_PACK( UUniformGridSlot* )) } );
			FAngelscriptBinds::AddFunctionEntry(UUniformGridPanel::StaticClass(), "SetMinDesiredSlotHeight", { ERASE_METHOD_PTR(UUniformGridPanel, SetMinDesiredSlotHeight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUniformGridPanel::StaticClass(), "SetMinDesiredSlotWidth", { ERASE_METHOD_PTR(UUniformGridPanel, SetMinDesiredSlotWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UUniformGridPanel::StaticClass(), "SetSlotPadding", { ERASE_METHOD_PTR(UUniformGridPanel, SetSlotPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
}
