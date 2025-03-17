#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/MultiLineEditableTextBox.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
void FASRuntimeBind_10Module::Bind_MultiLineEditableTextBox()
{
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "GetHintText", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, GetHintText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "GetText", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, GetText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "SetError", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetError, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "SetForegroundColor", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetForegroundColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "SetHintText", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetHintText, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "SetIsReadOnly", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetIsReadOnly, ( bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "SetText", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetText, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableTextBox::StaticClass(), "SetTextStyle", { ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetTextStyle, (const FTextBlockStyle&), ERASE_ARGUMENT_PACK( void )) } );
}
