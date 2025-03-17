#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Field/FieldSystemObjects.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_WaveScalar()
{
			FAngelscriptBinds::AddFunctionEntry(UWaveScalar::StaticClass(), "SetWaveScalar", { ERASE_METHOD_PTR(UWaveScalar, SetWaveScalar, ( float,  FVector,  float,  float,  float,  EWaveFunctionType,  EFieldFalloffType), ERASE_ARGUMENT_PACK( UWaveScalar* )) } );
}
