#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/CanvasPanelSlot.h"
void FASRuntimeBind_10Module::Bind_CanvasPanelSlot()
{
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetAlignment", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetAlignment, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetAnchors", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetAnchors, () const, ERASE_ARGUMENT_PACK( FAnchors )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetAutoSize", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetAutoSize, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetLayout", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetLayout, () const, ERASE_ARGUMENT_PACK( FAnchorData )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetOffsets", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetOffsets, () const, ERASE_ARGUMENT_PACK( FMargin )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetPosition", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetPosition, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetSize", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetSize, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "GetZOrder", { ERASE_METHOD_PTR(UCanvasPanelSlot, GetZOrder, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetAlignment", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetAlignment, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetAnchors", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetAnchors, (FAnchors), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetAutoSize", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetAutoSize, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetLayout", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetLayout, (const FAnchorData&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetOffsets", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetOffsets, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetPosition", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetPosition, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetSize", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetSize, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasPanelSlot::StaticClass(), "SetZOrder", { ERASE_METHOD_PTR(UCanvasPanelSlot, SetZOrder, (int32), ERASE_ARGUMENT_PACK( void )) } );
}
