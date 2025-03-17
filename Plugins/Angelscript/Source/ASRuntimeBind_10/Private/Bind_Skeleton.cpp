#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/Skeleton.h"
#include "Animation/BlendProfile.h"
void FASRuntimeBind_10Module::Bind_Skeleton()
{
			FAngelscriptBinds::AddFunctionEntry(USkeleton::StaticClass(), "AddCompatibleSkeleton", { ERASE_METHOD_PTR(USkeleton, AddCompatibleSkeleton, (const USkeleton*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeleton::StaticClass(), "AddCompatibleSkeletonSoft", { ERASE_METHOD_PTR(USkeleton, AddCompatibleSkeletonSoft, (const TSoftObjectPtr<USkeleton>&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeleton::StaticClass(), "GetBlendProfile", { ERASE_METHOD_PTR(USkeleton, GetBlendProfile, (const FName&), ERASE_ARGUMENT_PACK( UBlendProfile* )) } );
}
