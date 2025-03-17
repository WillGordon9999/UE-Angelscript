#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ListView.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_ListView()
{
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "AddItem", { ERASE_METHOD_PTR(UListView, AddItem, (UObject*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "ClearListItems", { ERASE_METHOD_PTR(UListView, ClearListItems, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "GetHorizontalEntrySpacing", { ERASE_METHOD_PTR(UListView, GetHorizontalEntrySpacing, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "GetIndexForItem", { ERASE_METHOD_PTR(UListView, GetIndexForItem, (const UObject*) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "GetItemAt", { ERASE_METHOD_PTR(UListView, GetItemAt, (int32) const, ERASE_ARGUMENT_PACK( UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "GetListItems", { ERASE_METHOD_PTR(UListView, GetListItems, () const, ERASE_ARGUMENT_PACK(const TArray<UObject*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "GetNumItems", { ERASE_METHOD_PTR(UListView, GetNumItems, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "GetVerticalEntrySpacing", { ERASE_METHOD_PTR(UListView, GetVerticalEntrySpacing, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "IsRefreshPending", { ERASE_METHOD_PTR(UListView, IsRefreshPending, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "NavigateToIndex", { ERASE_METHOD_PTR(UListView, NavigateToIndex, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "RemoveItem", { ERASE_METHOD_PTR(UListView, RemoveItem, (UObject*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "ScrollIndexIntoView", { ERASE_METHOD_PTR(UListView, ScrollIndexIntoView, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "SetSelectedIndex", { ERASE_METHOD_PTR(UListView, SetSelectedIndex, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UListView::StaticClass(), "SetSelectionMode", { ERASE_METHOD_PTR(UListView, SetSelectionMode, (TEnumAsByte<ESelectionMode::Type>), ERASE_ARGUMENT_PACK( void )) } );
}
