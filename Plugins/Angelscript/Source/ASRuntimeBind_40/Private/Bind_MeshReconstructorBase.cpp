#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "MeshReconstructorBase.h"
void FASRuntimeBind_40Module::Bind_MeshReconstructorBase()
{
			FAngelscriptBinds::AddFunctionEntry(UMeshReconstructorBase::StaticClass(), "IsReconstructionPaused", { ERASE_METHOD_PTR(UMeshReconstructorBase, IsReconstructionPaused, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMeshReconstructorBase::StaticClass(), "IsReconstructionStarted", { ERASE_METHOD_PTR(UMeshReconstructorBase, IsReconstructionStarted, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMeshReconstructorBase::StaticClass(), "PauseReconstruction", { ERASE_METHOD_PTR(UMeshReconstructorBase, PauseReconstruction, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMeshReconstructorBase::StaticClass(), "StartReconstruction", { ERASE_METHOD_PTR(UMeshReconstructorBase, StartReconstruction, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMeshReconstructorBase::StaticClass(), "StopReconstruction", { ERASE_METHOD_PTR(UMeshReconstructorBase, StopReconstruction, (), ERASE_ARGUMENT_PACK(  void )) } );
}
