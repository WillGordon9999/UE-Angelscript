#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "WorldPartition/DataLayer/DataLayerAsset.h"
void FASRuntimeBind_10Module::Bind_DataLayerAsset()
{
			FAngelscriptBinds::AddFunctionEntry(UDataLayerAsset::StaticClass(), "GetDebugColor", { ERASE_METHOD_PTR(UDataLayerAsset, GetDebugColor, () const, ERASE_ARGUMENT_PACK(FColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerAsset::StaticClass(), "GetType", { ERASE_METHOD_PTR(UDataLayerAsset, GetType, () const, ERASE_ARGUMENT_PACK( EDataLayerType )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerAsset::StaticClass(), "IsClientOnly", { ERASE_METHOD_PTR(UDataLayerAsset, IsClientOnly, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerAsset::StaticClass(), "IsRuntime", { ERASE_METHOD_PTR(UDataLayerAsset, IsRuntime, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerAsset::StaticClass(), "IsServerOnly", { ERASE_METHOD_PTR(UDataLayerAsset, IsServerOnly, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
