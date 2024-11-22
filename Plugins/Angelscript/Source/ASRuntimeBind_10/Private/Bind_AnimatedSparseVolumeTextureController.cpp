#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "SparseVolumeTexture/SparseVolumeTexture.h"
void FASRuntimeBind_10Module::Bind_AnimatedSparseVolumeTextureController()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "GetCurrentFrame", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetCurrentFrame, (), ERASE_ARGUMENT_PACK( USparseVolumeTextureFrame* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "GetCurrentFramesForInterpolation", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetCurrentFramesForInterpolation, (USparseVolumeTextureFrame*&,  USparseVolumeTextureFrame*&,  float&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "GetDuration", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetDuration, (), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "GetFractionalFrameIndex", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetFractionalFrameIndex, (), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "GetFrameByIndex", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetFrameByIndex, (int32), ERASE_ARGUMENT_PACK( USparseVolumeTextureFrame* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "Pause", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Pause, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "Play", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Play, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "Stop", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Stop, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimatedSparseVolumeTextureController::StaticClass(), "Update", { ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Update, (float), ERASE_ARGUMENT_PACK( void )) } );
}
