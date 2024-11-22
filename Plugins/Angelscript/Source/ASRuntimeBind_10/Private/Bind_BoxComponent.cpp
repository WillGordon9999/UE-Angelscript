#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/BoxComponent.h"
void FASRuntimeBind_10Module::Bind_BoxComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UBoxComponent::StaticClass(), "GetScaledBoxExtent", { ERASE_METHOD_PTR(UBoxComponent, GetScaledBoxExtent, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UBoxComponent::StaticClass(), "GetUnscaledBoxExtent", { ERASE_METHOD_PTR(UBoxComponent, GetUnscaledBoxExtent, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UBoxComponent::StaticClass(), "SetBoxExtent", { ERASE_METHOD_PTR(UBoxComponent, SetBoxExtent, (FVector,  bool), ERASE_ARGUMENT_PACK( void )) } );
}
