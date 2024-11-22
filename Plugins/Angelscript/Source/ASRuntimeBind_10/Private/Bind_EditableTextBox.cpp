#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/EditableTextBox.h"
void FASRuntimeBind_10Module::Bind_EditableTextBox()
{
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "ClearError", { ERASE_METHOD_PTR(UEditableTextBox, ClearError, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "GetText", { ERASE_METHOD_PTR(UEditableTextBox, GetText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "HasError", { ERASE_METHOD_PTR(UEditableTextBox, HasError, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "SetError", { ERASE_METHOD_PTR(UEditableTextBox, SetError, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "SetForegroundColor", { ERASE_METHOD_PTR(UEditableTextBox, SetForegroundColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "SetHintText", { ERASE_METHOD_PTR(UEditableTextBox, SetHintText, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "SetIsPassword", { ERASE_METHOD_PTR(UEditableTextBox, SetIsPassword, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "SetIsReadOnly", { ERASE_METHOD_PTR(UEditableTextBox, SetIsReadOnly, ( bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableTextBox::StaticClass(), "SetText", { ERASE_METHOD_PTR(UEditableTextBox, SetText, (FText), ERASE_ARGUMENT_PACK( void )) } );
}
