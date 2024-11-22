#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "MockDataMeshTrackerComponent.h"
void FASRuntimeBind_40Module::Bind_MockDataMeshTrackerComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMockDataMeshTrackerComponent::StaticClass(), "ConnectMRMesh", { ERASE_METHOD_PTR(UMockDataMeshTrackerComponent, ConnectMRMesh, (class UMRMeshComponent*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMockDataMeshTrackerComponent::StaticClass(), "DisconnectMRMesh", { ERASE_METHOD_PTR(UMockDataMeshTrackerComponent, DisconnectMRMesh, (class UMRMeshComponent*), ERASE_ARGUMENT_PACK( void )) } );
}
