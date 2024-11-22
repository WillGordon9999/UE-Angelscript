#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SphereComponent.h"
void FASRuntimeBind_10Module::Bind_SphereComponent()
{
			FAngelscriptBinds::AddFunctionEntry(USphereComponent::StaticClass(), "GetScaledSphereRadius", { ERASE_METHOD_PTR(USphereComponent, GetScaledSphereRadius, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USphereComponent::StaticClass(), "GetShapeScale", { ERASE_METHOD_PTR(USphereComponent, GetShapeScale, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USphereComponent::StaticClass(), "GetUnscaledSphereRadius", { ERASE_METHOD_PTR(USphereComponent, GetUnscaledSphereRadius, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USphereComponent::StaticClass(), "SetSphereRadius", { ERASE_METHOD_PTR(USphereComponent, SetSphereRadius, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
}
