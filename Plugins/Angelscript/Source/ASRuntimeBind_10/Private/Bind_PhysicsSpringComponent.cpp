#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "PhysicsEngine/PhysicsSpringComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_PhysicsSpringComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPhysicsSpringComponent::StaticClass(), "GetNormalizedCompressionScalar", { ERASE_METHOD_PTR(UPhysicsSpringComponent, GetNormalizedCompressionScalar, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsSpringComponent::StaticClass(), "GetSpringCurrentEndPoint", { ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringCurrentEndPoint, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsSpringComponent::StaticClass(), "GetSpringDirection", { ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringDirection, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UPhysicsSpringComponent::StaticClass(), "GetSpringRestingPoint", { ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringRestingPoint, () const, ERASE_ARGUMENT_PACK( FVector )) } );
}
