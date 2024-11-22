#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Elements/Framework/TypedElementRegistry.h"
void FASRuntimeBind_0Module::Bind_TypedElementRegistry()
{
			FAngelscriptBinds::AddFunctionEntry(UTypedElementRegistry::StaticClass(), "GetElementInterface", { ERASE_METHOD_PTR(UTypedElementRegistry, GetElementInterface, (const FScriptTypedElementHandle&,  const TSubclassOf<UInterface>) const, ERASE_ARGUMENT_PACK( UObject* )) } );
}
