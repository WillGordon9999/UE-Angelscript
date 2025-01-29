#include "ASRuntimeBind_90Module.h"
#include "AngelscriptBinds.h"
#include "UDynamicMesh.h"
void FASRuntimeBind_90Module::Bind_DynamicMeshPool()
{
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshPool::StaticClass(), "FreeAllMeshes", { ERASE_METHOD_PTR(UDynamicMeshPool, FreeAllMeshes, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshPool::StaticClass(), "RequestMesh", { ERASE_METHOD_PTR(UDynamicMeshPool, RequestMesh, (), ERASE_ARGUMENT_PACK( UDynamicMesh* )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshPool::StaticClass(), "ReturnAllMeshes", { ERASE_METHOD_PTR(UDynamicMeshPool, ReturnAllMeshes, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMeshPool::StaticClass(), "ReturnMesh", { ERASE_METHOD_PTR(UDynamicMeshPool, ReturnMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK( void )) } );
}
