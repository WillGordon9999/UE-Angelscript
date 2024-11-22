#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Sound/SoundWave.h"
void FASRuntimeBind_10Module::Bind_SoundWave()
{
			FAngelscriptBinds::AddFunctionEntry(USoundWave::StaticClass(), "GetCuePoints", { ERASE_METHOD_PTR(USoundWave, GetCuePoints, () const, ERASE_ARGUMENT_PACK( TArray<FSoundWaveCuePoint> )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundWave::StaticClass(), "GetLoopRegions", { ERASE_METHOD_PTR(USoundWave, GetLoopRegions, () const, ERASE_ARGUMENT_PACK( TArray<FSoundWaveCuePoint> )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundWave::StaticClass(), "GetSoundAssetCompressionType", { ERASE_METHOD_PTR(USoundWave, GetSoundAssetCompressionType, () const, ERASE_ARGUMENT_PACK( ESoundAssetCompressionType )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundWave::StaticClass(), "SetSoundAssetCompressionType", { ERASE_METHOD_PTR(USoundWave, SetSoundAssetCompressionType, (ESoundAssetCompressionType,  bool), ERASE_ARGUMENT_PACK( void )) } );
}
