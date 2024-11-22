#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SceneComponent.h"
void FASRuntimeBind_10Module::Bind_SceneComponent()
{
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "DoesSocketExist", { ERASE_METHOD_PTR(USceneComponent, DoesSocketExist, (FName) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetAllSocketNames", { ERASE_METHOD_PTR(USceneComponent, GetAllSocketNames, () const, ERASE_ARGUMENT_PACK( TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetAttachParent", { ERASE_METHOD_PTR(USceneComponent, GetAttachParent, () const, ERASE_ARGUMENT_PACK( USceneComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetAttachSocketName", { ERASE_METHOD_PTR(USceneComponent, GetAttachSocketName, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetChildComponent", { ERASE_METHOD_PTR(USceneComponent, GetChildComponent, (int32) const, ERASE_ARGUMENT_PACK( USceneComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetChildrenComponents", { ERASE_METHOD_PTR(USceneComponent, GetChildrenComponents, (bool,  TArray<USceneComponent*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetComponentVelocity", { ERASE_METHOD_PTR(USceneComponent, GetComponentVelocity, () const, ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetForwardVector", { ERASE_METHOD_PTR(USceneComponent, GetForwardVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetNumChildrenComponents", { ERASE_METHOD_PTR(USceneComponent, GetNumChildrenComponents, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetParentComponents", { ERASE_METHOD_PTR(USceneComponent, GetParentComponents, (TArray<USceneComponent*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetPhysicsVolume", { ERASE_METHOD_PTR(USceneComponent, GetPhysicsVolume, () const, ERASE_ARGUMENT_PACK( APhysicsVolume* )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetRelativeTransform", { ERASE_METHOD_PTR(USceneComponent, GetRelativeTransform, () const, ERASE_ARGUMENT_PACK( FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetRightVector", { ERASE_METHOD_PTR(USceneComponent, GetRightVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetSocketLocation", { ERASE_METHOD_PTR(USceneComponent, GetSocketLocation, (FName) const, ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetSocketRotation", { ERASE_METHOD_PTR(USceneComponent, GetSocketRotation, (FName) const, ERASE_ARGUMENT_PACK(  FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetSocketTransform", { ERASE_METHOD_PTR(USceneComponent, GetSocketTransform, (FName,  ERelativeTransformSpace) const, ERASE_ARGUMENT_PACK(  FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "GetUpVector", { ERASE_METHOD_PTR(USceneComponent, GetUpVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "IsAnySimulatingPhysics", { ERASE_METHOD_PTR(USceneComponent, IsAnySimulatingPhysics, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "IsSimulatingPhysics", { ERASE_METHOD_PTR(USceneComponent, IsSimulatingPhysics, (FName) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "IsVisible", { ERASE_METHOD_PTR(USceneComponent, IsVisible, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddLocalOffset", { ERASE_METHOD_PTR(USceneComponent, K2_AddLocalOffset, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddLocalRotation", { ERASE_METHOD_PTR(USceneComponent, K2_AddLocalRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddLocalTransform", { ERASE_METHOD_PTR(USceneComponent, K2_AddLocalTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddRelativeLocation", { ERASE_METHOD_PTR(USceneComponent, K2_AddRelativeLocation, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddRelativeRotation", { ERASE_METHOD_PTR(USceneComponent, K2_AddRelativeRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddWorldOffset", { ERASE_METHOD_PTR(USceneComponent, K2_AddWorldOffset, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddWorldRotation", { ERASE_METHOD_PTR(USceneComponent, K2_AddWorldRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddWorldTransform", { ERASE_METHOD_PTR(USceneComponent, K2_AddWorldTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AddWorldTransformKeepScale", { ERASE_METHOD_PTR(USceneComponent, K2_AddWorldTransformKeepScale, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_AttachToComponent", { ERASE_METHOD_PTR(USceneComponent, K2_AttachToComponent, (USceneComponent*,  FName,  EAttachmentRule,  EAttachmentRule,  EAttachmentRule,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_DetachFromComponent", { ERASE_METHOD_PTR(USceneComponent, K2_DetachFromComponent, (EDetachmentRule,  EDetachmentRule,  EDetachmentRule,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_GetComponentLocation", { ERASE_METHOD_PTR(USceneComponent, K2_GetComponentLocation, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_GetComponentRotation", { ERASE_METHOD_PTR(USceneComponent, K2_GetComponentRotation, () const, ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_GetComponentScale", { ERASE_METHOD_PTR(USceneComponent, K2_GetComponentScale, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_GetComponentToWorld", { ERASE_METHOD_PTR(USceneComponent, K2_GetComponentToWorld, () const, ERASE_ARGUMENT_PACK( FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetRelativeLocation", { ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeLocation, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetRelativeLocationAndRotation", { ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeLocationAndRotation, (FVector,  FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetRelativeRotation", { ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetRelativeTransform", { ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetWorldLocation", { ERASE_METHOD_PTR(USceneComponent, K2_SetWorldLocation, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetWorldLocationAndRotation", { ERASE_METHOD_PTR(USceneComponent, K2_SetWorldLocationAndRotation, (FVector,  FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetWorldRotation", { ERASE_METHOD_PTR(USceneComponent, K2_SetWorldRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "K2_SetWorldTransform", { ERASE_METHOD_PTR(USceneComponent, K2_SetWorldTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "ResetRelativeTransform", { ERASE_METHOD_PTR(USceneComponent, ResetRelativeTransform, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "SetAbsolute", { ERASE_METHOD_PTR(USceneComponent, SetAbsolute, (bool,  bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "SetHiddenInGame", { ERASE_METHOD_PTR(USceneComponent, SetHiddenInGame, (bool,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "SetMobility", { ERASE_METHOD_PTR(USceneComponent, SetMobility, (EComponentMobility::Type), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "SetRelativeScale3D", { ERASE_METHOD_PTR(USceneComponent, SetRelativeScale3D, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "SetVisibility", { ERASE_METHOD_PTR(USceneComponent, SetVisibility, (bool,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "SetWorldScale3D", { ERASE_METHOD_PTR(USceneComponent, SetWorldScale3D, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneComponent::StaticClass(), "ToggleVisibility", { ERASE_METHOD_PTR(USceneComponent, ToggleVisibility, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
