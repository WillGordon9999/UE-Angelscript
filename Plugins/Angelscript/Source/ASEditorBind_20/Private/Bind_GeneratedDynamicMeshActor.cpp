#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "GeometryActors/GeneratedDynamicMeshActor.h"
#include "Engine/StaticMeshActor.h"
void FASEditorBind_20Module::Bind_GeneratedDynamicMeshActor()
{
			FAngelscriptBinds::AddFunctionEntry(AGeneratedDynamicMeshActor::StaticClass(), "CopyPropertiesFromStaticMesh", { ERASE_METHOD_PTR(AGeneratedDynamicMeshActor, CopyPropertiesFromStaticMesh, (AStaticMeshActor*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGeneratedDynamicMeshActor::StaticClass(), "CopyPropertiesToStaticMesh", { ERASE_METHOD_PTR(AGeneratedDynamicMeshActor, CopyPropertiesToStaticMesh, (AStaticMeshActor*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGeneratedDynamicMeshActor::StaticClass(), "IncrementProgress", { ERASE_METHOD_PTR(AGeneratedDynamicMeshActor, IncrementProgress, (int,  FString), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGeneratedDynamicMeshActor::StaticClass(), "MarkForMeshRebuild", { ERASE_METHOD_PTR(AGeneratedDynamicMeshActor, MarkForMeshRebuild, (bool,  bool), ERASE_ARGUMENT_PACK(void )) } );
}
