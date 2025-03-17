#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeMeshNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeMeshNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomBoundingBox", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomBoundingBox, (FBox&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomHasSmoothGroup", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasSmoothGroup, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomHasVertexBinormal", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexBinormal, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomHasVertexColor", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexColor, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomHasVertexNormal", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexNormal, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomHasVertexTangent", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexTangent, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomPolygonCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomPolygonCount, (int32&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomUVCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomUVCount, (int32&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetCustomVertexCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomVertexCount, (int32&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetMorphTargetDependeciesCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetDependeciesCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetMorphTargetDependencies", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetDependencies, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetMorphTargetDependency", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetDependency, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetMorphTargetName", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetName, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSceneInstanceUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSceneInstanceUid, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSceneInstanceUids", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSceneInstanceUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSceneInstanceUidsCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSceneInstanceUidsCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSkeletonDependeciesCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSkeletonDependeciesCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSkeletonDependencies", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSkeletonDependencies, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSkeletonDependency", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSkeletonDependency, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSlotMaterialDependencies", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSlotMaterialDependencies, (TMap<FString, FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "GetSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, GetSlotMaterialDependencyUid, (const FString&,  FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "IsMorphTarget", { ERASE_METHOD_PTR(UInterchangeMeshNode, IsMorphTarget, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "IsSkinnedMesh", { ERASE_METHOD_PTR(UInterchangeMeshNode, IsSkinnedMesh, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "RemoveMorphTargetDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveMorphTargetDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "RemoveSceneInstanceUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveSceneInstanceUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "RemoveSkeletonDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveSkeletonDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "RemoveSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveSlotMaterialDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomBoundingBox", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomBoundingBox, (const FBox&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomHasSmoothGroup", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasSmoothGroup, (const bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomHasVertexBinormal", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexBinormal, (const bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomHasVertexColor", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexColor, (const bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomHasVertexNormal", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexNormal, (const bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomHasVertexTangent", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexTangent, (const bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomPolygonCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomPolygonCount, (const int32&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomUVCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomUVCount, (const int32&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetCustomVertexCount", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomVertexCount, (const int32&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetMorphTarget", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetMorphTarget, (const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetMorphTargetDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetMorphTargetDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetMorphTargetName", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetMorphTargetName, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetPayLoadKey", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetPayLoadKey, (const FString&,  const EInterchangeMeshPayLoadType&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetSceneInstanceUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetSceneInstanceUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetSkeletonDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetSkeletonDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetSkinnedMesh", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetSkinnedMesh, (const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeMeshNode::StaticClass(), "SetSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeMeshNode, SetSlotMaterialDependencyUid, (const FString&,  const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
