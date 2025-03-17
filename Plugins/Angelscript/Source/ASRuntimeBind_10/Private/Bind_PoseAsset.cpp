#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/PoseAsset.h"
#include "Animation/AnimSequence.h"
void FASRuntimeBind_10Module::Bind_PoseAsset()
{
			FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "UpdatePoseFromAnimation", { ERASE_METHOD_PTR(UPoseAsset, UpdatePoseFromAnimation, (class UAnimSequence*), ERASE_ARGUMENT_PACK( void )) } );
}
