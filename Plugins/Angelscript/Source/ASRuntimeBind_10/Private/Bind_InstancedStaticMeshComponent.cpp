#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_InstancedStaticMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "AddInstance", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstance, (const FTransform&,  bool), ERASE_ARGUMENT_PACK(  int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "AddInstances", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstances, (const TArray<FTransform>&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(  TArray<int32> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "BatchUpdateInstancesTransform", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, BatchUpdateInstancesTransform, (int32,  int32,  const FTransform&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "BatchUpdateInstancesTransforms", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, BatchUpdateInstancesTransforms, (int32,  const TArray<FTransform>&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "ClearInstances", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, ClearInstances, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "GetCullDistances", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetCullDistances, (int32&,  int32&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "GetInstanceCount", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstanceCount, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "GetInstancesOverlappingBox", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstancesOverlappingBox, (const FBox&,  bool) const, ERASE_ARGUMENT_PACK(  TArray<int32> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "GetInstancesOverlappingSphere", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstancesOverlappingSphere, (const FVector&,  float,  bool) const, ERASE_ARGUMENT_PACK(  TArray<int32> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "GetInstanceTransform", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstanceTransform, (int32,  FTransform&,  bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "GetLODDistanceScale", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetLODDistanceScale, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "IsValidInstance", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, IsValidInstance, (int32) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "RemoveInstance", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, RemoveInstance, (int32), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "RemoveInstances", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, RemoveInstances, (const TArray<int32>&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "SetCullDistances", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetCullDistances, (int32,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "SetCustomDataValue", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetCustomDataValue, (int32,  int32,  float,  bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "SetLODDistanceScale", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetLODDistanceScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "SetNumCustomDataFloats", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetNumCustomDataFloats, (int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInstancedStaticMeshComponent::StaticClass(), "UpdateInstanceTransform", { ERASE_METHOD_PTR(UInstancedStaticMeshComponent, UpdateInstanceTransform, (int32,  const FTransform&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(  bool )) } );
}
