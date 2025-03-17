#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "CustomMeshComponent.h"
void FASRuntimeBind_60Module::Bind_CustomMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCustomMeshComponent::StaticClass(), "AddCustomMeshTriangles", { ERASE_METHOD_PTR(UCustomMeshComponent, AddCustomMeshTriangles, (const TArray<FCustomMeshTriangle>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCustomMeshComponent::StaticClass(), "ClearCustomMeshTriangles", { ERASE_METHOD_PTR(UCustomMeshComponent, ClearCustomMeshTriangles, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCustomMeshComponent::StaticClass(), "SetCustomMeshTriangles", { ERASE_METHOD_PTR(UCustomMeshComponent, SetCustomMeshTriangles, (const TArray<FCustomMeshTriangle>&), ERASE_ARGUMENT_PACK(bool )) } );
}
