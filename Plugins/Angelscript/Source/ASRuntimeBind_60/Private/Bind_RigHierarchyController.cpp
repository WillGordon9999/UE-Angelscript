#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Rigs/RigHierarchyController.h"
void FASRuntimeBind_60Module::Bind_RigHierarchyController()
{
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddAnimationChannel_ForBlueprint", { ERASE_METHOD_PTR(URigHierarchyController, AddAnimationChannel_ForBlueprint, (
        FName, 
        FRigElementKey, 
        FRigControlSettings, 
        bool, 
        bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddBone", { ERASE_METHOD_PTR(URigHierarchyController, AddBone, (FName,  FRigElementKey,  FTransform,  bool,  ERigBoneType,  bool,  bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddConnector", { ERASE_METHOD_PTR(URigHierarchyController, AddConnector, (FName,  FRigConnectorSettings,  bool,  bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddControl_ForBlueprint", { ERASE_METHOD_PTR(URigHierarchyController, AddControl_ForBlueprint, (
        FName, 
        FRigElementKey, 
        FRigControlSettings, 
        FRigControlValue, 
        bool, 
        bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddCurve", { ERASE_METHOD_PTR(URigHierarchyController, AddCurve, (
        FName, 
        float, 
        bool, 
		bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddNull", { ERASE_METHOD_PTR(URigHierarchyController, AddNull, (FName,  FRigElementKey,  FTransform,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddParent", { ERASE_METHOD_PTR(URigHierarchyController, AddParent, (FRigElementKey,  FRigElementKey,  float,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddRigidBody", { ERASE_METHOD_PTR(URigHierarchyController, AddRigidBody, (
    	FName, 
    	FRigElementKey, 
        FRigRigidBodySettings, 
    	FTransform, 
    	bool, 
		bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "AddSocket", { ERASE_METHOD_PTR(URigHierarchyController, AddSocket, (FName,  FRigElementKey,  FTransform,  bool,  const FLinearColor&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ClearSelection", { ERASE_METHOD_PTR(URigHierarchyController, ClearSelection, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "DeselectElement", { ERASE_METHOD_PTR(URigHierarchyController, DeselectElement, (FRigElementKey), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "DuplicateElements", { ERASE_METHOD_PTR(URigHierarchyController, DuplicateElements, (TArray<FRigElementKey>,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ExportSelectionToText", { ERASE_METHOD_PTR(URigHierarchyController, ExportSelectionToText, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ExportToText", { ERASE_METHOD_PTR(URigHierarchyController, ExportToText, (TArray<FRigElementKey>) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "GeneratePythonCommands", { ERASE_METHOD_PTR(URigHierarchyController, GeneratePythonCommands, (), ERASE_ARGUMENT_PACK(TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "GetControlSettings", { ERASE_METHOD_PTR(URigHierarchyController, GetControlSettings, (FRigElementKey) const, ERASE_ARGUMENT_PACK(FRigControlSettings )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "GetHierarchy", { ERASE_METHOD_PTR(URigHierarchyController, GetHierarchy, () const, ERASE_ARGUMENT_PACK(URigHierarchy* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ImportBones", { ERASE_METHOD_PTR(URigHierarchyController, ImportBones, (
		USkeleton*, 
		FName, 
		bool, 
		bool, 
		bool, 
		bool, 
		bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ImportBonesFromAsset", { ERASE_METHOD_PTR(URigHierarchyController, ImportBonesFromAsset, (
        FString, 
        FName, 
        bool, 
        bool, 
        bool, 
        bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ImportCurves", { ERASE_METHOD_PTR(URigHierarchyController, ImportCurves, (
		USkeleton*,  
		FName,   
		bool, 
		bool, 
		bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ImportCurvesFromAsset", { ERASE_METHOD_PTR(URigHierarchyController, ImportCurvesFromAsset, (
        FString, 
        FName,  
        bool, 
        bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ImportFromText", { ERASE_METHOD_PTR(URigHierarchyController, ImportFromText, (
		FString, 
		bool, 
		bool, 
		bool, 
		bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "MirrorElements", { ERASE_METHOD_PTR(URigHierarchyController, MirrorElements, (TArray<FRigElementKey>,  FRigVMMirrorSettings,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(TArray<FRigElementKey> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "RemoveAllParents", { ERASE_METHOD_PTR(URigHierarchyController, RemoveAllParents, (FRigElementKey,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "RemoveElement", { ERASE_METHOD_PTR(URigHierarchyController, RemoveElement, (FRigElementKey,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "RemoveParent", { ERASE_METHOD_PTR(URigHierarchyController, RemoveParent, (FRigElementKey,  FRigElementKey,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "RenameElement", { ERASE_METHOD_PTR(URigHierarchyController, RenameElement, (FRigElementKey,  FName,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(FRigElementKey )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "ReorderElement", { ERASE_METHOD_PTR(URigHierarchyController, ReorderElement, (FRigElementKey,  int32,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "SelectElement", { ERASE_METHOD_PTR(URigHierarchyController, SelectElement, (FRigElementKey,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "SetControlSettings", { ERASE_METHOD_PTR(URigHierarchyController, SetControlSettings, (FRigElementKey,  FRigControlSettings,  bool) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "SetDisplayName", { ERASE_METHOD_PTR(URigHierarchyController, SetDisplayName, (FRigElementKey,  FName,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "SetHierarchy", { ERASE_METHOD_PTR(URigHierarchyController, SetHierarchy, (URigHierarchy*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "SetParent", { ERASE_METHOD_PTR(URigHierarchyController, SetParent, (FRigElementKey,  FRigElementKey,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigHierarchyController::StaticClass(), "SetSelection", { ERASE_METHOD_PTR(URigHierarchyController, SetSelection, (const TArray<FRigElementKey>&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
