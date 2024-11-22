#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/RigVMNode.h"
void FASRuntimeBind_50Module::Bind_RigVMNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "CanBeUpgraded", { ERASE_METHOD_PTR(URigVMNode, CanBeUpgraded, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "CanOnlyExistOnce", { ERASE_METHOD_PTR(URigVMNode, CanOnlyExistOnce, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "ExecutionIsHaltedAtThisNode", { ERASE_METHOD_PTR(URigVMNode, ExecutionIsHaltedAtThisNode, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "FindFunctionForNode", { ERASE_METHOD_PTR(URigVMNode, FindFunctionForNode, () const, ERASE_ARGUMENT_PACK( URigVMLibraryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "FindPin", { ERASE_METHOD_PTR(URigVMNode, FindPin, (const FString&) const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetAggregateInputs", { ERASE_METHOD_PTR(URigVMNode, GetAggregateInputs, () const, ERASE_ARGUMENT_PACK( TArray<URigVMPin*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetAggregateOutputs", { ERASE_METHOD_PTR(URigVMNode, GetAggregateOutputs, () const, ERASE_ARGUMENT_PACK( TArray<URigVMPin*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetAllPinsRecursively", { ERASE_METHOD_PTR(URigVMNode, GetAllPinsRecursively, () const, ERASE_ARGUMENT_PACK(TArray<URigVMPin*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetDecoratorPins", { ERASE_METHOD_PTR(URigVMNode, GetDecoratorPins, () const, ERASE_ARGUMENT_PACK(TArray<URigVMPin*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetEventName", { ERASE_METHOD_PTR(URigVMNode, GetEventName, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetFirstAggregatePin", { ERASE_METHOD_PTR(URigVMNode, GetFirstAggregatePin, () const, ERASE_ARGUMENT_PACK( URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetGraph", { ERASE_METHOD_PTR(URigVMNode, GetGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetGraphDepth", { ERASE_METHOD_PTR(URigVMNode, GetGraphDepth, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetInjectionInfo", { ERASE_METHOD_PTR(URigVMNode, GetInjectionInfo, () const, ERASE_ARGUMENT_PACK(URigVMInjectionInfo* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetLinkedSourceNodes", { ERASE_METHOD_PTR(URigVMNode, GetLinkedSourceNodes, () const, ERASE_ARGUMENT_PACK(TArray<URigVMNode*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetLinkedTargetNodes", { ERASE_METHOD_PTR(URigVMNode, GetLinkedTargetNodes, () const, ERASE_ARGUMENT_PACK(TArray<URigVMNode*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetLinks", { ERASE_METHOD_PTR(URigVMNode, GetLinks, () const, ERASE_ARGUMENT_PACK(TArray<URigVMLink*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetNextAggregateName", { ERASE_METHOD_PTR(URigVMNode, GetNextAggregateName, (const FName&) const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetNodeColor", { ERASE_METHOD_PTR(URigVMNode, GetNodeColor, () const, ERASE_ARGUMENT_PACK( FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetNodeIndex", { ERASE_METHOD_PTR(URigVMNode, GetNodeIndex, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetNodePath", { ERASE_METHOD_PTR(URigVMNode, GetNodePath, (bool) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetNodeTitle", { ERASE_METHOD_PTR(URigVMNode, GetNodeTitle, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetOppositeAggregatePin", { ERASE_METHOD_PTR(URigVMNode, GetOppositeAggregatePin, () const, ERASE_ARGUMENT_PACK( URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetOrphanedPins", { ERASE_METHOD_PTR(URigVMNode, GetOrphanedPins, () const, ERASE_ARGUMENT_PACK( const TArray<URigVMPin*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetPins", { ERASE_METHOD_PTR(URigVMNode, GetPins, () const, ERASE_ARGUMENT_PACK( const TArray<URigVMPin*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetPosition", { ERASE_METHOD_PTR(URigVMNode, GetPosition, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetPreviousFName", { ERASE_METHOD_PTR(URigVMNode, GetPreviousFName, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetRootGraph", { ERASE_METHOD_PTR(URigVMNode, GetRootGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetSecondAggregatePin", { ERASE_METHOD_PTR(URigVMNode, GetSecondAggregatePin, () const, ERASE_ARGUMENT_PACK( URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetSize", { ERASE_METHOD_PTR(URigVMNode, GetSize, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetSupportedWorkflows", { ERASE_METHOD_PTR(URigVMNode, GetSupportedWorkflows, (ERigVMUserWorkflowType,  const UObject*) const, ERASE_ARGUMENT_PACK( TArray<FRigVMUserWorkflow> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "GetToolTipText", { ERASE_METHOD_PTR(URigVMNode, GetToolTipText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "HasBreakpoint", { ERASE_METHOD_PTR(URigVMNode, HasBreakpoint, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "HasInputPin", { ERASE_METHOD_PTR(URigVMNode, HasInputPin, (bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "HasIOPin", { ERASE_METHOD_PTR(URigVMNode, HasIOPin, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "HasLazyPin", { ERASE_METHOD_PTR(URigVMNode, HasLazyPin, (bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "HasOrphanedPins", { ERASE_METHOD_PTR(URigVMNode, HasOrphanedPins, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "HasOutputPin", { ERASE_METHOD_PTR(URigVMNode, HasOutputPin, (bool) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "HasPinOfDirection", { ERASE_METHOD_PTR(URigVMNode, HasPinOfDirection, (ERigVMPinDirection) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsAggregate", { ERASE_METHOD_PTR(URigVMNode, IsAggregate, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsControlFlowNode", { ERASE_METHOD_PTR(URigVMNode, IsControlFlowNode, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsDecoratorPin", { ERASE_METHOD_PTR(URigVMNode, IsDecoratorPin, (FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsDefinedAsConstant", { ERASE_METHOD_PTR(URigVMNode, IsDefinedAsConstant, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsDefinedAsVarying", { ERASE_METHOD_PTR(URigVMNode, IsDefinedAsVarying, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsEvent", { ERASE_METHOD_PTR(URigVMNode, IsEvent, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsInjected", { ERASE_METHOD_PTR(URigVMNode, IsInjected, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsInputAggregate", { ERASE_METHOD_PTR(URigVMNode, IsInputAggregate, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsLinkedTo", { ERASE_METHOD_PTR(URigVMNode, IsLinkedTo, (URigVMNode*) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsLoopNode", { ERASE_METHOD_PTR(URigVMNode, IsLoopNode, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsMutable", { ERASE_METHOD_PTR(URigVMNode, IsMutable, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsPure", { ERASE_METHOD_PTR(URigVMNode, IsPure, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsSelected", { ERASE_METHOD_PTR(URigVMNode, IsSelected, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "IsVisibleInUI", { ERASE_METHOD_PTR(URigVMNode, IsVisibleInUI, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "SetExecutionIsHaltedAtThisNode", { ERASE_METHOD_PTR(URigVMNode, SetExecutionIsHaltedAtThisNode, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMNode::StaticClass(), "SetHasBreakpoint", { ERASE_METHOD_PTR(URigVMNode, SetHasBreakpoint, (const bool), ERASE_ARGUMENT_PACK(void )) } );
}
