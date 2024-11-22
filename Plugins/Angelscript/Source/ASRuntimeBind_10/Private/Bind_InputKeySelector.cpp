#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/InputKeySelector.h"
void FASRuntimeBind_10Module::Bind_InputKeySelector()
{
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "GetIsSelectingKey", { ERASE_METHOD_PTR(UInputKeySelector, GetIsSelectingKey, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "SetAllowGamepadKeys", { ERASE_METHOD_PTR(UInputKeySelector, SetAllowGamepadKeys, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "SetAllowModifierKeys", { ERASE_METHOD_PTR(UInputKeySelector, SetAllowModifierKeys, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "SetEscapeKeys", { ERASE_METHOD_PTR(UInputKeySelector, SetEscapeKeys, (const TArray<FKey>&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "SetKeySelectionText", { ERASE_METHOD_PTR(UInputKeySelector, SetKeySelectionText, ( FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "SetNoKeySpecifiedText", { ERASE_METHOD_PTR(UInputKeySelector, SetNoKeySpecifiedText, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "SetSelectedKey", { ERASE_METHOD_PTR(UInputKeySelector, SetSelectedKey, (const FInputChord&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputKeySelector::StaticClass(), "SetTextBlockVisibility", { ERASE_METHOD_PTR(UInputKeySelector, SetTextBlockVisibility, (const ESlateVisibility), ERASE_ARGUMENT_PACK( void )) } );
}
