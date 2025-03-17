#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/MaterialBillboardComponent.h"
#include "Materials/MaterialInterface.h"
#include "Curves/CurveFloat.h"
void FASRuntimeBind_10Module::Bind_MaterialBillboardComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMaterialBillboardComponent::StaticClass(), "AddElement", { ERASE_METHOD_PTR(UMaterialBillboardComponent, AddElement, (
		class UMaterialInterface*, 
		class UCurveFloat*, 
		bool, 
		float, 
		float, 
		class UCurveFloat*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMaterialBillboardComponent::StaticClass(), "SetElements", { ERASE_METHOD_PTR(UMaterialBillboardComponent, SetElements, (const TArray<FMaterialSpriteElement>&), ERASE_ARGUMENT_PACK( void )) } );
}
