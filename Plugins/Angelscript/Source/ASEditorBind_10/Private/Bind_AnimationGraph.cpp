#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "AnimationGraph.h"
void FASEditorBind_10Module::Bind_AnimationGraph()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimationGraph::StaticClass(), "GetGraphNodesOfClass", { ERASE_METHOD_PTR(UAnimationGraph, GetGraphNodesOfClass, (TSubclassOf<UAnimGraphNode_Base>,  TArray<UAnimGraphNode_Base*>&,  bool), ERASE_ARGUMENT_PACK(void )) } );
}
