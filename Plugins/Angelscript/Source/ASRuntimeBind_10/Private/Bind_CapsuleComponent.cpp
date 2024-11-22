#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/CapsuleComponent.h"
void FASRuntimeBind_10Module::Bind_CapsuleComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetScaledCapsuleHalfHeight", { ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleHalfHeight, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetScaledCapsuleHalfHeight_WithoutHemisphere", { ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleHalfHeight_WithoutHemisphere, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetScaledCapsuleRadius", { ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleRadius, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetScaledCapsuleSize", { ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleSize, (float&,  float&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetScaledCapsuleSize_WithoutHemisphere", { ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleSize_WithoutHemisphere, (float&,  float&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetShapeScale", { ERASE_METHOD_PTR(UCapsuleComponent, GetShapeScale, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetUnscaledCapsuleHalfHeight", { ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleHalfHeight, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetUnscaledCapsuleHalfHeight_WithoutHemisphere", { ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleHalfHeight_WithoutHemisphere, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetUnscaledCapsuleRadius", { ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleRadius, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetUnscaledCapsuleSize", { ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleSize, (float&,  float&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "GetUnscaledCapsuleSize_WithoutHemisphere", { ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleSize_WithoutHemisphere, (float&,  float&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "SetCapsuleHalfHeight", { ERASE_METHOD_PTR(UCapsuleComponent, SetCapsuleHalfHeight, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "SetCapsuleRadius", { ERASE_METHOD_PTR(UCapsuleComponent, SetCapsuleRadius, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCapsuleComponent::StaticClass(), "SetCapsuleSize", { ERASE_METHOD_PTR(UCapsuleComponent, SetCapsuleSize, (float,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
}
