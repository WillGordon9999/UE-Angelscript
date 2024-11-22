#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "MediaPlateComponent.h"
void FASRuntimeBind_80Module::Bind_MediaPlateComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "Close", { ERASE_METHOD_PTR(UMediaPlateComponent, Close, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "GetIsAspectRatioAuto", { ERASE_METHOD_PTR(UMediaPlateComponent, GetIsAspectRatioAuto, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "GetLetterboxAspectRatio", { ERASE_METHOD_PTR(UMediaPlateComponent, GetLetterboxAspectRatio, (), ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "GetMediaPlayer", { ERASE_METHOD_PTR(UMediaPlateComponent, GetMediaPlayer, (), ERASE_ARGUMENT_PACK(UMediaPlayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "GetMediaTexture", { ERASE_METHOD_PTR(UMediaPlateComponent, GetMediaTexture, (int32), ERASE_ARGUMENT_PACK(UMediaTexture* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "GetMeshRange", { ERASE_METHOD_PTR(UMediaPlateComponent, GetMeshRange, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "Open", { ERASE_METHOD_PTR(UMediaPlateComponent, Open, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "Pause", { ERASE_METHOD_PTR(UMediaPlateComponent, Pause, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(UMediaPlateComponent, Play, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "Rewind", { ERASE_METHOD_PTR(UMediaPlateComponent, Rewind, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "Seek", { ERASE_METHOD_PTR(UMediaPlateComponent, Seek, (const FTimespan&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "SetIsAspectRatioAuto", { ERASE_METHOD_PTR(UMediaPlateComponent, SetIsAspectRatioAuto, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "SetLetterboxAspectRatio", { ERASE_METHOD_PTR(UMediaPlateComponent, SetLetterboxAspectRatio, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "SetMeshRange", { ERASE_METHOD_PTR(UMediaPlateComponent, SetMeshRange, (FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlateComponent::StaticClass(), "SetPlayOnlyWhenVisible", { ERASE_METHOD_PTR(UMediaPlateComponent, SetPlayOnlyWhenVisible, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
