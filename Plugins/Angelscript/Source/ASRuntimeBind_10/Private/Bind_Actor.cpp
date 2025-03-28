#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Components/InputComponent.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "Engine/Level.h"
#include "Components/PrimitiveComponent.h"
#include "Components/ChildActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Components/SceneComponent.h"
void FASRuntimeBind_10Module::Bind_Actor()
{
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "ActorHasTag", { ERASE_METHOD_PTR(AActor, ActorHasTag, (FName) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "AddComponent", { ERASE_METHOD_PTR(AActor, AddComponent, (FName,  bool,  const FTransform&,  const UObject*,  bool), ERASE_ARGUMENT_PACK( UActorComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "AddComponentByClass", { ERASE_METHOD_PTR(AActor, AddComponentByClass, ( TSubclassOf<UActorComponent>,  bool,  const FTransform&,  bool), ERASE_ARGUMENT_PACK( UActorComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "AddTickPrerequisiteActor", { ERASE_METHOD_PTR(AActor, AddTickPrerequisiteActor, (AActor*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "AddTickPrerequisiteComponent", { ERASE_METHOD_PTR(AActor, AddTickPrerequisiteComponent, (UActorComponent*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "CanTriggerResimulation", { ERASE_METHOD_PTR(AActor, CanTriggerResimulation, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "CreateInputComponent", { ERASE_METHOD_PTR(AActor, CreateInputComponent, (TSubclassOf<UInputComponent>), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "DisableInput", { ERASE_METHOD_PTR(AActor, DisableInput, (class APlayerController*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "EnableInput", { ERASE_METHOD_PTR(AActor, EnableInput, (class APlayerController*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "FindComponentByTag", { ERASE_METHOD_PTR(AActor, FindComponentByTag, (TSubclassOf<UActorComponent>,  FName) const, ERASE_ARGUMENT_PACK( UActorComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "FinishAddComponent", { ERASE_METHOD_PTR(AActor, FinishAddComponent, (UActorComponent*,  bool,  const FTransform&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "FlushNetDormancy", { ERASE_METHOD_PTR(AActor, FlushNetDormancy, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "ForceNetUpdate", { ERASE_METHOD_PTR(AActor, ForceNetUpdate, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorBounds", { ERASE_METHOD_PTR(AActor, GetActorBounds, (bool,  FVector&,  FVector&,  bool) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorEnableCollision", { ERASE_METHOD_PTR(AActor, GetActorEnableCollision, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorEyesViewPoint", { ERASE_METHOD_PTR(AActor, GetActorEyesViewPoint, ( FVector&,  FRotator&) const, ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorForwardVector", { ERASE_METHOD_PTR(AActor, GetActorForwardVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorLabel", { ERASE_METHOD_PTR(AActor, GetActorLabel, (bool) const, ERASE_ARGUMENT_PACK( const FString& )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorRelativeScale3D", { ERASE_METHOD_PTR(AActor, GetActorRelativeScale3D, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorRightVector", { ERASE_METHOD_PTR(AActor, GetActorRightVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorScale3D", { ERASE_METHOD_PTR(AActor, GetActorScale3D, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorTickInterval", { ERASE_METHOD_PTR(AActor, GetActorTickInterval, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorTimeDilation", { ERASE_METHOD_PTR(AActor, GetActorTimeDilation, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetActorUpVector", { ERASE_METHOD_PTR(AActor, GetActorUpVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetAllChildActors", { ERASE_METHOD_PTR(AActor, GetAllChildActors, (TArray<AActor*>&,  bool) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetAttachedActors", { ERASE_METHOD_PTR(AActor, GetAttachedActors, (TArray<AActor*>&,  bool,  bool) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetAttachParentActor", { ERASE_METHOD_PTR(AActor, GetAttachParentActor, () const, ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetAttachParentSocketName", { ERASE_METHOD_PTR(AActor, GetAttachParentSocketName, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetComponentByClass", { ERASE_METHOD_PTR(AActor, GetComponentByClass, (TSubclassOf<UActorComponent>) const, ERASE_ARGUMENT_PACK( UActorComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetComponentsByInterface", { ERASE_METHOD_PTR(AActor, GetComponentsByInterface, (TSubclassOf<UInterface>) const, ERASE_ARGUMENT_PACK( TArray<UActorComponent*> )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetComponentsByTag", { ERASE_METHOD_PTR(AActor, GetComponentsByTag, (TSubclassOf<UActorComponent>,  FName) const, ERASE_ARGUMENT_PACK( TArray<UActorComponent*> )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetDefaultActorLabel", { ERASE_METHOD_PTR(AActor, GetDefaultActorLabel, () const, ERASE_ARGUMENT_PACK(  FString )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetDistanceTo", { ERASE_METHOD_PTR(AActor, GetDistanceTo, (const AActor*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetDotProductTo", { ERASE_METHOD_PTR(AActor, GetDotProductTo, (const AActor*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetFolderPath", { ERASE_METHOD_PTR(AActor, GetFolderPath, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetGameTimeSinceCreation", { ERASE_METHOD_PTR(AActor, GetGameTimeSinceCreation, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetHorizontalDistanceTo", { ERASE_METHOD_PTR(AActor, GetHorizontalDistanceTo, (const AActor*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetHorizontalDotProductTo", { ERASE_METHOD_PTR(AActor, GetHorizontalDotProductTo, (const AActor*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetInputAxisKeyValue", { ERASE_METHOD_PTR(AActor, GetInputAxisKeyValue, (const FKey) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetInputAxisValue", { ERASE_METHOD_PTR(AActor, GetInputAxisValue, (const FName) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetInputVectorAxisValue", { ERASE_METHOD_PTR(AActor, GetInputVectorAxisValue, (const FKey) const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetInstigator", { ERASE_METHOD_PTR(AActor, GetInstigator, () const, ERASE_ARGUMENT_PACK( APawn* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetInstigatorController", { ERASE_METHOD_PTR(AActor, GetInstigatorController, () const, ERASE_ARGUMENT_PACK( AController* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetLevel", { ERASE_METHOD_PTR(AActor, GetLevel, () const, ERASE_ARGUMENT_PACK( ULevel* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetLevelTransform", { ERASE_METHOD_PTR(AActor, GetLevelTransform, () const, ERASE_ARGUMENT_PACK( FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetLifeSpan", { ERASE_METHOD_PTR(AActor, GetLifeSpan, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetLocalRole", { ERASE_METHOD_PTR(AActor, GetLocalRole, () const, ERASE_ARGUMENT_PACK(ENetRole )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetOverlappingActors", { ERASE_METHOD_PTR(AActor, GetOverlappingActors, (TArray<AActor*>&,  TSubclassOf<AActor>) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetOverlappingComponents", { ERASE_METHOD_PTR(AActor, GetOverlappingComponents, (TArray<UPrimitiveComponent*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetOwner", { ERASE_METHOD_PTR(AActor, GetOwner, () const, ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetParentActor", { ERASE_METHOD_PTR(AActor, GetParentActor, () const, ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetParentComponent", { ERASE_METHOD_PTR(AActor, GetParentComponent, () const, ERASE_ARGUMENT_PACK( UChildActorComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetPhysicsReplicationMode", { ERASE_METHOD_PTR(AActor, GetPhysicsReplicationMode, (), ERASE_ARGUMENT_PACK( EPhysicsReplicationMode )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetRayTracingGroupId", { ERASE_METHOD_PTR(AActor, GetRayTracingGroupId, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetRemoteRole", { ERASE_METHOD_PTR(AActor, GetRemoteRole, () const, ERASE_ARGUMENT_PACK( ENetRole )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetResimulationThreshold", { ERASE_METHOD_PTR(AActor, GetResimulationThreshold, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetSquaredDistanceTo", { ERASE_METHOD_PTR(AActor, GetSquaredDistanceTo, (const AActor*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetSquaredHorizontalDistanceTo", { ERASE_METHOD_PTR(AActor, GetSquaredHorizontalDistanceTo, (const AActor*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetTickableWhenPaused", { ERASE_METHOD_PTR(AActor, GetTickableWhenPaused, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetTransform", { ERASE_METHOD_PTR(AActor, GetTransform, () const, ERASE_ARGUMENT_PACK(const FTransform& )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetVelocity", { ERASE_METHOD_PTR(AActor, GetVelocity, () const, ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "GetVerticalDistanceTo", { ERASE_METHOD_PTR(AActor, GetVerticalDistanceTo, (const AActor*) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "HasAuthority", { ERASE_METHOD_PTR(AActor, HasAuthority, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsActorBeingDestroyed", { ERASE_METHOD_PTR(AActor, IsActorBeingDestroyed, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsActorTickEnabled", { ERASE_METHOD_PTR(AActor, IsActorTickEnabled, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsChildActor", { ERASE_METHOD_PTR(AActor, IsChildActor, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsEditable", { ERASE_METHOD_PTR(AActor, IsEditable, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsHiddenEd", { ERASE_METHOD_PTR(AActor, IsHiddenEd, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsHiddenEdAtStartup", { ERASE_METHOD_PTR(AActor, IsHiddenEdAtStartup, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsOverlappingActor", { ERASE_METHOD_PTR(AActor, IsOverlappingActor, (const AActor*) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsSelectable", { ERASE_METHOD_PTR(AActor, IsSelectable, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "IsTemporarilyHiddenInEditor", { ERASE_METHOD_PTR(AActor, IsTemporarilyHiddenInEditor, (bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AddActorLocalOffset", { ERASE_METHOD_PTR(AActor, K2_AddActorLocalOffset, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AddActorLocalRotation", { ERASE_METHOD_PTR(AActor, K2_AddActorLocalRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AddActorLocalTransform", { ERASE_METHOD_PTR(AActor, K2_AddActorLocalTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AddActorWorldOffset", { ERASE_METHOD_PTR(AActor, K2_AddActorWorldOffset, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AddActorWorldRotation", { ERASE_METHOD_PTR(AActor, K2_AddActorWorldRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AddActorWorldTransform", { ERASE_METHOD_PTR(AActor, K2_AddActorWorldTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AddActorWorldTransformKeepScale", { ERASE_METHOD_PTR(AActor, K2_AddActorWorldTransformKeepScale, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AttachToActor", { ERASE_METHOD_PTR(AActor, K2_AttachToActor, (AActor*,  FName,  EAttachmentRule,  EAttachmentRule,  EAttachmentRule,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_AttachToComponent", { ERASE_METHOD_PTR(AActor, K2_AttachToComponent, (USceneComponent*,  FName,  EAttachmentRule,  EAttachmentRule,  EAttachmentRule,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_DestroyActor", { ERASE_METHOD_PTR(AActor, K2_DestroyActor, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_DetachFromActor", { ERASE_METHOD_PTR(AActor, K2_DetachFromActor, (EDetachmentRule,  EDetachmentRule,  EDetachmentRule), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_GetActorLocation", { ERASE_METHOD_PTR(AActor, K2_GetActorLocation, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_GetActorRotation", { ERASE_METHOD_PTR(AActor, K2_GetActorRotation, () const, ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_GetComponentsByClass", { ERASE_METHOD_PTR(AActor, K2_GetComponentsByClass, (TSubclassOf<UActorComponent>) const, ERASE_ARGUMENT_PACK( TArray<UActorComponent*> )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_SetActorLocation", { ERASE_METHOD_PTR(AActor, K2_SetActorLocation, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_SetActorLocationAndRotation", { ERASE_METHOD_PTR(AActor, K2_SetActorLocationAndRotation, (FVector,  FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_SetActorRelativeLocation", { ERASE_METHOD_PTR(AActor, K2_SetActorRelativeLocation, (FVector,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_SetActorRelativeRotation", { ERASE_METHOD_PTR(AActor, K2_SetActorRelativeRotation, (FRotator,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_SetActorRelativeTransform", { ERASE_METHOD_PTR(AActor, K2_SetActorRelativeTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_SetActorRotation", { ERASE_METHOD_PTR(AActor, K2_SetActorRotation, (FRotator,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_SetActorTransform", { ERASE_METHOD_PTR(AActor, K2_SetActorTransform, (const FTransform&,  bool,  FHitResult&,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "K2_TeleportTo", { ERASE_METHOD_PTR(AActor, K2_TeleportTo, ( FVector,  FRotator), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "MakeNoise", { ERASE_METHOD_PTR(AActor, MakeNoise, (float,  APawn*,  FVector,  float,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "PrestreamTextures", { ERASE_METHOD_PTR(AActor, PrestreamTextures, ( float,  bool,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "RemoveTickPrerequisiteActor", { ERASE_METHOD_PTR(AActor, RemoveTickPrerequisiteActor, (AActor*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "RemoveTickPrerequisiteComponent", { ERASE_METHOD_PTR(AActor, RemoveTickPrerequisiteComponent, (UActorComponent*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetActorEnableCollision", { ERASE_METHOD_PTR(AActor, SetActorEnableCollision, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetActorHiddenInGame", { ERASE_METHOD_PTR(AActor, SetActorHiddenInGame, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetActorLabel", { ERASE_METHOD_PTR(AActor, SetActorLabel, ( const FString&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetActorRelativeScale3D", { ERASE_METHOD_PTR(AActor, SetActorRelativeScale3D, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetActorScale3D", { ERASE_METHOD_PTR(AActor, SetActorScale3D, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetActorTickEnabled", { ERASE_METHOD_PTR(AActor, SetActorTickEnabled, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetActorTickInterval", { ERASE_METHOD_PTR(AActor, SetActorTickInterval, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetFolderPath", { ERASE_METHOD_PTR(AActor, SetFolderPath, (const FName&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetIsTemporarilyHiddenInEditor", { ERASE_METHOD_PTR(AActor, SetIsTemporarilyHiddenInEditor, ( bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetLifeSpan", { ERASE_METHOD_PTR(AActor, SetLifeSpan, ( float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetNetDormancy", { ERASE_METHOD_PTR(AActor, SetNetDormancy, (ENetDormancy), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetOwner", { ERASE_METHOD_PTR(AActor, SetOwner, ( AActor*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetPhysicsReplicationMode", { ERASE_METHOD_PTR(AActor, SetPhysicsReplicationMode, (const EPhysicsReplicationMode), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetRayTracingGroupId", { ERASE_METHOD_PTR(AActor, SetRayTracingGroupId, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetReplicateMovement", { ERASE_METHOD_PTR(AActor, SetReplicateMovement, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetReplicates", { ERASE_METHOD_PTR(AActor, SetReplicates, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetTickableWhenPaused", { ERASE_METHOD_PTR(AActor, SetTickableWhenPaused, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "SetTickGroup", { ERASE_METHOD_PTR(AActor, SetTickGroup, (ETickingGroup), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "TearOff", { ERASE_METHOD_PTR(AActor, TearOff, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AActor::StaticClass(), "WasRecentlyRendered", { ERASE_METHOD_PTR(AActor, WasRecentlyRendered, (float) const, ERASE_ARGUMENT_PACK( bool )) } );
}
