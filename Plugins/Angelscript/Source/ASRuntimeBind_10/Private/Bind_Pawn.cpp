#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/Pawn.h"
void FASRuntimeBind_10Module::Bind_Pawn()
{
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "AddControllerPitchInput", { ERASE_METHOD_PTR(APawn, AddControllerPitchInput, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "AddControllerRollInput", { ERASE_METHOD_PTR(APawn, AddControllerRollInput, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "AddControllerYawInput", { ERASE_METHOD_PTR(APawn, AddControllerYawInput, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "AddMovementInput", { ERASE_METHOD_PTR(APawn, AddMovementInput, (FVector,  float,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "ConsumeMovementInputVector", { ERASE_METHOD_PTR(APawn, ConsumeMovementInputVector, (), ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "DetachFromControllerPendingDestroy", { ERASE_METHOD_PTR(APawn, DetachFromControllerPendingDestroy, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetBaseAimRotation", { ERASE_METHOD_PTR(APawn, GetBaseAimRotation, () const, ERASE_ARGUMENT_PACK(  FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetController", { ERASE_METHOD_PTR(APawn, GetController, () const, ERASE_ARGUMENT_PACK( AController* )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetControlRotation", { ERASE_METHOD_PTR(APawn, GetControlRotation, () const, ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetLastMovementInputVector", { ERASE_METHOD_PTR(APawn, GetLastMovementInputVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetLocalViewingPlayerController", { ERASE_METHOD_PTR(APawn, GetLocalViewingPlayerController, () const, ERASE_ARGUMENT_PACK( APlayerController* )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetMovementComponent", { ERASE_METHOD_PTR(APawn, GetMovementComponent, () const, ERASE_ARGUMENT_PACK(  UPawnMovementComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetNavAgentLocation", { ERASE_METHOD_PTR(APawn, GetNavAgentLocation, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetOverrideInputComponentClass", { ERASE_METHOD_PTR(APawn, GetOverrideInputComponentClass, () const, ERASE_ARGUMENT_PACK( TSubclassOf<UInputComponent> )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetPendingMovementInputVector", { ERASE_METHOD_PTR(APawn, GetPendingMovementInputVector, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "GetPlatformUserId", { ERASE_METHOD_PTR(APawn, GetPlatformUserId, () const, ERASE_ARGUMENT_PACK( FPlatformUserId )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "IsBotControlled", { ERASE_METHOD_PTR(APawn, IsBotControlled, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "IsLocallyControlled", { ERASE_METHOD_PTR(APawn, IsLocallyControlled, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "IsLocallyViewed", { ERASE_METHOD_PTR(APawn, IsLocallyViewed, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "IsMoveInputIgnored", { ERASE_METHOD_PTR(APawn, IsMoveInputIgnored, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "IsPawnControlled", { ERASE_METHOD_PTR(APawn, IsPawnControlled, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "IsPlayerControlled", { ERASE_METHOD_PTR(APawn, IsPlayerControlled, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "PawnMakeNoise", { ERASE_METHOD_PTR(APawn, PawnMakeNoise, (float,  FVector,  bool,  AActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "SetCanAffectNavigationGeneration", { ERASE_METHOD_PTR(APawn, SetCanAffectNavigationGeneration, (bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(APawn::StaticClass(), "SpawnDefaultController", { ERASE_METHOD_PTR(APawn, SpawnDefaultController, (), ERASE_ARGUMENT_PACK(  void )) } );
}
