#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "MotionControllerComponent.h"
void FASRuntimeBind_10Module::Bind_MotionControllerComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMotionControllerComponent::StaticClass(), "IsTracked", { ERASE_METHOD_PTR(UMotionControllerComponent, IsTracked, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
