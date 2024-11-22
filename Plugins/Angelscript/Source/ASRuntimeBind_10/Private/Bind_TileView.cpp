#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/TileView.h"
void FASRuntimeBind_10Module::Bind_TileView()
{
			FAngelscriptBinds::AddFunctionEntry(UTileView::StaticClass(), "GetEntryHeight", { ERASE_METHOD_PTR(UTileView, GetEntryHeight, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTileView::StaticClass(), "GetEntryWidth", { ERASE_METHOD_PTR(UTileView, GetEntryWidth, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTileView::StaticClass(), "SetEntryHeight", { ERASE_METHOD_PTR(UTileView, SetEntryHeight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTileView::StaticClass(), "SetEntryWidth", { ERASE_METHOD_PTR(UTileView, SetEntryWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
}
