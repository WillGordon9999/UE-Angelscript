#include "ASRuntimeBind_100Module.h"
#include "AngelscriptBinds.h"
#include "SkinWeightModifier.h"
#include "Engine/SkeletalMesh.h"
void FASRuntimeBind_100Module::Bind_SkinWeightModifier()
{
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "CommitWeightsToSkeletalMesh", { ERASE_METHOD_PTR(USkinWeightModifier, CommitWeightsToSkeletalMesh, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "EnforceMaxInfluences", { ERASE_METHOD_PTR(USkinWeightModifier, EnforceMaxInfluences, (const int32), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "GetAllBoneNames", { ERASE_METHOD_PTR(USkinWeightModifier, GetAllBoneNames, (), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "GetNumVertices", { ERASE_METHOD_PTR(USkinWeightModifier, GetNumVertices, (), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "GetSkeletalMesh", { ERASE_METHOD_PTR(USkinWeightModifier, GetSkeletalMesh, (), ERASE_ARGUMENT_PACK(USkeletalMesh* )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "GetVertexWeights", { ERASE_METHOD_PTR(USkinWeightModifier, GetVertexWeights, (const int32), ERASE_ARGUMENT_PACK(TMap<FName, float> )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "NormalizeAllWeights", { ERASE_METHOD_PTR(USkinWeightModifier, NormalizeAllWeights, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "NormalizeVertexWeights", { ERASE_METHOD_PTR(USkinWeightModifier, NormalizeVertexWeights, (const int32), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "PruneAllWeights", { ERASE_METHOD_PTR(USkinWeightModifier, PruneAllWeights, (const float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "PruneVertexWeights", { ERASE_METHOD_PTR(USkinWeightModifier, PruneVertexWeights, (const int32,  const float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "SetSkeletalMesh", { ERASE_METHOD_PTR(USkinWeightModifier, SetSkeletalMesh, (USkeletalMesh*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkinWeightModifier::StaticClass(), "SetVertexWeights", { ERASE_METHOD_PTR(USkinWeightModifier, SetVertexWeights, (
		const int32, 
		const TMap<FName, float>&, 
		const bool), ERASE_ARGUMENT_PACK(bool )) } );
}
