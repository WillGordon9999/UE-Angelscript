#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "ControlRigBlueprint.h"
void FASRuntimeBind_60Module::Bind_ControlRigBlueprint()
{
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "CanTurnIntoStandaloneRig_Blueprint", { ERASE_METHOD_PTR(UControlRigBlueprint, CanTurnIntoStandaloneRig_Blueprint, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "ConvertHierarchyElementsToSpawnerNodes", { ERASE_METHOD_PTR(UControlRigBlueprint, ConvertHierarchyElementsToSpawnerNodes, (URigHierarchy*,  TArray<FRigElementKey>,  bool), ERASE_ARGUMENT_PACK(TArray<URigVMNode*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "CreateControlRig", { ERASE_METHOD_PTR(UControlRigBlueprint, CreateControlRig, (), ERASE_ARGUMENT_PACK(UControlRig* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "GetControlRigClass", { ERASE_METHOD_PTR(UControlRigBlueprint, GetControlRigClass, () const, ERASE_ARGUMENT_PACK(UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "GetDebuggedControlRig", { ERASE_METHOD_PTR(UControlRigBlueprint, GetDebuggedControlRig, (), ERASE_ARGUMENT_PACK(UControlRig* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "GetHierarchyController", { ERASE_METHOD_PTR(UControlRigBlueprint, GetHierarchyController, (), ERASE_ARGUMENT_PACK(URigHierarchyController* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "GetModularRigController", { ERASE_METHOD_PTR(UControlRigBlueprint, GetModularRigController, (), ERASE_ARGUMENT_PACK(UModularRigController* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "GetPreviewMesh", { ERASE_METHOD_PTR(UControlRigBlueprint, GetPreviewMesh, () const, ERASE_ARGUMENT_PACK( USkeletalMesh* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "GetRigModuleIcon", { ERASE_METHOD_PTR(UControlRigBlueprint, GetRigModuleIcon, () const, ERASE_ARGUMENT_PACK(UTexture2D* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "IsControlRigModule", { ERASE_METHOD_PTR(UControlRigBlueprint, IsControlRigModule, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "RecompileModularRig", { ERASE_METHOD_PTR(UControlRigBlueprint, RecompileModularRig, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "SetPreviewMesh", { ERASE_METHOD_PTR(UControlRigBlueprint, SetPreviewMesh, (USkeletalMesh*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "TurnIntoControlRigModule_Blueprint", { ERASE_METHOD_PTR(UControlRigBlueprint, TurnIntoControlRigModule_Blueprint, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigBlueprint::StaticClass(), "TurnIntoStandaloneRig_Blueprint", { ERASE_METHOD_PTR(UControlRigBlueprint, TurnIntoStandaloneRig_Blueprint, (), ERASE_ARGUMENT_PACK(bool )) } );
}
