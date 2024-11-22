#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "../../../Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h"
void FASRuntimeBind_70Module::Bind_PaperFlipbookComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetFlipbook", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbook, (), ERASE_ARGUMENT_PACK( UPaperFlipbook* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetFlipbookFramerate", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbookFramerate, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetFlipbookLength", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbookLength, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetFlipbookLengthInFrames", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbookLengthInFrames, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetPlaybackPosition", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetPlaybackPosition, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetPlaybackPositionInFrames", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetPlaybackPositionInFrames, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetPlayRate", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetPlayRate, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "GetSpriteColor", { ERASE_METHOD_PTR(UPaperFlipbookComponent, GetSpriteColor, () const, ERASE_ARGUMENT_PACK(FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "IsLooping", { ERASE_METHOD_PTR(UPaperFlipbookComponent, IsLooping, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "IsPlaying", { ERASE_METHOD_PTR(UPaperFlipbookComponent, IsPlaying, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "IsReversing", { ERASE_METHOD_PTR(UPaperFlipbookComponent, IsReversing, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(UPaperFlipbookComponent, Play, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "PlayFromStart", { ERASE_METHOD_PTR(UPaperFlipbookComponent, PlayFromStart, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "Reverse", { ERASE_METHOD_PTR(UPaperFlipbookComponent, Reverse, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "ReverseFromEnd", { ERASE_METHOD_PTR(UPaperFlipbookComponent, ReverseFromEnd, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "SetFlipbook", { ERASE_METHOD_PTR(UPaperFlipbookComponent, SetFlipbook, (class UPaperFlipbook*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "SetLooping", { ERASE_METHOD_PTR(UPaperFlipbookComponent, SetLooping, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "SetNewTime", { ERASE_METHOD_PTR(UPaperFlipbookComponent, SetNewTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "SetPlaybackPosition", { ERASE_METHOD_PTR(UPaperFlipbookComponent, SetPlaybackPosition, (float,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "SetPlaybackPositionInFrames", { ERASE_METHOD_PTR(UPaperFlipbookComponent, SetPlaybackPositionInFrames, (int32,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "SetPlayRate", { ERASE_METHOD_PTR(UPaperFlipbookComponent, SetPlayRate, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "SetSpriteColor", { ERASE_METHOD_PTR(UPaperFlipbookComponent, SetSpriteColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbookComponent::StaticClass(), "Stop", { ERASE_METHOD_PTR(UPaperFlipbookComponent, Stop, (), ERASE_ARGUMENT_PACK(void )) } );
}
