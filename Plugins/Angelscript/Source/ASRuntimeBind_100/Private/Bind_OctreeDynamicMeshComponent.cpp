#include "ASRuntimeBind_100Module.h"
#include "AngelscriptBinds.h"
#include "Components/OctreeDynamicMeshComponent.h"
void FASRuntimeBind_100Module::Bind_OctreeDynamicMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UOctreeDynamicMeshComponent::StaticClass(), "SetDynamicMesh", { ERASE_METHOD_PTR(UOctreeDynamicMeshComponent, SetDynamicMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK(void )) } );
}
