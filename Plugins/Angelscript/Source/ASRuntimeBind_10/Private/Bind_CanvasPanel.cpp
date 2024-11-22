#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/CanvasPanel.h"
void FASRuntimeBind_10Module::Bind_CanvasPanel()
{
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanel::StaticClass(), "AddChildToCanvas", { ERASE_METHOD_PTR(UCanvasPanel, AddChildToCanvas, (UWidget*), ERASE_ARGUMENT_PACK( UCanvasPanelSlot* )) } );
}
