#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "ProceduralMeshComponent.h"
void FASRuntimeBind_80Module::Bind_ProceduralMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "AddCollisionConvexMesh", { ERASE_METHOD_PTR(UProceduralMeshComponent, AddCollisionConvexMesh, (TArray<FVector>), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "ClearAllMeshSections", { ERASE_METHOD_PTR(UProceduralMeshComponent, ClearAllMeshSections, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "ClearCollisionConvexMeshes", { ERASE_METHOD_PTR(UProceduralMeshComponent, ClearCollisionConvexMeshes, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "ClearMeshSection", { ERASE_METHOD_PTR(UProceduralMeshComponent, ClearMeshSection, (int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "CreateMeshSection_LinearColor", { ERASE_METHOD_PTR(UProceduralMeshComponent, CreateMeshSection_LinearColor, (int32,  const TArray<FVector>&,  const TArray<int32>&,  const TArray<FVector>&,  const TArray<FVector2D>&,  const TArray<FVector2D>&,  const TArray<FVector2D>&,  const TArray<FVector2D>&, 
		const TArray<FLinearColor>&,  const TArray<FProcMeshTangent>&,  bool,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "GetNumSections", { ERASE_METHOD_PTR(UProceduralMeshComponent, GetNumSections, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "IsMeshSectionVisible", { ERASE_METHOD_PTR(UProceduralMeshComponent, IsMeshSectionVisible, (int32) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "SetMeshSectionVisible", { ERASE_METHOD_PTR(UProceduralMeshComponent, SetMeshSectionVisible, (int32,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UProceduralMeshComponent::StaticClass(), "UpdateMeshSection_LinearColor", { ERASE_METHOD_PTR(UProceduralMeshComponent, UpdateMeshSection_LinearColor, (int32,  const TArray<FVector>&,  const TArray<FVector>&,  const TArray<FVector2D>&,  const TArray<FVector2D>&,  const TArray<FVector2D>&,  const TArray<FVector2D>&, 
		const TArray<FLinearColor>&,  const TArray<FProcMeshTangent>&,  bool), ERASE_ARGUMENT_PACK(void )) } );
}
