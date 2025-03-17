#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "UDynamicMesh.h"
void FASRuntimeBind_70Module::Bind_DynamicMesh()
{
			FAngelscriptBinds::AddFunctionEntry(UDynamicMesh::StaticClass(), "GetTriangleCount", { ERASE_METHOD_PTR(UDynamicMesh, GetTriangleCount, () const, ERASE_ARGUMENT_PACK(  int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMesh::StaticClass(), "IsEmpty", { ERASE_METHOD_PTR(UDynamicMesh, IsEmpty, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMesh::StaticClass(), "Reset", { ERASE_METHOD_PTR(UDynamicMesh, Reset, (), ERASE_ARGUMENT_PACK(  UDynamicMesh* )) } );
			FAngelscriptBinds::AddFunctionEntry(UDynamicMesh::StaticClass(), "ResetToCube", { ERASE_METHOD_PTR(UDynamicMesh, ResetToCube, (), ERASE_ARGUMENT_PACK(  UDynamicMesh* )) } );
}
