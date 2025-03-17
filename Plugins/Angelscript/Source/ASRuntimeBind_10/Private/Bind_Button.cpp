#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Button.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
void FASRuntimeBind_10Module::Bind_Button()
{
			FAngelscriptBinds::AddFunctionEntry(UButton::StaticClass(), "IsPressed", { ERASE_METHOD_PTR(UButton, IsPressed, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UButton::StaticClass(), "SetBackgroundColor", { ERASE_METHOD_PTR(UButton, SetBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UButton::StaticClass(), "SetClickMethod", { ERASE_METHOD_PTR(UButton, SetClickMethod, (EButtonClickMethod::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UButton::StaticClass(), "SetColorAndOpacity", { ERASE_METHOD_PTR(UButton, SetColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UButton::StaticClass(), "SetPressMethod", { ERASE_METHOD_PTR(UButton, SetPressMethod, (EButtonPressMethod::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UButton::StaticClass(), "SetStyle", { ERASE_METHOD_PTR(UButton, SetStyle, (const FButtonStyle&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UButton::StaticClass(), "SetTouchMethod", { ERASE_METHOD_PTR(UButton, SetTouchMethod, (EButtonTouchMethod::Type), ERASE_ARGUMENT_PACK( void )) } );
}
