#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/ProjectileMovementComponent.h"
void FASRuntimeBind_10Module::Bind_ProjectileMovementComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "IsInterpolationComplete", { ERASE_METHOD_PTR(UProjectileMovementComponent, IsInterpolationComplete, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "IsVelocityUnderSimulationThreshold", { ERASE_METHOD_PTR(UProjectileMovementComponent, IsVelocityUnderSimulationThreshold, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "LimitVelocity", { ERASE_METHOD_PTR(UProjectileMovementComponent, LimitVelocity, (FVector) const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "MoveInterpolationTarget", { ERASE_METHOD_PTR(UProjectileMovementComponent, MoveInterpolationTarget, (const FVector&,  const FRotator&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "ResetInterpolation", { ERASE_METHOD_PTR(UProjectileMovementComponent, ResetInterpolation, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "SetInterpolatedComponent", { ERASE_METHOD_PTR(UProjectileMovementComponent, SetInterpolatedComponent, (USceneComponent*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "SetVelocityInLocalSpace", { ERASE_METHOD_PTR(UProjectileMovementComponent, SetVelocityInLocalSpace, (FVector), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProjectileMovementComponent::StaticClass(), "StopSimulating", { ERASE_METHOD_PTR(UProjectileMovementComponent, StopSimulating, (const FHitResult&), ERASE_ARGUMENT_PACK(  void )) } );
}
