#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangePipelineMeshesUtilities.h"
void FASRuntimeBind_60Module::Bind_InterchangePipelineMeshesUtilities()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllMeshGeometry", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshGeometry, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllMeshGeometryNotInstanced", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshGeometryNotInstanced, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllMeshInstanceUids", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshInstanceUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllMeshInstanceUidsUsingMeshGeometryUid", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshInstanceUidsUsingMeshGeometryUid, (const FString&,  TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllSkinnedMeshGeometry", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllSkinnedMeshGeometry, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllSkinnedMeshInstance", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllSkinnedMeshInstance, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllStaticMeshGeometry", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllStaticMeshGeometry, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetAllStaticMeshInstance", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllStaticMeshInstance, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetMeshGeometryByUid", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshGeometryByUid, (const FString&) const, ERASE_ARGUMENT_PACK(const FInterchangeMeshGeometry& )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetMeshGeometrySkeletonRootUid", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshGeometrySkeletonRootUid, (const FString&) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetMeshInstanceByUid", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshInstanceByUid, (const FString&) const, ERASE_ARGUMENT_PACK(const FInterchangeMeshInstance& )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "GetMeshInstanceSkeletonRootUid", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshInstanceSkeletonRootUid, (const FString&) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "IsValidMeshGeometryUid", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, IsValidMeshGeometryUid, (const FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "IsValidMeshInstanceUid", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, IsValidMeshInstanceUid, (const FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineMeshesUtilities::StaticClass(), "SetContext", { ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, SetContext, (const FInterchangePipelineMeshesUtilitiesContext&) const, ERASE_ARGUMENT_PACK(void )) } );
}
