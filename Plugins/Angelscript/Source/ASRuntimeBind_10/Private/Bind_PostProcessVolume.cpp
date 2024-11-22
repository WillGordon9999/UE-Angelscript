#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/PostProcessVolume.h"
void FASRuntimeBind_10Module::Bind_PostProcessVolume()
{
			FAngelscriptBinds::AddFunctionEntry(APostProcessVolume::StaticClass(), "AddOrUpdateBlendable", { ERASE_METHOD_PTR(APostProcessVolume, AddOrUpdateBlendable, (TScriptInterface<IBlendableInterface>,  float), ERASE_ARGUMENT_PACK(void )) } );
}
