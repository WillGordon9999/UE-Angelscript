#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInterface.h"
#include "MaterialTypes.h"
#include "Engine/Texture.h"
#include "UObject/NoExportTypes.h"
#include "VT/RuntimeVirtualTexture.h"
#include "SparseVolumeTexture/SparseVolumeTexture.h"
void FASRuntimeBind_10Module::Bind_MaterialInstanceDynamic()
{
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "CopyParameterOverrides", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, CopyParameterOverrides, (UMaterialInstance*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "InitializeScalarParameterAndGetIndex", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, InitializeScalarParameterAndGetIndex, (const FName&,  float,  int32&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_CopyMaterialInstanceParameters", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_CopyMaterialInstanceParameters, (UMaterialInterface*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_GetScalarParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetScalarParameterValue, (FName), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_GetScalarParameterValueByInfo", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetScalarParameterValueByInfo, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_GetTextureParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetTextureParameterValue, (FName), ERASE_ARGUMENT_PACK( class UTexture* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_GetTextureParameterValueByInfo", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetTextureParameterValueByInfo, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK( class UTexture* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_GetVectorParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetVectorParameterValue, (FName), ERASE_ARGUMENT_PACK( FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_GetVectorParameterValueByInfo", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetVectorParameterValueByInfo, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK( FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "K2_InterpolateMaterialInstanceParams", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_InterpolateMaterialInstanceParams, (UMaterialInstance*,  UMaterialInstance*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetDoubleVectorParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetDoubleVectorParameterValue, (FName,  FVector4), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetRuntimeVirtualTextureParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetRuntimeVirtualTextureParameterValue, (FName,  class URuntimeVirtualTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetRuntimeVirtualTextureParameterValueByInfo", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetRuntimeVirtualTextureParameterValueByInfo, (const FMaterialParameterInfo&,  class URuntimeVirtualTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetScalarParameterByIndex", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetScalarParameterByIndex, (int32,  float), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetScalarParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetScalarParameterValue, (FName,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetScalarParameterValueByInfo", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetScalarParameterValueByInfo, (const FMaterialParameterInfo&,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetSparseVolumeTextureParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetSparseVolumeTextureParameterValue, (FName,  class USparseVolumeTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetTextureParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetTextureParameterValue, (FName,  class UTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetTextureParameterValueByInfo", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetTextureParameterValueByInfo, (const FMaterialParameterInfo&,  class UTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetVectorParameterValue", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetVectorParameterValue, (FName,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialInstanceDynamic::StaticClass(), "SetVectorParameterValueByInfo", { ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetVectorParameterValueByInfo, (const FMaterialParameterInfo&,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
}
