#include "ASRuntimeBind_100Module.h"
#include "AngelscriptBinds.h"
#include "TargetingSystem/TargetingSubsystem.h"
#include "TargetingSystem/TargetingPreset.h"
#include "Types/TargetingSystemTypes.h"
#include "Engine/HitResult.h"
#include "GameFramework/Actor.h"
void FASRuntimeBind_100Module::Bind_TargetingSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UTargetingSubsystem::StaticClass(), "GetTargetingResults", { ERASE_METHOD_PTR(UTargetingSubsystem, GetTargetingResults, (FTargetingRequestHandle,  TArray<FHitResult>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTargetingSubsystem::StaticClass(), "GetTargetingResultsActors", { ERASE_METHOD_PTR(UTargetingSubsystem, GetTargetingResultsActors, (FTargetingRequestHandle,  TArray<AActor*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTargetingSubsystem::StaticClass(), "GetTargetingSourceContext", { ERASE_METHOD_PTR(UTargetingSubsystem, GetTargetingSourceContext, (FTargetingRequestHandle) const, ERASE_ARGUMENT_PACK( FTargetingSourceContext )) } );
			FAngelscriptBinds::AddFunctionEntry(UTargetingSubsystem::StaticClass(), "RemoveAsyncTargetingRequestWithHandle", { ERASE_METHOD_PTR(UTargetingSubsystem, RemoveAsyncTargetingRequestWithHandle, ( FTargetingRequestHandle&), ERASE_ARGUMENT_PACK( void )) } );
}
