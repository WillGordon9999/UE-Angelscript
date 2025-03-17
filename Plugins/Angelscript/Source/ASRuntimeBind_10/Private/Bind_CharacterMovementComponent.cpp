#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/HitResult.h"
#include "CharacterMovementComponentAsync.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
void FASRuntimeBind_10Module::Bind_CharacterMovementComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "AddForce", { ERASE_METHOD_PTR(UCharacterMovementComponent, AddForce, ( FVector), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "AddImpulse", { ERASE_METHOD_PTR(UCharacterMovementComponent, AddImpulse, ( FVector,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "CalcVelocity", { ERASE_METHOD_PTR(UCharacterMovementComponent, CalcVelocity, (float,  float,  bool,  float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "ClearAccumulatedForces", { ERASE_METHOD_PTR(UCharacterMovementComponent, ClearAccumulatedForces, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "DisableMovement", { ERASE_METHOD_PTR(UCharacterMovementComponent, DisableMovement, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetAnalogInputModifier", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetAnalogInputModifier, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetCharacterOwner", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetCharacterOwner, () const, ERASE_ARGUMENT_PACK( ACharacter* )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetCurrentAcceleration", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetCurrentAcceleration, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetGravityDirection", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetGravityDirection, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetImpartedMovementBaseVelocity", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetImpartedMovementBaseVelocity, () const, ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetLastUpdateLocation", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateLocation, () const, ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetLastUpdateRequestedVelocity", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateRequestedVelocity, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetLastUpdateRotation", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateRotation, () const, ERASE_ARGUMENT_PACK(FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetLastUpdateVelocity", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateVelocity, () const, ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetMaxAcceleration", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxAcceleration, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetMaxBrakingDeceleration", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxBrakingDeceleration, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetMaxJumpHeight", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxJumpHeight, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetMaxJumpHeightWithJumpTime", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxJumpHeightWithJumpTime, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetMinAnalogSpeed", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetMinAnalogSpeed, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetMovementBase", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetMovementBase, () const, ERASE_ARGUMENT_PACK( UPrimitiveComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetPerchRadiusThreshold", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetPerchRadiusThreshold, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "GetValidPerchRadius", { ERASE_METHOD_PTR(UCharacterMovementComponent, GetValidPerchRadius, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "HasCustomGravity", { ERASE_METHOD_PTR(UCharacterMovementComponent, HasCustomGravity, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "IsWalkable", { ERASE_METHOD_PTR(UCharacterMovementComponent, IsWalkable, (const FHitResult&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "IsWalking", { ERASE_METHOD_PTR(UCharacterMovementComponent, IsWalking, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "K2_ComputeFloorDist", { ERASE_METHOD_PTR(UCharacterMovementComponent, K2_ComputeFloorDist, (FVector,  float,  float,  float,  FFindFloorResult&) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "K2_FindFloor", { ERASE_METHOD_PTR(UCharacterMovementComponent, K2_FindFloor, (FVector,  FFindFloorResult&) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "K2_GetWalkableFloorAngle", { ERASE_METHOD_PTR(UCharacterMovementComponent, K2_GetWalkableFloorAngle, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "K2_GetWalkableFloorZ", { ERASE_METHOD_PTR(UCharacterMovementComponent, K2_GetWalkableFloorZ, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetAvoidanceEnabled", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetAvoidanceEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetAvoidanceGroupMask", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetAvoidanceGroupMask, (const FNavAvoidanceMask&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetGravityDirection", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetGravityDirection, (const FVector&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetGroupsToAvoidMask", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetGroupsToAvoidMask, (const FNavAvoidanceMask&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetGroupsToIgnoreMask", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetGroupsToIgnoreMask, (const FNavAvoidanceMask&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetMovementMode", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetMovementMode, (EMovementMode,  uint8), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetWalkableFloorAngle", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetWalkableFloorAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCharacterMovementComponent::StaticClass(), "SetWalkableFloorZ", { ERASE_METHOD_PTR(UCharacterMovementComponent, SetWalkableFloorZ, (float), ERASE_ARGUMENT_PACK( void )) } );
}
