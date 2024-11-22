#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "Chaos/CacheManagerActor.h"
void FASRuntimeBind_30Module::Bind_ChaosCacheManager()
{
			FAngelscriptBinds::AddFunctionEntry(AChaosCacheManager::StaticClass(), "ResetAllComponentTransforms", { ERASE_METHOD_PTR(AChaosCacheManager, ResetAllComponentTransforms, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AChaosCacheManager::StaticClass(), "ResetSingleTransform", { ERASE_METHOD_PTR(AChaosCacheManager, ResetSingleTransform, (int32), ERASE_ARGUMENT_PACK( void )) } );
			//FAngelscriptBinds::AddFunctionEntry(AChaosCacheManager::StaticClass(), "SetCurrentTime", { ERASE_METHOD_PTR(AChaosCacheManager, SetCurrentTime, (float), ERASE_ARGUMENT_PACK(void )) } );
}
