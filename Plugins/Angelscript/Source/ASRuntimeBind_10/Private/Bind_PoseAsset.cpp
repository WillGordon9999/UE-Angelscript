#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/PoseAsset.h"
void FASRuntimeBind_10Module::Bind_PoseAsset()
{
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "GetBasePoseName", { ERASE_METHOD_PTR(UPoseAsset, GetBasePoseName, () const, ERASE_ARGUMENT_PACK(FName )) } );
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "GetPoseNames", { ERASE_METHOD_PTR(UPoseAsset, GetPoseNames, (TArray<FName>&) const, ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "RenamePose", { ERASE_METHOD_PTR(UPoseAsset, RenamePose, (const FName&,  const FName&), ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "SetBasePoseName", { ERASE_METHOD_PTR(UPoseAsset, SetBasePoseName, (const FName&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "UpdatePoseFromAnimation", { ERASE_METHOD_PTR(UPoseAsset, UpdatePoseFromAnimation, (class UAnimSequence*), ERASE_ARGUMENT_PACK( void )) } );
}
