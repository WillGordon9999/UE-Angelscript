#include "ASRuntimeBind_90Module.h"
#include "AngelscriptBinds.h"
#include "GeometryCacheComponent.h"
#include "UObject/NoExportTypes.h"
#include "GeometryCache.h"
void FASRuntimeBind_90Module::Bind_GeometryCacheComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetAnimationTime", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetAnimationTime, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetDuration", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetDuration, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetMotionVectorScale", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetMotionVectorScale, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetNumberOfFrames", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetNumberOfFrames, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetOverrideWireframeColor", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetOverrideWireframeColor, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetPlaybackDirection", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetPlaybackDirection, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetPlaybackSpeed", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetPlaybackSpeed, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetStartTimeOffset", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetStartTimeOffset, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "GetWireframeOverrideColor", { ERASE_METHOD_PTR(UGeometryCacheComponent, GetWireframeOverrideColor, () const, ERASE_ARGUMENT_PACK(FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "IsExtrapolatingFrames", { ERASE_METHOD_PTR(UGeometryCacheComponent, IsExtrapolatingFrames, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "IsLooping", { ERASE_METHOD_PTR(UGeometryCacheComponent, IsLooping, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "IsPlaying", { ERASE_METHOD_PTR(UGeometryCacheComponent, IsPlaying, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "IsPlayingReversed", { ERASE_METHOD_PTR(UGeometryCacheComponent, IsPlayingReversed, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "Pause", { ERASE_METHOD_PTR(UGeometryCacheComponent, Pause, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(UGeometryCacheComponent, Play, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "PlayFromStart", { ERASE_METHOD_PTR(UGeometryCacheComponent, PlayFromStart, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "PlayReversed", { ERASE_METHOD_PTR(UGeometryCacheComponent, PlayReversed, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "PlayReversedFromEnd", { ERASE_METHOD_PTR(UGeometryCacheComponent, PlayReversedFromEnd, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetExtrapolateFrames", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetExtrapolateFrames, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetGeometryCache", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetGeometryCache, ( UGeometryCache*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetLooping", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetLooping, ( const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetMotionVectorScale", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetMotionVectorScale, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetOverrideWireframeColor", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetOverrideWireframeColor, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetPlaybackSpeed", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetPlaybackSpeed, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetStartTimeOffset", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetStartTimeOffset, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "SetWireframeOverrideColor", { ERASE_METHOD_PTR(UGeometryCacheComponent, SetWireframeOverrideColor, (const FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "Stop", { ERASE_METHOD_PTR(UGeometryCacheComponent, Stop, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCacheComponent::StaticClass(), "TickAtThisTime", { ERASE_METHOD_PTR(UGeometryCacheComponent, TickAtThisTime, (const float,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(void )) } );
}
