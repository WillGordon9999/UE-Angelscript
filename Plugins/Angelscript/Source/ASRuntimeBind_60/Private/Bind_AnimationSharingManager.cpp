#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "AnimationSharingManager.h"
void FASRuntimeBind_60Module::Bind_AnimationSharingManager()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimationSharingManager::StaticClass(), "RegisterActorWithSkeletonBP", { ERASE_METHOD_PTR(UAnimationSharingManager, RegisterActorWithSkeletonBP, (AActor*,  const USkeleton*), ERASE_ARGUMENT_PACK(void )) } );
}
