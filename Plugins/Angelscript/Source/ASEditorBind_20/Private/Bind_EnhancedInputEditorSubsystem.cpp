#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "EnhancedInputEditorSubsystem.h"
#include "Components/InputComponent.h"
void FASEditorBind_20Module::Bind_EnhancedInputEditorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputEditorSubsystem::StaticClass(), "IsConsumingInput", { ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, IsConsumingInput, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputEditorSubsystem::StaticClass(), "PopInputComponent", { ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, PopInputComponent, (UInputComponent*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputEditorSubsystem::StaticClass(), "PushInputComponent", { ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, PushInputComponent, (UInputComponent*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputEditorSubsystem::StaticClass(), "StartConsumingInput", { ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, StartConsumingInput, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputEditorSubsystem::StaticClass(), "StopConsumingInput", { ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, StopConsumingInput, (), ERASE_ARGUMENT_PACK(void )) } );
}
