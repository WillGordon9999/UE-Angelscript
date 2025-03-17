#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/SkeletalMeshSocket.h"
#include "UObject/NoExportTypes.h"
#include "Animation/MeshDeformer.h"
#include "Engine/SkeletalMeshLODSettings.h"
#include "Engine/SkinnedAssetCommon.h"
#include "ClothingAssetBase.h"
#include "Animation/MorphTarget.h"
#include "Animation/NodeMappingContainer.h"
#include "Engine/Blueprint.h"
#include "Materials/MaterialInterface.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "Animation/Skeleton.h"
void FASRuntimeBind_10Module::Bind_SkeletalMesh()
{
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "AddSocket", { ERASE_METHOD_PTR(USkeletalMesh, AddSocket, (USkeletalMeshSocket*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "FindSocketAndIndex", { ERASE_METHOD_PTR(USkeletalMesh, FindSocketAndIndex, (FName,  int32&) const, ERASE_ARGUMENT_PACK( USkeletalMeshSocket* )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "GetBounds", { ERASE_METHOD_PTR(USkeletalMesh, GetBounds, () const, ERASE_ARGUMENT_PACK(  FBoxSphereBounds )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "GetDefaultMeshDeformer", { ERASE_METHOD_PTR(USkeletalMesh, GetDefaultMeshDeformer, () const, ERASE_ARGUMENT_PACK( UMeshDeformer* )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "GetImportedBounds", { ERASE_METHOD_PTR(USkeletalMesh, GetImportedBounds, () const, ERASE_ARGUMENT_PACK( FBoxSphereBounds )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "GetNodeMappingContainer", { ERASE_METHOD_PTR(USkeletalMesh, GetNodeMappingContainer, (class UBlueprint*) const, ERASE_ARGUMENT_PACK( class UNodeMappingContainer* )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "GetOverlayMaterial", { ERASE_METHOD_PTR(USkeletalMesh, GetOverlayMaterial, () const, ERASE_ARGUMENT_PACK( class UMaterialInterface* )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "GetOverlayMaterialMaxDrawDistance", { ERASE_METHOD_PTR(USkeletalMesh, GetOverlayMaterialMaxDrawDistance, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "GetSocketByIndex", { ERASE_METHOD_PTR(USkeletalMesh, GetSocketByIndex, (int32) const, ERASE_ARGUMENT_PACK( USkeletalMeshSocket* )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "IsSectionUsingCloth", { ERASE_METHOD_PTR(USkeletalMesh, IsSectionUsingCloth, (int32,  bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "K2_GetAllMorphTargetNames", { ERASE_METHOD_PTR(USkeletalMesh, K2_GetAllMorphTargetNames, () const, ERASE_ARGUMENT_PACK( TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "NumSockets", { ERASE_METHOD_PTR(USkeletalMesh, NumSockets, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "SetOverlayMaterial", { ERASE_METHOD_PTR(USkeletalMesh, SetOverlayMaterial, (class UMaterialInterface*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMesh::StaticClass(), "SetOverlayMaterialMaxDrawDistance", { ERASE_METHOD_PTR(USkeletalMesh, SetOverlayMaterialMaxDrawDistance, (float), ERASE_ARGUMENT_PACK(void )) } );
}
