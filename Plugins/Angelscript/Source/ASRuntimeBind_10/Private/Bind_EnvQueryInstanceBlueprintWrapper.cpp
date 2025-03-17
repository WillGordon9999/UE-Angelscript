#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_EnvQueryInstanceBlueprintWrapper()
{
			FAngelscriptBinds::AddFunctionEntry(UEnvQueryInstanceBlueprintWrapper::StaticClass(), "GetItemScore", { ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetItemScore, (int32) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnvQueryInstanceBlueprintWrapper::StaticClass(), "GetQueryResultsAsActors", { ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetQueryResultsAsActors, (TArray<AActor*>&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnvQueryInstanceBlueprintWrapper::StaticClass(), "GetQueryResultsAsLocations", { ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetQueryResultsAsLocations, (TArray<FVector>&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnvQueryInstanceBlueprintWrapper::StaticClass(), "SetNamedParam", { ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, SetNamedParam, (FName,  float), ERASE_ARGUMENT_PACK( void )) } );
}
