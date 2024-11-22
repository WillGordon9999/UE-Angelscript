#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/PostProcessComponent.h"
void FASRuntimeBind_10Module::Bind_PostProcessComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPostProcessComponent::StaticClass(), "AddOrUpdateBlendable", { ERASE_METHOD_PTR(UPostProcessComponent, AddOrUpdateBlendable, (TScriptInterface<IBlendableInterface>,  float), ERASE_ARGUMENT_PACK(void )) } );
}
