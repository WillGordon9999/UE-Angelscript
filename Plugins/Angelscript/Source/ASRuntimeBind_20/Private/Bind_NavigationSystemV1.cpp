#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "NavigationSystem.h"
void FASRuntimeBind_20Module::Bind_NavigationSystemV1()
{
			FAngelscriptBinds::AddFunctionEntry(UNavigationSystemV1::StaticClass(), "K2_ReplaceAreaInOctreeData", { ERASE_METHOD_PTR(UNavigationSystemV1, K2_ReplaceAreaInOctreeData, (const UObject*,  TSubclassOf<UNavArea>,  TSubclassOf<UNavArea>), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationSystemV1::StaticClass(), "OnNavigationBoundsUpdated", { ERASE_METHOD_PTR(UNavigationSystemV1, OnNavigationBoundsUpdated, (ANavMeshBoundsVolume*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationSystemV1::StaticClass(), "RegisterNavigationInvoker", { ERASE_METHOD_PTR(UNavigationSystemV1, RegisterNavigationInvoker, (AActor*,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationSystemV1::StaticClass(), "ResetMaxSimultaneousTileGenerationJobsCount", { ERASE_METHOD_PTR(UNavigationSystemV1, ResetMaxSimultaneousTileGenerationJobsCount, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationSystemV1::StaticClass(), "SetGeometryGatheringMode", { ERASE_METHOD_PTR(UNavigationSystemV1, SetGeometryGatheringMode, (ENavDataGatheringModeConfig), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationSystemV1::StaticClass(), "SetMaxSimultaneousTileGenerationJobsCount", { ERASE_METHOD_PTR(UNavigationSystemV1, SetMaxSimultaneousTileGenerationJobsCount, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationSystemV1::StaticClass(), "UnregisterNavigationInvoker", { ERASE_METHOD_PTR(UNavigationSystemV1, UnregisterNavigationInvoker, (AActor*), ERASE_ARGUMENT_PACK( void )) } );
}
