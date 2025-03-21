#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeSceneNode.h"
#include "Nodes/InterchangeBaseNodeContainer.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeSceneNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "AddSpecializedType", { ERASE_METHOD_PTR(UInterchangeSceneNode, AddSpecializedType, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomAnimationAssetUidToPlay", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomAnimationAssetUidToPlay, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomAssetInstanceUid", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomAssetInstanceUid, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomBindPoseGlobalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomBindPoseGlobalTransform, (const UInterchangeBaseNodeContainer*,  const FTransform&,  FTransform&,  bool) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomBindPoseLocalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomBindPoseLocalTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomGeometricTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomGeometricTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomGlobalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomGlobalTransform, (const UInterchangeBaseNodeContainer*,  const FTransform&,  FTransform&,  bool) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomLocalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomLocalTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomTimeZeroGlobalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomTimeZeroGlobalTransform, (const UInterchangeBaseNodeContainer*,  const FTransform&,  FTransform&,  bool) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetCustomTimeZeroLocalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomTimeZeroLocalTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetMorphTargetCurveWeights", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetMorphTargetCurveWeights, (TMap<FString, float>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetSlotMaterialDependencies", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetSlotMaterialDependencies, (TMap<FString, FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetSlotMaterialDependencyUid, (const FString&,  FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetSpecializedType", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetSpecializedType, (const int32,  FString&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetSpecializedTypeCount", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetSpecializedTypeCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "GetSpecializedTypes", { ERASE_METHOD_PTR(UInterchangeSceneNode, GetSpecializedTypes, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "IsSpecializedTypeContains", { ERASE_METHOD_PTR(UInterchangeSceneNode, IsSpecializedTypeContains, (const FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "RemoveSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeSceneNode, RemoveSlotMaterialDependencyUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "RemoveSpecializedType", { ERASE_METHOD_PTR(UInterchangeSceneNode, RemoveSpecializedType, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetCustomAnimationAssetUidToPlay", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomAnimationAssetUidToPlay, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetCustomAssetInstanceUid", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomAssetInstanceUid, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetCustomBindPoseLocalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomBindPoseLocalTransform, (const UInterchangeBaseNodeContainer*,  const FTransform&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetCustomGeometricTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomGeometricTransform, (const FTransform&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetCustomLocalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomLocalTransform, (const UInterchangeBaseNodeContainer*,  const FTransform&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetCustomTimeZeroLocalTransform", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomTimeZeroLocalTransform, (const UInterchangeBaseNodeContainer*,  const FTransform&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetMorphTargetCurveWeight", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetMorphTargetCurveWeight, (const FString&,  const float&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSceneNode::StaticClass(), "SetSlotMaterialDependencyUid", { ERASE_METHOD_PTR(UInterchangeSceneNode, SetSlotMaterialDependencyUid, (const FString&,  const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
