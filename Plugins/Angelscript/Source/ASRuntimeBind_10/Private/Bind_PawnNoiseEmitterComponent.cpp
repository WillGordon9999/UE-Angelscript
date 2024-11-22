#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/PawnNoiseEmitterComponent.h"
void FASRuntimeBind_10Module::Bind_PawnNoiseEmitterComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPawnNoiseEmitterComponent::StaticClass(), "MakeNoise", { ERASE_METHOD_PTR(UPawnNoiseEmitterComponent, MakeNoise, (AActor*,  float,  const FVector&), ERASE_ARGUMENT_PACK(  void )) } );
}
