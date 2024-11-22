#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Overlay.h"
void FASRuntimeBind_10Module::Bind_Overlay()
{
			FAngelscriptBinds::AddFunctionEntry(UOverlay::StaticClass(), "AddChildToOverlay", { ERASE_METHOD_PTR(UOverlay, AddChildToOverlay, (UWidget*), ERASE_ARGUMENT_PACK( UOverlaySlot* )) } );
			FAngelscriptBinds::AddFunctionEntry(UOverlay::StaticClass(), "ReplaceOverlayChildAt", { ERASE_METHOD_PTR(UOverlay, ReplaceOverlayChildAt, (int32,  UWidget*), ERASE_ARGUMENT_PACK( bool )) } );
}
