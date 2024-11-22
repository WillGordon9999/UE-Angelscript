#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ArrowComponent.h"
void FASRuntimeBind_10Module::Bind_ArrowComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UArrowComponent::StaticClass(), "SetArrowColor", { ERASE_METHOD_PTR(UArrowComponent, SetArrowColor, (FLinearColor), ERASE_ARGUMENT_PACK(  void )) } );
}
