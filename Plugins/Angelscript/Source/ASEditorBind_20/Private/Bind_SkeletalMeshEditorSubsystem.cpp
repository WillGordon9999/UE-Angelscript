#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "SkeletalMeshEditorSubsystem.h"
void FASEditorBind_20Module::Bind_SkeletalMeshEditorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "GetLODMaterialSlot", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetLODMaterialSlot, (USkeletalMesh*,  int32,  int32), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "GetNumSections", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetNumSections, (USkeletalMesh*,  int32), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "GetNumVerts", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetNumVerts, (USkeletalMesh*,  int32), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "GetSectionCastShadow", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionCastShadow, (const USkeletalMesh*,  const int32,  const int32,  bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "GetSectionRecomputeTangent", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionRecomputeTangent, (const USkeletalMesh*,  const int32,  const int32,  bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "GetSectionRecomputeTangentsVertexMaskChannel", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionRecomputeTangentsVertexMaskChannel, (const USkeletalMesh*,  const int32,  const int32,  uint8&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "GetSectionVisibleInRayTracing", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionVisibleInRayTracing, (const USkeletalMesh*,  const int32,  const int32,  bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "SetSectionCastShadow", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionCastShadow, (USkeletalMesh*,  const int32,  const int32,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "SetSectionRecomputeTangent", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionRecomputeTangent, (USkeletalMesh*,  const int32,  const int32,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "SetSectionRecomputeTangentsVertexMaskChannel", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionRecomputeTangentsVertexMaskChannel, (USkeletalMesh*,  const int32,  const int32,  const uint8), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshEditorSubsystem::StaticClass(), "SetSectionVisibleInRayTracing", { ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionVisibleInRayTracing, (USkeletalMesh*,  const int32,  const int32,  const bool), ERASE_ARGUMENT_PACK(bool )) } );
}
