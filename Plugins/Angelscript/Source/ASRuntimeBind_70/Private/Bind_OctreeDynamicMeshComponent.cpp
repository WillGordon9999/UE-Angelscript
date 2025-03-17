#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Components/OctreeDynamicMeshComponent.h"
#include "UDynamicMesh.h"
void FASRuntimeBind_70Module::Bind_OctreeDynamicMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UOctreeDynamicMeshComponent::StaticClass(), "SetDynamicMesh", { ERASE_METHOD_PTR(UOctreeDynamicMeshComponent, SetDynamicMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK(void )) } );
}
