#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundAssetSubsystem.h"
void FASRuntimeBind_70Module::Bind_MetaSoundAssetSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundAssetSubsystem::StaticClass(), "RegisterAssetClassesInDirectories", { ERASE_METHOD_PTR(UMetaSoundAssetSubsystem, RegisterAssetClassesInDirectories, (const TArray<FMetaSoundAssetDirectory>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundAssetSubsystem::StaticClass(), "UnregisterAssetClassesInDirectories", { ERASE_METHOD_PTR(UMetaSoundAssetSubsystem, UnregisterAssetClassesInDirectories, (const TArray<FMetaSoundAssetDirectory>&), ERASE_ARGUMENT_PACK(void )) } );
}
