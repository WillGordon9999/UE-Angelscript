#include "AngelscriptNativeBindsModule.h"
#include "AngelscriptBinds.h"

IMPLEMENT_MODULE(FAngelscriptNativeBindsModule, AngelscriptNativeBinds);

void FAngelscriptNativeBindsModule::StartupModule()
{
	/*
	FAngelscriptBinds::RegisterBinds
	(
		///*(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetConstraintByName", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraintByName, (FName,  bool), ERASE_ARGUMENT_PACK(FConstraintInstanceAccessor)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetConstraints", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraints, (bool,  TArray<FConstraintInstanceAccessor>&), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetConstraintsFromBody", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraintsFromBody, (FName,  bool,  bool,  bool,  TArray<FConstraintInstanceAccessor>&), ERASE_ARGUMENT_PACK(void)) });

			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceConstant::StaticClass(), "K2_GetScalarParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceConstant, K2_GetScalarParameterValue, (FName), ERASE_ARGUMENT_PACK(float)) });
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceConstant::StaticClass(), "K2_GetTextureParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceConstant, K2_GetTextureParameterValue, (FName), ERASE_ARGUMENT_PACK(class UTexture*)) });
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceConstant::StaticClass(), "K2_GetVectorParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceConstant, K2_GetVectorParameterValue, (FName), ERASE_ARGUMENT_PACK(FLinearColor)) });
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceConstant::StaticClass(), "SetNaniteOverrideMaterial", { ERASE_METHOD_PTR(UMaterialInstanceConstant, SetNaniteOverrideMaterial, (bool,  UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) });
			/*
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "AccumulateAllBodiesBelowPhysicsBlendWeight", { ERASE_METHOD_PTR(USkeletalMeshComponent, AccumulateAllBodiesBelowPhysicsBlendWeight, (const FName&,  float,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "AddForceToAllBodiesBelow", { ERASE_METHOD_PTR(USkeletalMeshComponent, AddForceToAllBodiesBelow, (FVector,  FName,  bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "AddImpulseToAllBodiesBelow", { ERASE_METHOD_PTR(USkeletalMeshComponent, AddImpulseToAllBodiesBelow, (FVector,  FName,  bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "AllowAnimCurveEvaluation", { ERASE_METHOD_PTR(USkeletalMeshComponent, AllowAnimCurveEvaluation, (FName,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "BindClothToLeaderPoseComponent", { ERASE_METHOD_PTR(USkeletalMeshComponent, BindClothToLeaderPoseComponent, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "BreakConstraint", { ERASE_METHOD_PTR(USkeletalMeshComponent, BreakConstraint, (FVector,  FVector,  FName), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ClearMorphTargets", { ERASE_METHOD_PTR(USkeletalMeshComponent, ClearMorphTargets, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ForceClothNextUpdateTeleport", { ERASE_METHOD_PTR(USkeletalMeshComponent, ForceClothNextUpdateTeleport, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ForceClothNextUpdateTeleportAndReset", { ERASE_METHOD_PTR(USkeletalMeshComponent, ForceClothNextUpdateTeleportAndReset, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetAllowClothActors", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetAllowClothActors, () const, ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetAllowedAnimCurveEvaluate", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetAllowedAnimCurveEvaluate, () const, ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetAllowRigidBodyAnimNode", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetAllowRigidBodyAnimNode, () const, ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetAnimationMode", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetAnimationMode, () const, ERASE_ARGUMENT_PACK(EAnimationMode::Type)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetAnimInstance", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetAnimInstance, () const, ERASE_ARGUMENT_PACK(class UAnimInstance*)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetBoneLinearVelocity", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetBoneLinearVelocity, (const FName&), ERASE_ARGUMENT_PACK(FVector)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetBoneMass", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetBoneMass, (FName,  bool) const, ERASE_ARGUMENT_PACK(float)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetClothingSimulationInteractor", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetClothingSimulationInteractor, () const, ERASE_ARGUMENT_PACK(UClothingSimulationInteractor*)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetClothMaxDistanceScale", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetClothMaxDistanceScale, () const, ERASE_ARGUMENT_PACK(float)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetConstraintByName", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraintByName, (FName,  bool), ERASE_ARGUMENT_PACK(FConstraintInstanceAccessor)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetConstraints", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraints, (bool,  TArray<FConstraintInstanceAccessor>&), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetConstraintsFromBody", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraintsFromBody, (FName,  bool,  bool,  bool,  TArray<FConstraintInstanceAccessor>&), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetCurrentJointAngles", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetCurrentJointAngles, (FName, float&,  float&,  float&), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetDefaultAnimatingRig", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetDefaultAnimatingRig, () const, ERASE_ARGUMENT_PACK(TSoftObjectPtr<UObject>)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetFloatAttribute", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetFloatAttribute, (const FName&,  const FName&,  float,  float&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetFloatAttribute_Ref", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetFloatAttribute_Ref, (const FName&,  const FName&,  float&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetIntegerAttribute", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetIntegerAttribute, (const FName&,  const FName&,  int32,  int32&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetIntegerAttribute_Ref", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetIntegerAttribute_Ref, (const FName&,  const FName&,  int32&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetLinkedAnimGraphInstanceByTag", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetLinkedAnimGraphInstanceByTag, (FName) const, ERASE_ARGUMENT_PACK(UAnimInstance*)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetLinkedAnimLayerInstanceByClass", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetLinkedAnimLayerInstanceByClass, (TSubclassOf<UAnimInstance>) const, ERASE_ARGUMENT_PACK(UAnimInstance*)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetLinkedAnimLayerInstanceByGroup", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetLinkedAnimLayerInstanceByGroup, (FName) const, ERASE_ARGUMENT_PACK(UAnimInstance*)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetMorphTarget", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetMorphTarget, (FName) const, ERASE_ARGUMENT_PACK(float)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetPlayRate", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetPlayRate, () const, ERASE_ARGUMENT_PACK(float)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetPosition", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetPosition, () const, ERASE_ARGUMENT_PACK(float)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetPostProcessInstance", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetPostProcessInstance, () const, ERASE_ARGUMENT_PACK(UAnimInstance*)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetSkeletalCenterOfMass", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetSkeletalCenterOfMass, () const, ERASE_ARGUMENT_PACK(FVector)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetSkeletalMeshAsset", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetSkeletalMeshAsset, () const, ERASE_ARGUMENT_PACK(USkeletalMesh*)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetStringAttribute", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetStringAttribute, (const FName&,  const FName&,  FString,  FString&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetStringAttribute_Ref", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetStringAttribute_Ref, (const FName&,  const FName&,  FString&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetTransformAttribute", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetTransformAttribute, (const FName&,  const FName&,  FTransform,  FTransform&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "GetTransformAttribute_Ref", { ERASE_METHOD_PTR(USkeletalMeshComponent, GetTransformAttribute_Ref, (const FName&,  const FName&,  FTransform&,  ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "HasValidAnimationInstance", { ERASE_METHOD_PTR(USkeletalMeshComponent, HasValidAnimationInstance, () const, ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "IsBodyGravityEnabled", { ERASE_METHOD_PTR(USkeletalMeshComponent, IsBodyGravityEnabled, (FName), ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "IsClothingSimulationSuspended", { ERASE_METHOD_PTR(USkeletalMeshComponent, IsClothingSimulationSuspended, () const, ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "IsPlaying", { ERASE_METHOD_PTR(USkeletalMeshComponent, IsPlaying, () const, ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "K2_GetClosestPointOnPhysicsAsset", { ERASE_METHOD_PTR(USkeletalMeshComponent, K2_GetClosestPointOnPhysicsAsset, (const FVector&,  FVector&,  FVector&,  FName&,  float&) const, ERASE_ARGUMENT_PACK(bool)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "LinkAnimClassLayers", { ERASE_METHOD_PTR(USkeletalMeshComponent, LinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "LinkAnimGraphByTag", { ERASE_METHOD_PTR(USkeletalMeshComponent, LinkAnimGraphByTag, (FName,  TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "OverrideAnimationData", { ERASE_METHOD_PTR(USkeletalMeshComponent, OverrideAnimationData, (UAnimationAsset*,  bool,  bool,  float,  float), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(USkeletalMeshComponent, Play, (bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "PlayAnimation", { ERASE_METHOD_PTR(USkeletalMeshComponent, PlayAnimation, (class UAnimationAsset*,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ResetAllBodiesSimulatePhysics", { ERASE_METHOD_PTR(USkeletalMeshComponent, ResetAllBodiesSimulatePhysics, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ResetAllowedAnimCurveEvaluation", { ERASE_METHOD_PTR(USkeletalMeshComponent, ResetAllowedAnimCurveEvaluation, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ResetAnimInstanceDynamics", { ERASE_METHOD_PTR(USkeletalMeshComponent, ResetAnimInstanceDynamics, (ETeleportType), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ResetClothTeleportMode", { ERASE_METHOD_PTR(USkeletalMeshComponent, ResetClothTeleportMode, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ResumeClothingSimulation", { ERASE_METHOD_PTR(USkeletalMeshComponent, ResumeClothingSimulation, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllBodiesBelowLinearVelocity", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowLinearVelocity, (const FName&,  const FVector&,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllBodiesBelowPhysicsBlendWeight", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowPhysicsBlendWeight, (const FName&,  float,  bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllBodiesBelowPhysicsDisabled", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowPhysicsDisabled, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllBodiesBelowSimulatePhysics", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowSimulatePhysics, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllBodiesPhysicsBlendWeight", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesPhysicsBlendWeight, (float,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllBodiesSimulatePhysics", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesSimulatePhysics, (bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllMotorsAngularDriveParams", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllMotorsAngularDriveParams, (float,  float,  float,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllMotorsAngularPositionDrive", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllMotorsAngularPositionDrive, (bool,  bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllMotorsAngularVelocityDrive", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllMotorsAngularVelocityDrive, (bool,  bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllowAnimCurveEvaluation", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowAnimCurveEvaluation, (bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllowClothActors", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowClothActors, (bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllowedAnimCurvesEvaluation", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowedAnimCurvesEvaluation, (const TArray<FName>&,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAllowRigidBodyAnimNode", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowRigidBodyAnimNode, (bool,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAngularLimits", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAngularLimits, (FName, float,  float,  float), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAnimation", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAnimation, (class UAnimationAsset*), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAnimationMode", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAnimationMode, (EAnimationMode::Type,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetAnimClass", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetAnimClass, (class UClass*), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetBodyNotifyRigidBodyCollision", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetBodyNotifyRigidBodyCollision, (bool,  FName), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetBodySimulatePhysics", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetBodySimulatePhysics, (const FName&,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetClothMaxDistanceScale", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetClothMaxDistanceScale, (float), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetConstraintProfile", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetConstraintProfile, (FName,  FName,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetConstraintProfileForAll", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetConstraintProfileForAll, (FName,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetEnableBodyGravity", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetEnableBodyGravity, (bool,  FName), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetEnableGravityOnAllBodiesBelow", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetEnableGravityOnAllBodiesBelow, (bool,  FName,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetEnablePhysicsBlending", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetEnablePhysicsBlending, (bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetMorphTarget", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetMorphTarget, (FName,  float,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetNotifyRigidBodyCollisionBelow", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetNotifyRigidBodyCollisionBelow, (bool,  FName,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetPhysicsBlendWeight", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetPhysicsBlendWeight, (float), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetPlayRate", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetPlayRate, (float), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetPosition", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetPosition, (float,  bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetSkeletalMeshAsset", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetSkeletalMeshAsset, (USkeletalMesh*), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetUpdateAnimationInEditor", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetUpdateAnimationInEditor, (const bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SetUpdateClothInEditor", { ERASE_METHOD_PTR(USkeletalMeshComponent, SetUpdateClothInEditor, (const bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SnapshotPose", { ERASE_METHOD_PTR(USkeletalMeshComponent, SnapshotPose, (FPoseSnapshot&), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "Stop", { ERASE_METHOD_PTR(USkeletalMeshComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "SuspendClothingSimulation", { ERASE_METHOD_PTR(USkeletalMeshComponent, SuspendClothingSimulation, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "TermBodiesBelow", { ERASE_METHOD_PTR(USkeletalMeshComponent, TermBodiesBelow, (FName), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "ToggleDisablePostProcessBlueprint", { ERASE_METHOD_PTR(USkeletalMeshComponent, ToggleDisablePostProcessBlueprint, (), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "UnbindClothFromLeaderPoseComponent", { ERASE_METHOD_PTR(USkeletalMeshComponent, UnbindClothFromLeaderPoseComponent, (bool), ERASE_ARGUMENT_PACK(void)) });
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshComponent::StaticClass(), "UnlinkAnimClassLayers", { ERASE_METHOD_PTR(USkeletalMeshComponent, UnlinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) });
			*disable/
		}
	);*/
}

void FAngelscriptNativeBindsModule::ShutdownModule()
{
}
