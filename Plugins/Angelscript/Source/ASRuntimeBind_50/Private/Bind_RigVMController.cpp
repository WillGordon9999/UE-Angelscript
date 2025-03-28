#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/RigVMController.h"
#include "RigVMModel/RigVMNode.h"
#include "RigVMCore/RigVMByteCode.h"
#include "UObject/NoExportTypes.h"
#include "RigVMModel/Nodes/RigVMCommentNode.h"
#include "RigVMModel/Nodes/RigVMEnumNode.h"
#include "RigVMCore/RigVMFunction.h"
#include "RigVMModel/Nodes/RigVMFunctionReferenceNode.h"
#include "RigVMModel/Nodes/RigVMRerouteNode.h"
#include "RigVMModel/Nodes/RigVMLibraryNode.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
#include "RigVMModel/RigVMPin.h"
#include "RigVMModel/Nodes/RigVMInvokeEntryNode.h"
#include "RigVMModel/RigVMVariableDescription.h"
#include "RigVMModel/Nodes/RigVMParameterNode.h"
#include "RigVMModel/RigVMLink.h"
#include "RigVMModel/Nodes/RigVMTemplateNode.h"
#include "RigVMModel/Nodes/RigVMUnitNode.h"
#include "RigVMModel/Nodes/RigVMVariableNode.h"
#include "RigVMModel/Nodes/RigVMCollapseNode.h"
#include "RigVMModel/RigVMGraph.h"
#include "RigVMModel/RigVMSchema.h"
#include "RigVMCore/RigVMUserWorkflow.h"
void FASRuntimeBind_50Module::Bind_RigVMController()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddAggregatePin", { ERASE_METHOD_PTR(URigVMController, AddAggregatePin, (const FString&,  const FString&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddArrayNode", { ERASE_METHOD_PTR(URigVMController, AddArrayNode, (ERigVMOpCode,  const FString&,  UObject*,  const FVector2D&,  const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddArrayNodeFromObjectPath", { ERASE_METHOD_PTR(URigVMController, AddArrayNodeFromObjectPath, (ERigVMOpCode,  const FString&,  const FString&,  const FVector2D&,  const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddArrayPin", { ERASE_METHOD_PTR(URigVMController, AddArrayPin, (const FString&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddBranchNode", { ERASE_METHOD_PTR(URigVMController, AddBranchNode, (const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddCommentNode", { ERASE_METHOD_PTR(URigVMController, AddCommentNode, (const FString&,  const FVector2D&,  const FVector2D&,  const FLinearColor&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMCommentNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddDecorator", { ERASE_METHOD_PTR(URigVMController, AddDecorator, (const FName&,  const FName&,  const FName&,  const FString&,  int32,  bool,  bool), ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddEnumNode", { ERASE_METHOD_PTR(URigVMController, AddEnumNode, (const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMEnumNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddExposedPin", { ERASE_METHOD_PTR(URigVMController, AddExposedPin, (const FName&,  ERigVMPinDirection,  const FString&,  const FName&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddExternalFunctionReferenceNode", { ERASE_METHOD_PTR(URigVMController, AddExternalFunctionReferenceNode, (const FString&,  const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMFunctionReferenceNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddFreeRerouteNode", { ERASE_METHOD_PTR(URigVMController, AddFreeRerouteNode, (const FString&,  const FName&,  bool,  const FName&,  const FString&,  const FVector2D&,  const FString&,  bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddFunctionReferenceNode", { ERASE_METHOD_PTR(URigVMController, AddFunctionReferenceNode, (URigVMLibraryNode*,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMFunctionReferenceNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddFunctionReferenceNodeFromDescription", { ERASE_METHOD_PTR(URigVMController, AddFunctionReferenceNodeFromDescription, (const FRigVMGraphFunctionHeader&,  const FVector2D&,  const
	                                                                     FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMFunctionReferenceNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddFunctionToLibrary", { ERASE_METHOD_PTR(URigVMController, AddFunctionToLibrary, (const FName&,  bool,  const FVector2D&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMLibraryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddIfNode", { ERASE_METHOD_PTR(URigVMController, AddIfNode, (const FString&,  const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddIfNodeFromStruct", { ERASE_METHOD_PTR(URigVMController, AddIfNodeFromStruct, (UScriptStruct*,  const FVector2D&,  const FString&,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddInjectedNode", { ERASE_METHOD_PTR(URigVMController, AddInjectedNode, (const FString&,  bool,  UScriptStruct*,  const FName&,  const FName&,  const FName&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMInjectionInfo* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddInjectedNodeFromStructPath", { ERASE_METHOD_PTR(URigVMController, AddInjectedNodeFromStructPath, (const FString&,  bool,  const FString&,  const FName&,  const FName&,  const FName&,  const FString&,  bool), ERASE_ARGUMENT_PACK(URigVMInjectionInfo* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddInvokeEntryNode", { ERASE_METHOD_PTR(URigVMController, AddInvokeEntryNode, (const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMInvokeEntryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddLink", { ERASE_METHOD_PTR(URigVMController, AddLink, (const FString&,  const FString&,  bool,  bool,  ERigVMPinDirection,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddLocalVariable", { ERASE_METHOD_PTR(URigVMController, AddLocalVariable, (const FName&,  const FString&,  UObject*,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(FRigVMGraphVariableDescription )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddLocalVariableFromObjectPath", { ERASE_METHOD_PTR(URigVMController, AddLocalVariableFromObjectPath, (const FName&,  const FString&,  const FString&,  const FString&,  bool), ERASE_ARGUMENT_PACK(FRigVMGraphVariableDescription )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddRerouteNodeOnLink", { ERASE_METHOD_PTR(URigVMController, AddRerouteNodeOnLink, (URigVMLink*,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddRerouteNodeOnLinkPath", { ERASE_METHOD_PTR(URigVMController, AddRerouteNodeOnLinkPath, (const FString&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddRerouteNodeOnPin", { ERASE_METHOD_PTR(URigVMController, AddRerouteNodeOnPin, (const FString&,  bool,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddSelectNode", { ERASE_METHOD_PTR(URigVMController, AddSelectNode, (const FString&,  const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddSelectNodeFromStruct", { ERASE_METHOD_PTR(URigVMController, AddSelectNodeFromStruct, (UScriptStruct*,  const FVector2D&,  const FString&,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddTemplateNode", { ERASE_METHOD_PTR(URigVMController, AddTemplateNode, (const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMTemplateNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddUnitNode", { ERASE_METHOD_PTR(URigVMController, AddUnitNode, (UScriptStruct*,  const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMUnitNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddUnitNodeFromStructPath", { ERASE_METHOD_PTR(URigVMController, AddUnitNodeFromStructPath, (const FString&,  const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMUnitNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddUnitNodeWithDefaults", { ERASE_METHOD_PTR(URigVMController, AddUnitNodeWithDefaults, (UScriptStruct*,  const FString&,  const FName&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMUnitNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddVariableNode", { ERASE_METHOD_PTR(URigVMController, AddVariableNode, (const FName&,  const FString&,  UObject*,  bool,  const FString&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMVariableNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "AddVariableNodeFromObjectPath", { ERASE_METHOD_PTR(URigVMController, AddVariableNodeFromObjectPath, (const FName&,  const FString&,  const FString&,  bool,  const FString&,  const FVector2D&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMVariableNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "BindPinToVariable", { ERASE_METHOD_PTR(URigVMController, BindPinToVariable, (const FString&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "BreakAllLinks", { ERASE_METHOD_PTR(URigVMController, BreakAllLinks, (const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "BreakLink", { ERASE_METHOD_PTR(URigVMController, BreakLink, (const FString&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "CancelUndoBracket", { ERASE_METHOD_PTR(URigVMController, CancelUndoBracket, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "CanImportNodesFromText", { ERASE_METHOD_PTR(URigVMController, CanImportNodesFromText, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ChangeExposedPinType", { ERASE_METHOD_PTR(URigVMController, ChangeExposedPinType, (const FName&,  const FString&,  const FName&,  bool&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ClearArrayPin", { ERASE_METHOD_PTR(URigVMController, ClearArrayPin, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ClearNodeSelection", { ERASE_METHOD_PTR(URigVMController, ClearNodeSelection, (bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "CloseUndoBracket", { ERASE_METHOD_PTR(URigVMController, CloseUndoBracket, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "CollapseNodes", { ERASE_METHOD_PTR(URigVMController, CollapseNodes, (const TArray<FName>&,  const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMCollapseNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "DuplicateArrayPin", { ERASE_METHOD_PTR(URigVMController, DuplicateArrayPin, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "EjectNodeFromPin", { ERASE_METHOD_PTR(URigVMController, EjectNodeFromPin, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "EnableReporting", { ERASE_METHOD_PTR(URigVMController, EnableReporting, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ExpandLibraryNode", { ERASE_METHOD_PTR(URigVMController, ExpandLibraryNode, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(TArray<URigVMNode*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ExportNodesToText", { ERASE_METHOD_PTR(URigVMController, ExportNodesToText, (const TArray<FName>&,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ExportSelectedNodesToText", { ERASE_METHOD_PTR(URigVMController, ExportSelectedNodesToText, (bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "GeneratePythonCommands", { ERASE_METHOD_PTR(URigVMController, GeneratePythonCommands, (), ERASE_ARGUMENT_PACK(TArray<FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "GetControllerForGraph", { ERASE_METHOD_PTR(URigVMController, GetControllerForGraph, (const URigVMGraph*) const, ERASE_ARGUMENT_PACK(URigVMController* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "GetGraph", { ERASE_METHOD_PTR(URigVMController, GetGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "GetPinDefaultValue", { ERASE_METHOD_PTR(URigVMController, GetPinDefaultValue, (const FString&), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "GetSchema", { ERASE_METHOD_PTR(URigVMController, GetSchema, () const, ERASE_ARGUMENT_PACK(URigVMSchema* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "GetTopLevelGraph", { ERASE_METHOD_PTR(URigVMController, GetTopLevelGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ImportNodesFromText", { ERASE_METHOD_PTR(URigVMController, ImportNodesFromText, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "InsertArrayPin", { ERASE_METHOD_PTR(URigVMController, InsertArrayPin, (const FString&,  int32,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "IsFunctionPublic", { ERASE_METHOD_PTR(URigVMController, IsFunctionPublic, (const FName&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "IsReportingEnabled", { ERASE_METHOD_PTR(URigVMController, IsReportingEnabled, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "IsTransacting", { ERASE_METHOD_PTR(URigVMController, IsTransacting, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "LocalizeFunction", { ERASE_METHOD_PTR(URigVMController, LocalizeFunction, (
		const FRigVMGraphFunctionIdentifier&, 
		bool, 
		bool, 
		bool), ERASE_ARGUMENT_PACK(URigVMLibraryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "LocalizeFunctionFromPath", { ERASE_METHOD_PTR(URigVMController, LocalizeFunctionFromPath, (const FString&,  const FName&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(URigVMLibraryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "LocalizeFunctions", { ERASE_METHOD_PTR(URigVMController, LocalizeFunctions, (
		TArray<FRigVMGraphFunctionIdentifier>, 
		bool, 
		bool, 
		bool), ERASE_ARGUMENT_PACK(TMap<FRigVMGraphFunctionIdentifier, URigVMLibraryNode*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "MakeBindingsFromVariableNode", { ERASE_METHOD_PTR(URigVMController, MakeBindingsFromVariableNode, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "MakeOptionsForWorkflow", { ERASE_METHOD_PTR(URigVMController, MakeOptionsForWorkflow, (UObject*,  const FRigVMUserWorkflow&), ERASE_ARGUMENT_PACK(URigVMUserWorkflowOptions* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "MakeVariableNodeFromBinding", { ERASE_METHOD_PTR(URigVMController, MakeVariableNodeFromBinding, (const FString&,  const FVector2D&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "MarkFunctionAsPublic", { ERASE_METHOD_PTR(URigVMController, MarkFunctionAsPublic, (const FName&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "OpenUndoBracket", { ERASE_METHOD_PTR(URigVMController, OpenUndoBracket, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "PerformUserWorkflow", { ERASE_METHOD_PTR(URigVMController, PerformUserWorkflow, (const FRigVMUserWorkflow&,  const URigVMUserWorkflowOptions*,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "PromoteCollapseNodeToFunctionReferenceNode", { ERASE_METHOD_PTR(URigVMController, PromoteCollapseNodeToFunctionReferenceNode, (const FName&,  bool,  bool,  const FString&), ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "PromoteFunctionReferenceNodeToCollapseNode", { ERASE_METHOD_PTR(URigVMController, PromoteFunctionReferenceNodeToCollapseNode, (const FName&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "PromotePinToVariable", { ERASE_METHOD_PTR(URigVMController, PromotePinToVariable, (const FString&,  bool,  const FVector2D&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "Redo", { ERASE_METHOD_PTR(URigVMController, Redo, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RefreshVariableNode", { ERASE_METHOD_PTR(URigVMController, RefreshVariableNode, (const FName&,  const FName&,  const FString&,  UObject*,  bool,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveAggregatePin", { ERASE_METHOD_PTR(URigVMController, RemoveAggregatePin, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveArrayPin", { ERASE_METHOD_PTR(URigVMController, RemoveArrayPin, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveDecorator", { ERASE_METHOD_PTR(URigVMController, RemoveDecorator, (const FName&,  const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveExposedPin", { ERASE_METHOD_PTR(URigVMController, RemoveExposedPin, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveFunctionFromLibrary", { ERASE_METHOD_PTR(URigVMController, RemoveFunctionFromLibrary, (const FName&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveInjectedNode", { ERASE_METHOD_PTR(URigVMController, RemoveInjectedNode, (const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveLocalVariable", { ERASE_METHOD_PTR(URigVMController, RemoveLocalVariable, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveNode", { ERASE_METHOD_PTR(URigVMController, RemoveNode, (URigVMNode*,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveNodeByName", { ERASE_METHOD_PTR(URigVMController, RemoveNodeByName, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveNodes", { ERASE_METHOD_PTR(URigVMController, RemoveNodes, (TArray<URigVMNode*>,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RemoveNodesByName", { ERASE_METHOD_PTR(URigVMController, RemoveNodesByName, (const TArray<FName>&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RenameExposedPin", { ERASE_METHOD_PTR(URigVMController, RenameExposedPin, (const FName&,  const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RenameFunction", { ERASE_METHOD_PTR(URigVMController, RenameFunction, (const FName&,  const FName&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RenameLocalVariable", { ERASE_METHOD_PTR(URigVMController, RenameLocalVariable, (const FName&,  const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "RenameNode", { ERASE_METHOD_PTR(URigVMController, RenameNode, (URigVMNode*,  const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ReplaceParameterNodeWithVariable", { ERASE_METHOD_PTR(URigVMController, ReplaceParameterNodeWithVariable, (const FName&,  const FName&,  const FString&,  UObject*,  bool), ERASE_ARGUMENT_PACK(URigVMVariableNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ResetPinDefaultValue", { ERASE_METHOD_PTR(URigVMController, ResetPinDefaultValue, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "ResolveWildCardPin", { ERASE_METHOD_PTR(URigVMController, ResolveWildCardPin, (const FString&,  const FString&,  const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SelectNode", { ERASE_METHOD_PTR(URigVMController, SelectNode, (URigVMNode*,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SelectNodeByName", { ERASE_METHOD_PTR(URigVMController, SelectNodeByName, (const FName&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetArrayPinSize", { ERASE_METHOD_PTR(URigVMController, SetArrayPinSize, (const FString&,  int32,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetCommentText", { ERASE_METHOD_PTR(URigVMController, SetCommentText, (URigVMNode*,  const FString&,  const int32&,  const bool&,  const bool&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetCommentTextByName", { ERASE_METHOD_PTR(URigVMController, SetCommentTextByName, (const FName&,  const FString&,  const int32&,  const bool&,  const bool&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetExposedPinIndex", { ERASE_METHOD_PTR(URigVMController, SetExposedPinIndex, (const FName&,  int32,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetIsRunningUnitTest", { ERASE_METHOD_PTR(URigVMController, SetIsRunningUnitTest, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetLocalVariableDefaultValue", { ERASE_METHOD_PTR(URigVMController, SetLocalVariableDefaultValue, (const FName&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetLocalVariableType", { ERASE_METHOD_PTR(URigVMController, SetLocalVariableType, (const FName&,  const FString&,  UObject*,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetLocalVariableTypeFromObjectPath", { ERASE_METHOD_PTR(URigVMController, SetLocalVariableTypeFromObjectPath, (const FName&,  const FString&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeCategory", { ERASE_METHOD_PTR(URigVMController, SetNodeCategory, (URigVMCollapseNode*,  const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeCategoryByName", { ERASE_METHOD_PTR(URigVMController, SetNodeCategoryByName, (const FName&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeColor", { ERASE_METHOD_PTR(URigVMController, SetNodeColor, (URigVMNode*,  const FLinearColor&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeColorByName", { ERASE_METHOD_PTR(URigVMController, SetNodeColorByName, (const FName&,  const FLinearColor&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeDescription", { ERASE_METHOD_PTR(URigVMController, SetNodeDescription, (URigVMCollapseNode*,  const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeDescriptionByName", { ERASE_METHOD_PTR(URigVMController, SetNodeDescriptionByName, (const FName&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeKeywords", { ERASE_METHOD_PTR(URigVMController, SetNodeKeywords, (URigVMCollapseNode*,  const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeKeywordsByName", { ERASE_METHOD_PTR(URigVMController, SetNodeKeywordsByName, (const FName&,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodePosition", { ERASE_METHOD_PTR(URigVMController, SetNodePosition, (URigVMNode*,  const FVector2D&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodePositionByName", { ERASE_METHOD_PTR(URigVMController, SetNodePositionByName, (const FName&,  const FVector2D&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeSelection", { ERASE_METHOD_PTR(URigVMController, SetNodeSelection, (const TArray<FName>&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeSize", { ERASE_METHOD_PTR(URigVMController, SetNodeSize, (URigVMNode*,  const FVector2D&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetNodeSizeByName", { ERASE_METHOD_PTR(URigVMController, SetNodeSizeByName, (const FName&,  const FVector2D&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetPinDefaultValue", { ERASE_METHOD_PTR(URigVMController, SetPinDefaultValue, (const FString&,  const FString&,  bool,  bool,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetPinExpansion", { ERASE_METHOD_PTR(URigVMController, SetPinExpansion, (const FString&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetPinIsWatched", { ERASE_METHOD_PTR(URigVMController, SetPinIsWatched, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetRemappedVariable", { ERASE_METHOD_PTR(URigVMController, SetRemappedVariable, (URigVMFunctionReferenceNode*,  const FName&,  const FName&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetSchema", { ERASE_METHOD_PTR(URigVMController, SetSchema, (URigVMSchema*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "SetUnitNodeDefaults", { ERASE_METHOD_PTR(URigVMController, SetUnitNodeDefaults, (URigVMUnitNode*,  const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "UnbindPinFromVariable", { ERASE_METHOD_PTR(URigVMController, UnbindPinFromVariable, (const FString&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "Undo", { ERASE_METHOD_PTR(URigVMController, Undo, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "UnresolveTemplateNodes", { ERASE_METHOD_PTR(URigVMController, UnresolveTemplateNodes, (const TArray<FName>&,  bool,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMController::StaticClass(), "UpgradeNodes", { ERASE_METHOD_PTR(URigVMController, UpgradeNodes, (const TArray<FName>&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(TArray<URigVMNode*> )) } );
}
