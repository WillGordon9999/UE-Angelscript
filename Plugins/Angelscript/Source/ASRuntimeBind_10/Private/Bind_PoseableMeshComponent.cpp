#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_PoseableMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "CopyPoseFromSkeletalComponent", { ERASE_METHOD_PTR(UPoseableMeshComponent, CopyPoseFromSkeletalComponent, (USkeletalMeshComponent*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "GetBoneLocationByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneLocationByName, (FName,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "GetBoneRotationByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneRotationByName, (FName,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "GetBoneScaleByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneScaleByName, (FName,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "GetBoneTransformByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneTransformByName, (FName,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "ResetBoneTransformByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, ResetBoneTransformByName, (FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "SetBoneLocationByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneLocationByName, (FName,  FVector,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "SetBoneRotationByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneRotationByName, (FName,  FRotator,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "SetBoneScaleByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneScaleByName, (FName,  FVector,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseableMeshComponent::StaticClass(), "SetBoneTransformByName", { ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneTransformByName, (FName,  const FTransform&,  EBoneSpaces::Type), ERASE_ARGUMENT_PACK( void )) } );
}
