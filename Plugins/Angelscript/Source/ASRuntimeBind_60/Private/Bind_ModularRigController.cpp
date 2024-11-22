#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "ModularRigController.h"
void FASRuntimeBind_60Module::Bind_ModularRigController()
{
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "AddModule", { ERASE_METHOD_PTR(UModularRigController, AddModule, (const FName&,  TSubclassOf<UControlRig>,  const FString&,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "AutoConnectModules", { ERASE_METHOD_PTR(UModularRigController, AutoConnectModules, (const TArray<FString>&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "AutoConnectSecondaryConnectors", { ERASE_METHOD_PTR(UModularRigController, AutoConnectSecondaryConnectors, (const TArray<FRigElementKey>&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "BindModuleVariable", { ERASE_METHOD_PTR(UModularRigController, BindModuleVariable, (const FString&,  const FName&,  const FString&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "CanConnectConnectorToElement", { ERASE_METHOD_PTR(UModularRigController, CanConnectConnectorToElement, (const FRigElementKey&,  const FRigElementKey&,  FText&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "ConnectConnectorToElement", { ERASE_METHOD_PTR(UModularRigController, ConnectConnectorToElement, (const FRigElementKey&,  const FRigElementKey&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "DeleteModule", { ERASE_METHOD_PTR(UModularRigController, DeleteModule, (const FString&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "DisconnectConnector", { ERASE_METHOD_PTR(UModularRigController, DisconnectConnector, (const FRigElementKey&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "DisconnectCyclicConnectors", { ERASE_METHOD_PTR(UModularRigController, DisconnectCyclicConnectors, (bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "MirrorModule", { ERASE_METHOD_PTR(UModularRigController, MirrorModule, (const FString&,  const FRigVMMirrorSettings&,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "RenameModule", { ERASE_METHOD_PTR(UModularRigController, RenameModule, (const FString&,  const FName&,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "ReparentModule", { ERASE_METHOD_PTR(UModularRigController, ReparentModule, (const FString&,  const FString&,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "SetConfigValueInModule", { ERASE_METHOD_PTR(UModularRigController, SetConfigValueInModule, (const FString&,  const FName&,  const FString&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "SetModuleShortName", { ERASE_METHOD_PTR(UModularRigController, SetModuleShortName, (const FString&,  const FString&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UModularRigController::StaticClass(), "UnBindModuleVariable", { ERASE_METHOD_PTR(UModularRigController, UnBindModuleVariable, (const FString&,  const FName&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
