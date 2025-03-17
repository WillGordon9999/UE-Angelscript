#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveLinearColor.h"
#include "Curves/CurveVector.h"
void FASRuntimeBind_10Module::Bind_TimelineComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "AddEvent", { ERASE_METHOD_PTR(UTimelineComponent, AddEvent, (float,  FOnTimelineEvent), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "AddInterpFloat", { ERASE_METHOD_PTR(UTimelineComponent, AddInterpFloat, (UCurveFloat*,  FOnTimelineFloat,  FName,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "AddInterpLinearColor", { ERASE_METHOD_PTR(UTimelineComponent, AddInterpLinearColor, (UCurveLinearColor*,  FOnTimelineLinearColor,  FName,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "AddInterpVector", { ERASE_METHOD_PTR(UTimelineComponent, AddInterpVector, (UCurveVector*,  FOnTimelineVector,  FName,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "GetIgnoreTimeDilation", { ERASE_METHOD_PTR(UTimelineComponent, GetIgnoreTimeDilation, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "GetPlaybackPosition", { ERASE_METHOD_PTR(UTimelineComponent, GetPlaybackPosition, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "GetPlayRate", { ERASE_METHOD_PTR(UTimelineComponent, GetPlayRate, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "GetScaledTimelineLength", { ERASE_METHOD_PTR(UTimelineComponent, GetScaledTimelineLength, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "GetTimelineLength", { ERASE_METHOD_PTR(UTimelineComponent, GetTimelineLength, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "IsLooping", { ERASE_METHOD_PTR(UTimelineComponent, IsLooping, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "IsPlaying", { ERASE_METHOD_PTR(UTimelineComponent, IsPlaying, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "IsReversing", { ERASE_METHOD_PTR(UTimelineComponent, IsReversing, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(UTimelineComponent, Play, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "PlayFromStart", { ERASE_METHOD_PTR(UTimelineComponent, PlayFromStart, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "Reverse", { ERASE_METHOD_PTR(UTimelineComponent, Reverse, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "ReverseFromEnd", { ERASE_METHOD_PTR(UTimelineComponent, ReverseFromEnd, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetFloatCurve", { ERASE_METHOD_PTR(UTimelineComponent, SetFloatCurve, (UCurveFloat*,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetIgnoreTimeDilation", { ERASE_METHOD_PTR(UTimelineComponent, SetIgnoreTimeDilation, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetLinearColorCurve", { ERASE_METHOD_PTR(UTimelineComponent, SetLinearColorCurve, (UCurveLinearColor*,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetLooping", { ERASE_METHOD_PTR(UTimelineComponent, SetLooping, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetNewTime", { ERASE_METHOD_PTR(UTimelineComponent, SetNewTime, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetPlaybackPosition", { ERASE_METHOD_PTR(UTimelineComponent, SetPlaybackPosition, (float,  bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetPlayRate", { ERASE_METHOD_PTR(UTimelineComponent, SetPlayRate, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetTimelineFinishedFunc", { ERASE_METHOD_PTR(UTimelineComponent, SetTimelineFinishedFunc, (FOnTimelineEvent), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetTimelineLength", { ERASE_METHOD_PTR(UTimelineComponent, SetTimelineLength, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetTimelineLengthMode", { ERASE_METHOD_PTR(UTimelineComponent, SetTimelineLengthMode, (ETimelineLengthMode), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetTimelinePostUpdateFunc", { ERASE_METHOD_PTR(UTimelineComponent, SetTimelinePostUpdateFunc, (FOnTimelineEvent), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "SetVectorCurve", { ERASE_METHOD_PTR(UTimelineComponent, SetVectorCurve, (UCurveVector*,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTimelineComponent::StaticClass(), "Stop", { ERASE_METHOD_PTR(UTimelineComponent, Stop, (), ERASE_ARGUMENT_PACK( void )) } );
}
