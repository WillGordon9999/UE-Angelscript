#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/InterpToMovementComponent.h"
void FASRuntimeBind_10Module::Bind_InterpToMovementComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UInterpToMovementComponent::StaticClass(), "AddControlPointPosition", { ERASE_METHOD_PTR(UInterpToMovementComponent, AddControlPointPosition, (FVector,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterpToMovementComponent::StaticClass(), "FinaliseControlPoints", { ERASE_METHOD_PTR(UInterpToMovementComponent, FinaliseControlPoints, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterpToMovementComponent::StaticClass(), "ResetControlPoints", { ERASE_METHOD_PTR(UInterpToMovementComponent, ResetControlPoints, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterpToMovementComponent::StaticClass(), "RestartMovement", { ERASE_METHOD_PTR(UInterpToMovementComponent, RestartMovement, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterpToMovementComponent::StaticClass(), "StopSimulating", { ERASE_METHOD_PTR(UInterpToMovementComponent, StopSimulating, (const FHitResult&), ERASE_ARGUMENT_PACK( void )) } );
}
