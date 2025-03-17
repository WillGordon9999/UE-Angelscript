#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "WorldPartition/WorldPartitionSubsystem.h"
#include "WorldPartition/WorldPartitionRuntimeCell.h"
#include "WorldPartition/WorldPartitionStreamingSource.h"
void FASRuntimeBind_10Module::Bind_WorldPartitionSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UWorldPartitionSubsystem::StaticClass(), "IsAllStreamingCompleted", { ERASE_METHOD_PTR(UWorldPartitionSubsystem, IsAllStreamingCompleted, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWorldPartitionSubsystem::StaticClass(), "IsStreamingCompleted", { ERASE_METHOD_PTR(UWorldPartitionSubsystem, IsStreamingCompleted, (EWorldPartitionRuntimeCellState,  const TArray<FWorldPartitionStreamingQuerySource>&,  bool) const, ERASE_ARGUMENT_PACK( bool )) } );
}
