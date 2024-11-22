#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/CheckBox.h"
void FASRuntimeBind_10Module::Bind_CheckBox()
{
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "GetCheckedState", { ERASE_METHOD_PTR(UCheckBox, GetCheckedState, () const, ERASE_ARGUMENT_PACK( ECheckBoxState )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "IsChecked", { ERASE_METHOD_PTR(UCheckBox, IsChecked, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "IsPressed", { ERASE_METHOD_PTR(UCheckBox, IsPressed, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "SetCheckedState", { ERASE_METHOD_PTR(UCheckBox, SetCheckedState, (ECheckBoxState), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "SetClickMethod", { ERASE_METHOD_PTR(UCheckBox, SetClickMethod, (EButtonClickMethod::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "SetIsChecked", { ERASE_METHOD_PTR(UCheckBox, SetIsChecked, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "SetPressMethod", { ERASE_METHOD_PTR(UCheckBox, SetPressMethod, (EButtonPressMethod::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheckBox::StaticClass(), "SetTouchMethod", { ERASE_METHOD_PTR(UCheckBox, SetTouchMethod, (EButtonTouchMethod::Type), ERASE_ARGUMENT_PACK( void )) } );
}
