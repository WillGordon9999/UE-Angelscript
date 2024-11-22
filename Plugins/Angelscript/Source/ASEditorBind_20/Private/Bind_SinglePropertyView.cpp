#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Components/SinglePropertyView.h"
void FASEditorBind_20Module::Bind_SinglePropertyView()
{
			FAngelscriptBinds::AddFunctionEntry(USinglePropertyView::StaticClass(), "GetNameOverride", { ERASE_METHOD_PTR(USinglePropertyView, GetNameOverride, () const, ERASE_ARGUMENT_PACK(FText )) } );
			FAngelscriptBinds::AddFunctionEntry(USinglePropertyView::StaticClass(), "GetPropertyName", { ERASE_METHOD_PTR(USinglePropertyView, GetPropertyName, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(USinglePropertyView::StaticClass(), "SetNameOverride", { ERASE_METHOD_PTR(USinglePropertyView, SetNameOverride, (FText), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USinglePropertyView::StaticClass(), "SetPropertyName", { ERASE_METHOD_PTR(USinglePropertyView, SetPropertyName, (FName), ERASE_ARGUMENT_PACK(void )) } );
}
