#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "EnhancedInputComponent.h"
void FASRuntimeBind_40Module::Bind_EnhancedInputComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputComponent::StaticClass(), "GetBoundActionValue", { ERASE_METHOD_PTR(UEnhancedInputComponent, GetBoundActionValue, (const UInputAction*) const, ERASE_ARGUMENT_PACK(FInputActionValue )) } );
}
