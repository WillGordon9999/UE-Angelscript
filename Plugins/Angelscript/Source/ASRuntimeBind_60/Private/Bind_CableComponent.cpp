#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "CableComponent.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_60Module::Bind_CableComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCableComponent::StaticClass(), "GetAttachedActor", { ERASE_METHOD_PTR(UCableComponent, GetAttachedActor, () const, ERASE_ARGUMENT_PACK(AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UCableComponent::StaticClass(), "GetAttachedComponent", { ERASE_METHOD_PTR(UCableComponent, GetAttachedComponent, () const, ERASE_ARGUMENT_PACK(USceneComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UCableComponent::StaticClass(), "GetCableParticleLocations", { ERASE_METHOD_PTR(UCableComponent, GetCableParticleLocations, (TArray<FVector>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCableComponent::StaticClass(), "SetAttachEndTo", { ERASE_METHOD_PTR(UCableComponent, SetAttachEndTo, (AActor*,  FName,  FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCableComponent::StaticClass(), "SetAttachEndToComponent", { ERASE_METHOD_PTR(UCableComponent, SetAttachEndToComponent, (USceneComponent*,  FName), ERASE_ARGUMENT_PACK(void )) } );
}
