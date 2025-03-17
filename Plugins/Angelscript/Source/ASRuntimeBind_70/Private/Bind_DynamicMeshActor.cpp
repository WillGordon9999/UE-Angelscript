#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "DynamicMeshActor.h"
#include "UDynamicMesh.h"
#include "Components/DynamicMeshComponent.h"
void FASRuntimeBind_70Module::Bind_DynamicMeshActor()
{
			FAngelscriptBinds::AddFunctionEntry(ADynamicMeshActor::StaticClass(), "AllocateComputeMesh", { ERASE_METHOD_PTR(ADynamicMeshActor, AllocateComputeMesh, (), ERASE_ARGUMENT_PACK( UDynamicMesh* )) } );
			FAngelscriptBinds::AddFunctionEntry(ADynamicMeshActor::StaticClass(), "FreeAllComputeMeshes", { ERASE_METHOD_PTR(ADynamicMeshActor, FreeAllComputeMeshes, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ADynamicMeshActor::StaticClass(), "GetComputeMeshPool", { ERASE_METHOD_PTR(ADynamicMeshActor, GetComputeMeshPool, (), ERASE_ARGUMENT_PACK( UDynamicMeshPool* )) } );
			FAngelscriptBinds::AddFunctionEntry(ADynamicMeshActor::StaticClass(), "GetDynamicMeshComponent", { ERASE_METHOD_PTR(ADynamicMeshActor, GetDynamicMeshComponent, () const, ERASE_ARGUMENT_PACK(UDynamicMeshComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(ADynamicMeshActor::StaticClass(), "ReleaseAllComputeMeshes", { ERASE_METHOD_PTR(ADynamicMeshActor, ReleaseAllComputeMeshes, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ADynamicMeshActor::StaticClass(), "ReleaseComputeMesh", { ERASE_METHOD_PTR(ADynamicMeshActor, ReleaseComputeMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK( bool )) } );
}
