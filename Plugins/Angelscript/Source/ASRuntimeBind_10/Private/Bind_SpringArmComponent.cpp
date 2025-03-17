#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_SpringArmComponent()
{
			FAngelscriptBinds::AddFunctionEntry(USpringArmComponent::StaticClass(), "GetTargetRotation", { ERASE_METHOD_PTR(USpringArmComponent, GetTargetRotation, () const, ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(USpringArmComponent::StaticClass(), "GetUnfixedCameraPosition", { ERASE_METHOD_PTR(USpringArmComponent, GetUnfixedCameraPosition, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USpringArmComponent::StaticClass(), "IsCollisionFixApplied", { ERASE_METHOD_PTR(USpringArmComponent, IsCollisionFixApplied, () const, ERASE_ARGUMENT_PACK( bool )) } );
}
