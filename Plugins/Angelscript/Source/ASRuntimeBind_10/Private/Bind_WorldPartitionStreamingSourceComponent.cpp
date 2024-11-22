#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WorldPartitionStreamingSourceComponent.h"
void FASRuntimeBind_10Module::Bind_WorldPartitionStreamingSourceComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UWorldPartitionStreamingSourceComponent::StaticClass(), "DisableStreamingSource", { ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, DisableStreamingSource, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWorldPartitionStreamingSourceComponent::StaticClass(), "EnableStreamingSource", { ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, EnableStreamingSource, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWorldPartitionStreamingSourceComponent::StaticClass(), "IsStreamingCompleted", { ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, IsStreamingCompleted, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWorldPartitionStreamingSourceComponent::StaticClass(), "IsStreamingSourceEnabled", { ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, IsStreamingSourceEnabled, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
