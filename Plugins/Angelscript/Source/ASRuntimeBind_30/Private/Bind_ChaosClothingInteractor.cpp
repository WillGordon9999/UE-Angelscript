#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "ChaosCloth/ChaosClothingSimulationInteractor.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_30Module::Bind_ChaosClothingInteractor()
{
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "ResetAndTeleport", { ERASE_METHOD_PTR(UChaosClothingInteractor, ResetAndTeleport, (bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetAerodynamics", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetAerodynamics, (float,  float,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetAnimDrive", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetAnimDrive, (FVector2D,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetAnimDriveLinear", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetAnimDriveLinear, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetBackstop", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetBackstop, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetCollision", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetCollision, (float,  float,  bool,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetDamping", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetDamping, (float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetGravity", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetGravity, (float,  bool,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetLongRangeAttachment", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetLongRangeAttachment, (FVector2D,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetLongRangeAttachmentLinear", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetLongRangeAttachmentLinear, (float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetMaterial", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetMaterial, (FVector2D,  FVector2D,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetMaterialLinear", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetMaterialLinear, (float,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetPressure", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetPressure, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetVelocityScale", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetVelocityScale, (FVector,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosClothingInteractor::StaticClass(), "SetWind", { ERASE_METHOD_PTR(UChaosClothingInteractor, SetWind, (FVector2D,  FVector2D,  float,  FVector), ERASE_ARGUMENT_PACK( void )) } );
}
