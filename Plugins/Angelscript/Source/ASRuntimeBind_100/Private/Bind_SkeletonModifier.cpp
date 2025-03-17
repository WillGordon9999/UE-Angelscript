#include "ASRuntimeBind_100Module.h"
#include "AngelscriptBinds.h"
#include "SkeletonModifier.h"
#include "UObject/NoExportTypes.h"
#include "Engine/SkeletalMesh.h"
void FASRuntimeBind_100Module::Bind_SkeletonModifier()
{
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "AddBone", { ERASE_METHOD_PTR(USkeletonModifier, AddBone, (const FName,  const FName,  const FTransform&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "AddBones", { ERASE_METHOD_PTR(USkeletonModifier, AddBones, (const TArray<FName>&,  const TArray<FName>&,  const TArray<FTransform>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "CommitSkeletonToSkeletalMesh", { ERASE_METHOD_PTR(USkeletonModifier, CommitSkeletonToSkeletalMesh, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "GetAllBoneNames", { ERASE_METHOD_PTR(USkeletonModifier, GetAllBoneNames, () const, ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "GetBoneTransform", { ERASE_METHOD_PTR(USkeletonModifier, GetBoneTransform, (const FName,  const bool) const, ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "GetChildrenNames", { ERASE_METHOD_PTR(USkeletonModifier, GetChildrenNames, (const FName,  const bool) const, ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "GetParentName", { ERASE_METHOD_PTR(USkeletonModifier, GetParentName, (const FName) const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "MirrorBone", { ERASE_METHOD_PTR(USkeletonModifier, MirrorBone, (const FName,  const FMirrorOptions&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "MirrorBones", { ERASE_METHOD_PTR(USkeletonModifier, MirrorBones, (const TArray<FName>&,  const FMirrorOptions&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "OrientBone", { ERASE_METHOD_PTR(USkeletonModifier, OrientBone, (const FName,  const FOrientOptions&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "OrientBones", { ERASE_METHOD_PTR(USkeletonModifier, OrientBones, (const TArray<FName>&,  const FOrientOptions&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "ParentBone", { ERASE_METHOD_PTR(USkeletonModifier, ParentBone, (const FName,  const FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "ParentBones", { ERASE_METHOD_PTR(USkeletonModifier, ParentBones, (const TArray<FName>&,  const TArray<FName>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "RemoveBone", { ERASE_METHOD_PTR(USkeletonModifier, RemoveBone, (const FName,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "RemoveBones", { ERASE_METHOD_PTR(USkeletonModifier, RemoveBones, (const TArray<FName>&,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "RenameBone", { ERASE_METHOD_PTR(USkeletonModifier, RenameBone, (const FName,  const FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "RenameBones", { ERASE_METHOD_PTR(USkeletonModifier, RenameBones, (const TArray<FName>&,  const TArray<FName>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "SetBonesTransforms", { ERASE_METHOD_PTR(USkeletonModifier, SetBonesTransforms, (const TArray<FName>&,  const TArray<FTransform>&,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "SetBoneTransform", { ERASE_METHOD_PTR(USkeletonModifier, SetBoneTransform, (const FName,  const FTransform&,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletonModifier::StaticClass(), "SetSkeletalMesh", { ERASE_METHOD_PTR(USkeletonModifier, SetSkeletalMesh, (USkeletalMesh*), ERASE_ARGUMENT_PACK(bool )) } );
}
