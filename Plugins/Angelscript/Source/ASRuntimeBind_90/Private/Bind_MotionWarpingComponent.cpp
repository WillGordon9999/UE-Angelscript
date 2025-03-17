#include "ASRuntimeBind_90Module.h"
#include "AngelscriptBinds.h"
#include "MotionWarpingComponent.h"
#include "RootMotionModifier.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_90Module::Bind_MotionWarpingComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "AddOrUpdateWarpTarget", { ERASE_METHOD_PTR(UMotionWarpingComponent, AddOrUpdateWarpTarget, (const FMotionWarpingTarget&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "AddOrUpdateWarpTargetFromComponent", { ERASE_METHOD_PTR(UMotionWarpingComponent, AddOrUpdateWarpTargetFromComponent, (FName,  const USceneComponent*,  FName,  bool,  FVector,  FRotator), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "AddOrUpdateWarpTargetFromLocation", { ERASE_METHOD_PTR(UMotionWarpingComponent, AddOrUpdateWarpTargetFromLocation, (FName,  FVector), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "AddOrUpdateWarpTargetFromLocationAndRotation", { ERASE_METHOD_PTR(UMotionWarpingComponent, AddOrUpdateWarpTargetFromLocationAndRotation, (FName,  FVector,  FRotator), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "AddOrUpdateWarpTargetFromTransform", { ERASE_METHOD_PTR(UMotionWarpingComponent, AddOrUpdateWarpTargetFromTransform, (FName,  FTransform), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "DisableAllRootMotionModifiers", { ERASE_METHOD_PTR(UMotionWarpingComponent, DisableAllRootMotionModifiers, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "RemoveAllWarpTargets", { ERASE_METHOD_PTR(UMotionWarpingComponent, RemoveAllWarpTargets, (), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMotionWarpingComponent::StaticClass(), "RemoveWarpTarget", { ERASE_METHOD_PTR(UMotionWarpingComponent, RemoveWarpTarget, (FName), ERASE_ARGUMENT_PACK(int32 )) } );
}
