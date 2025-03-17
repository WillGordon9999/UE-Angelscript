#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimMontage.h"
void FASRuntimeBind_10Module::Bind_Character()
{
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "CacheInitialMeshOffset", { ERASE_METHOD_PTR(ACharacter, CacheInitialMeshOffset, (FVector,  FRotator), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "CanCrouch", { ERASE_METHOD_PTR(ACharacter, CanCrouch, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "CanJump", { ERASE_METHOD_PTR(ACharacter, CanJump, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "Crouch", { ERASE_METHOD_PTR(ACharacter, Crouch, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "GetAnimRootMotionTranslationScale", { ERASE_METHOD_PTR(ACharacter, GetAnimRootMotionTranslationScale, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "GetBaseRotationOffsetRotator", { ERASE_METHOD_PTR(ACharacter, GetBaseRotationOffsetRotator, () const, ERASE_ARGUMENT_PACK(FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "GetBaseTranslationOffset", { ERASE_METHOD_PTR(ACharacter, GetBaseTranslationOffset, () const, ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "GetCurrentMontage", { ERASE_METHOD_PTR(ACharacter, GetCurrentMontage, () const, ERASE_ARGUMENT_PACK( class UAnimMontage* )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "HasAnyRootMotion", { ERASE_METHOD_PTR(ACharacter, HasAnyRootMotion, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "IsJumpProvidingForce", { ERASE_METHOD_PTR(ACharacter, IsJumpProvidingForce, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "IsPlayingNetworkedRootMotionMontage", { ERASE_METHOD_PTR(ACharacter, IsPlayingNetworkedRootMotionMontage, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "IsPlayingRootMotion", { ERASE_METHOD_PTR(ACharacter, IsPlayingRootMotion, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "Jump", { ERASE_METHOD_PTR(ACharacter, Jump, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "LaunchCharacter", { ERASE_METHOD_PTR(ACharacter, LaunchCharacter, (FVector,  bool,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "PlayAnimMontage", { ERASE_METHOD_PTR(ACharacter, PlayAnimMontage, (class UAnimMontage*,  float,  FName), ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "StopAnimMontage", { ERASE_METHOD_PTR(ACharacter, StopAnimMontage, (class UAnimMontage*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "StopJumping", { ERASE_METHOD_PTR(ACharacter, StopJumping, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(ACharacter::StaticClass(), "UnCrouch", { ERASE_METHOD_PTR(ACharacter, UnCrouch, (bool), ERASE_ARGUMENT_PACK(  void )) } );
}
