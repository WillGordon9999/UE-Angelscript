#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/Nodes/RigVMCommentNode.h"
void FASRuntimeBind_60Module::Bind_RigVMCommentNode()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMCommentNode::StaticClass(), "GetCommentBubbleVisible", { ERASE_METHOD_PTR(URigVMCommentNode, GetCommentBubbleVisible, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMCommentNode::StaticClass(), "GetCommentColorBubble", { ERASE_METHOD_PTR(URigVMCommentNode, GetCommentColorBubble, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMCommentNode::StaticClass(), "GetCommentFontSize", { ERASE_METHOD_PTR(URigVMCommentNode, GetCommentFontSize, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMCommentNode::StaticClass(), "GetCommentText", { ERASE_METHOD_PTR(URigVMCommentNode, GetCommentText, () const, ERASE_ARGUMENT_PACK(FString )) } );
}
