#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemComponent.h"
void FASRuntimeBind_10Module::Bind_FieldSystemComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "AddFieldCommand", { ERASE_METHOD_PTR(UFieldSystemComponent, AddFieldCommand, ( bool,  EFieldPhysicsType,  UFieldSystemMetaData*,  UFieldNodeBase*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "AddPersistentField", { ERASE_METHOD_PTR(UFieldSystemComponent, AddPersistentField, ( bool,  EFieldPhysicsType,   UFieldSystemMetaData*,  UFieldNodeBase*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ApplyLinearForce", { ERASE_METHOD_PTR(UFieldSystemComponent, ApplyLinearForce, ( bool,  FVector,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ApplyPhysicsField", { ERASE_METHOD_PTR(UFieldSystemComponent, ApplyPhysicsField, ( bool,  EFieldPhysicsType,  UFieldSystemMetaData*,  UFieldNodeBase*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ApplyRadialForce", { ERASE_METHOD_PTR(UFieldSystemComponent, ApplyRadialForce, ( bool,  FVector,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ApplyRadialVectorFalloffForce", { ERASE_METHOD_PTR(UFieldSystemComponent, ApplyRadialVectorFalloffForce, ( bool,  FVector,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ApplyStayDynamicField", { ERASE_METHOD_PTR(UFieldSystemComponent, ApplyStayDynamicField, ( bool,  FVector,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ApplyStrainField", { ERASE_METHOD_PTR(UFieldSystemComponent, ApplyStrainField, ( bool,  FVector,  float,  float,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ApplyUniformVectorFalloffForce", { ERASE_METHOD_PTR(UFieldSystemComponent, ApplyUniformVectorFalloffForce, ( bool,  FVector,  FVector,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "RemovePersistentFields", { ERASE_METHOD_PTR(UFieldSystemComponent, RemovePersistentFields, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UFieldSystemComponent::StaticClass(), "ResetFieldSystem", { ERASE_METHOD_PTR(UFieldSystemComponent, ResetFieldSystem, (), ERASE_ARGUMENT_PACK( void )) } );
}
