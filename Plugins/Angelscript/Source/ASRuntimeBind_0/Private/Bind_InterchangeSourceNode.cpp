#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Nodes/InterchangeSourceNode.h"
void FASRuntimeBind_0Module::Bind_InterchangeSourceNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "GetCustomAnimatedTimeEnd", { ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomAnimatedTimeEnd, (double&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "GetCustomAnimatedTimeStart", { ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomAnimatedTimeStart, (double&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "GetCustomImportUnusedMaterial", { ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomImportUnusedMaterial, (bool&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "GetCustomSourceFrameRateDenominator", { ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceFrameRateDenominator, (int32&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "GetCustomSourceFrameRateNumerator", { ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceFrameRateNumerator, (int32&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "GetCustomSourceTimelineEnd", { ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceTimelineEnd, (double&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "GetCustomSourceTimelineStart", { ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceTimelineStart, (double&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "InitializeSourceNode", { ERASE_METHOD_PTR(UInterchangeSourceNode, InitializeSourceNode, (const FString&,  const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "SetCustomAnimatedTimeEnd", { ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomAnimatedTimeEnd, (const double&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "SetCustomAnimatedTimeStart", { ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomAnimatedTimeStart, (const double&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "SetCustomImportUnusedMaterial", { ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomImportUnusedMaterial, (const bool&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "SetCustomSourceFrameRateDenominator", { ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceFrameRateDenominator, (const int32&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "SetCustomSourceFrameRateNumerator", { ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceFrameRateNumerator, (const int32&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "SetCustomSourceTimelineEnd", { ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceTimelineEnd, (const double&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceNode::StaticClass(), "SetCustomSourceTimelineStart", { ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceTimelineStart, (const double&), ERASE_ARGUMENT_PACK( bool )) } );
}
