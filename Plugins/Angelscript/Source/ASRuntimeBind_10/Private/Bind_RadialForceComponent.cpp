#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "PhysicsEngine/RadialForceComponent.h"
void FASRuntimeBind_10Module::Bind_RadialForceComponent()
{
			FAngelscriptBinds::AddFunctionEntry(URadialForceComponent::StaticClass(), "AddObjectTypeToAffect", { ERASE_METHOD_PTR(URadialForceComponent, AddObjectTypeToAffect, (TEnumAsByte<enum EObjectTypeQuery>), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialForceComponent::StaticClass(), "FireImpulse", { ERASE_METHOD_PTR(URadialForceComponent, FireImpulse, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(URadialForceComponent::StaticClass(), "RemoveObjectTypeToAffect", { ERASE_METHOD_PTR(URadialForceComponent, RemoveObjectTypeToAffect, (TEnumAsByte<enum EObjectTypeQuery>), ERASE_ARGUMENT_PACK(  void )) } );
}
