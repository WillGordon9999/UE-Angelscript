#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
void FASRuntimeBind_10Module::Bind_DataLayerInstance()
{
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "GetAsset", { ERASE_METHOD_PTR(UDataLayerInstance, GetAsset, () const, ERASE_ARGUMENT_PACK( const UDataLayerAsset* )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "GetDataLayerFullName", { ERASE_METHOD_PTR(UDataLayerInstance, GetDataLayerFullName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "GetDataLayerShortName", { ERASE_METHOD_PTR(UDataLayerInstance, GetDataLayerShortName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "GetDebugColor", { ERASE_METHOD_PTR(UDataLayerInstance, GetDebugColor, () const, ERASE_ARGUMENT_PACK( FColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "GetInitialRuntimeState", { ERASE_METHOD_PTR(UDataLayerInstance, GetInitialRuntimeState, () const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "GetType", { ERASE_METHOD_PTR(UDataLayerInstance, GetType, () const, ERASE_ARGUMENT_PACK( EDataLayerType )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "IsClientOnly", { ERASE_METHOD_PTR(UDataLayerInstance, IsClientOnly, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "IsEffectiveVisible", { ERASE_METHOD_PTR(UDataLayerInstance, IsEffectiveVisible, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "IsInitiallyVisible", { ERASE_METHOD_PTR(UDataLayerInstance, IsInitiallyVisible, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "IsRuntime", { ERASE_METHOD_PTR(UDataLayerInstance, IsRuntime, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "IsServerOnly", { ERASE_METHOD_PTR(UDataLayerInstance, IsServerOnly, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerInstance::StaticClass(), "IsVisible", { ERASE_METHOD_PTR(UDataLayerInstance, IsVisible, () const, ERASE_ARGUMENT_PACK( bool )) } );
}
