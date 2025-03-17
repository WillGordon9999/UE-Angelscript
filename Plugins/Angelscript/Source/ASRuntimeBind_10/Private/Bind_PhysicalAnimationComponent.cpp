#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
void FASRuntimeBind_10Module::Bind_PhysicalAnimationComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPhysicalAnimationComponent::StaticClass(), "ApplyPhysicalAnimationProfileBelow", { ERASE_METHOD_PTR(UPhysicalAnimationComponent, ApplyPhysicalAnimationProfileBelow, (FName,  FName,  bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicalAnimationComponent::StaticClass(), "ApplyPhysicalAnimationSettings", { ERASE_METHOD_PTR(UPhysicalAnimationComponent, ApplyPhysicalAnimationSettings, (FName,  const FPhysicalAnimationData&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicalAnimationComponent::StaticClass(), "ApplyPhysicalAnimationSettingsBelow", { ERASE_METHOD_PTR(UPhysicalAnimationComponent, ApplyPhysicalAnimationSettingsBelow, (FName,  const FPhysicalAnimationData&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicalAnimationComponent::StaticClass(), "GetBodyTargetTransform", { ERASE_METHOD_PTR(UPhysicalAnimationComponent, GetBodyTargetTransform, (FName) const, ERASE_ARGUMENT_PACK( FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicalAnimationComponent::StaticClass(), "SetSkeletalMeshComponent", { ERASE_METHOD_PTR(UPhysicalAnimationComponent, SetSkeletalMeshComponent, (USkeletalMeshComponent*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicalAnimationComponent::StaticClass(), "SetStrengthMultiplyer", { ERASE_METHOD_PTR(UPhysicalAnimationComponent, SetStrengthMultiplyer, (float), ERASE_ARGUMENT_PACK( void )) } );
}
