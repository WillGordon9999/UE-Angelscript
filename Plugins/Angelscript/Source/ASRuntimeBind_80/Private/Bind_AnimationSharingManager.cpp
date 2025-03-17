#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "AnimationSharingManager.h"
#include "GameFramework/Actor.h"
#include "Animation/Skeleton.h"
void FASRuntimeBind_80Module::Bind_AnimationSharingManager()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimationSharingManager::StaticClass(), "RegisterActorWithSkeletonBP", { ERASE_METHOD_PTR(UAnimationSharingManager, RegisterActorWithSkeletonBP, (AActor*,  const USkeleton*), ERASE_ARGUMENT_PACK(void )) } );
}
