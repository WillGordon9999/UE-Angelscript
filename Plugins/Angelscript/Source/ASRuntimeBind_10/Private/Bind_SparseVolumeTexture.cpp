#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "SparseVolumeTexture/SparseVolumeTexture.h"
void FASRuntimeBind_10Module::Bind_SparseVolumeTexture()
{
			FAngelscriptBinds::AddFunctionEntry(USparseVolumeTexture::StaticClass(), "GetFrameTransform", { ERASE_METHOD_PTR(USparseVolumeTexture, GetFrameTransform, () const, ERASE_ARGUMENT_PACK( FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(USparseVolumeTexture::StaticClass(), "GetNumFrames", { ERASE_METHOD_PTR(USparseVolumeTexture, GetNumFrames, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USparseVolumeTexture::StaticClass(), "GetNumMipLevels", { ERASE_METHOD_PTR(USparseVolumeTexture, GetNumMipLevels, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USparseVolumeTexture::StaticClass(), "GetSizeX", { ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeX, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USparseVolumeTexture::StaticClass(), "GetSizeY", { ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeY, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(USparseVolumeTexture::StaticClass(), "GetSizeZ", { ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeZ, () const, ERASE_ARGUMENT_PACK( int32 )) } );
}
