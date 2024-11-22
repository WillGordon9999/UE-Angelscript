#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/BoundsCopyComponent.h"
void FASRuntimeBind_10Module::Bind_BoundsCopyComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UBoundsCopyComponent::StaticClass(), "SetRotation", { ERASE_METHOD_PTR(UBoundsCopyComponent, SetRotation, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBoundsCopyComponent::StaticClass(), "SetTransformToBounds", { ERASE_METHOD_PTR(UBoundsCopyComponent, SetTransformToBounds, (), ERASE_ARGUMENT_PACK( void )) } );
}
