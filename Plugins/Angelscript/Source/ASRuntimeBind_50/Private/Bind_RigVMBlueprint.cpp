#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMBlueprint.h"
void FASRuntimeBind_50Module::Bind_RigVMBlueprint()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "AddMemberVariable", { ERASE_METHOD_PTR(URigVMBlueprint, AddMemberVariable, (const FName&,  const FString&,  bool,  bool,  FString), ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "AddModel", { ERASE_METHOD_PTR(URigVMBlueprint, AddModel, (FString,  bool,  bool), ERASE_ARGUMENT_PACK( URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "ChangeMemberVariableType", { ERASE_METHOD_PTR(URigVMBlueprint, ChangeMemberVariableType, (const FName&,  const FString&,  bool,  bool,  FString), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "CreateRigVMHost", { ERASE_METHOD_PTR(URigVMBlueprint, CreateRigVMHost, (), ERASE_ARGUMENT_PACK(URigVMHost* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GeneratePythonCommands", { ERASE_METHOD_PTR(URigVMBlueprint, GeneratePythonCommands, (const FString), ERASE_ARGUMENT_PACK( TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetAllModels", { ERASE_METHOD_PTR(URigVMBlueprint, GetAllModels, () const, ERASE_ARGUMENT_PACK( TArray<URigVMGraph*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetAutoVMRecompile", { ERASE_METHOD_PTR(URigVMBlueprint, GetAutoVMRecompile, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetAvailableRigVMStructs", { ERASE_METHOD_PTR(URigVMBlueprint, GetAvailableRigVMStructs, () const, ERASE_ARGUMENT_PACK( TArray<UStruct*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetController", { ERASE_METHOD_PTR(URigVMBlueprint, GetController, (const URigVMGraph*) const, ERASE_ARGUMENT_PACK( URigVMController* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetControllerByName", { ERASE_METHOD_PTR(URigVMBlueprint, GetControllerByName, (const FString) const, ERASE_ARGUMENT_PACK( URigVMController* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetDebuggedRigVMHost", { ERASE_METHOD_PTR(URigVMBlueprint, GetDebuggedRigVMHost, (), ERASE_ARGUMENT_PACK(URigVMHost* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetDefaultModel", { ERASE_METHOD_PTR(URigVMBlueprint, GetDefaultModel, () const, ERASE_ARGUMENT_PACK( URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetFocusedModel", { ERASE_METHOD_PTR(URigVMBlueprint, GetFocusedModel, () const, ERASE_ARGUMENT_PACK( URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetLocalFunctionLibrary", { ERASE_METHOD_PTR(URigVMBlueprint, GetLocalFunctionLibrary, () const, ERASE_ARGUMENT_PACK( URigVMFunctionLibrary* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetMemberVariables", { ERASE_METHOD_PTR(URigVMBlueprint, GetMemberVariables, () const, ERASE_ARGUMENT_PACK(TArray<FRigVMGraphVariableDescription> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetModel", { ERASE_METHOD_PTR(URigVMBlueprint, GetModel, (const UEdGraph*) const, ERASE_ARGUMENT_PACK( URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetOrCreateController", { ERASE_METHOD_PTR(URigVMBlueprint, GetOrCreateController, (URigVMGraph*), ERASE_ARGUMENT_PACK( URigVMController* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "GetRigVMHostClass", { ERASE_METHOD_PTR(URigVMBlueprint, GetRigVMHostClass, () const, ERASE_ARGUMENT_PACK(UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "RecompileVM", { ERASE_METHOD_PTR(URigVMBlueprint, RecompileVM, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "RecompileVMIfRequired", { ERASE_METHOD_PTR(URigVMBlueprint, RecompileVMIfRequired, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "RemoveMemberVariable", { ERASE_METHOD_PTR(URigVMBlueprint, RemoveMemberVariable, (const FName&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "RemoveModel", { ERASE_METHOD_PTR(URigVMBlueprint, RemoveModel, (FString,  bool,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "RenameMemberVariable", { ERASE_METHOD_PTR(URigVMBlueprint, RenameMemberVariable, (const FName&,  const FName&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "RequestAutoVMRecompilation", { ERASE_METHOD_PTR(URigVMBlueprint, RequestAutoVMRecompilation, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "RequestRigVMInit", { ERASE_METHOD_PTR(URigVMBlueprint, RequestRigVMInit, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMBlueprint::StaticClass(), "SetAutoVMRecompile", { ERASE_METHOD_PTR(URigVMBlueprint, SetAutoVMRecompile, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
