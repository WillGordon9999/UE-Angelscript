#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_PhysicsHandleComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "GetGrabbedComponent", { ERASE_METHOD_PTR(UPhysicsHandleComponent, GetGrabbedComponent, () const, ERASE_ARGUMENT_PACK( class UPrimitiveComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "GetTargetLocationAndRotation", { ERASE_METHOD_PTR(UPhysicsHandleComponent, GetTargetLocationAndRotation, (FVector&,  FRotator&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "GrabComponentAtLocation", { ERASE_METHOD_PTR(UPhysicsHandleComponent, GrabComponentAtLocation, (class UPrimitiveComponent*,  FName,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "GrabComponentAtLocationWithRotation", { ERASE_METHOD_PTR(UPhysicsHandleComponent, GrabComponentAtLocationWithRotation, (class UPrimitiveComponent*,  FName,  FVector,  FRotator), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "ReleaseComponent", { ERASE_METHOD_PTR(UPhysicsHandleComponent, ReleaseComponent, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetAngularDamping", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetAngularDamping, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetAngularStiffness", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetAngularStiffness, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetInterpolationSpeed", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetInterpolationSpeed, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetLinearDamping", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetLinearDamping, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetLinearStiffness", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetLinearStiffness, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetTargetLocation", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetTargetLocation, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetTargetLocationAndRotation", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetTargetLocationAndRotation, (FVector,  FRotator), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsHandleComponent::StaticClass(), "SetTargetRotation", { ERASE_METHOD_PTR(UPhysicsHandleComponent, SetTargetRotation, (FRotator), ERASE_ARGUMENT_PACK( void )) } );
}
