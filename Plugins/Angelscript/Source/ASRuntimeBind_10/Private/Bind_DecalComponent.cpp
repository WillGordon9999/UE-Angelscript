#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/DecalComponent.h"
void FASRuntimeBind_10Module::Bind_DecalComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "CreateDynamicMaterialInstance", { ERASE_METHOD_PTR(UDecalComponent, CreateDynamicMaterialInstance, (), ERASE_ARGUMENT_PACK(  class UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "GetDecalMaterial", { ERASE_METHOD_PTR(UDecalComponent, GetDecalMaterial, () const, ERASE_ARGUMENT_PACK( class UMaterialInterface* )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "GetFadeDuration", { ERASE_METHOD_PTR(UDecalComponent, GetFadeDuration, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "GetFadeInDuration", { ERASE_METHOD_PTR(UDecalComponent, GetFadeInDuration, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "GetFadeInStartDelay", { ERASE_METHOD_PTR(UDecalComponent, GetFadeInStartDelay, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "GetFadeStartDelay", { ERASE_METHOD_PTR(UDecalComponent, GetFadeStartDelay, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "SetDecalColor", { ERASE_METHOD_PTR(UDecalComponent, SetDecalColor, (const FLinearColor&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "SetDecalMaterial", { ERASE_METHOD_PTR(UDecalComponent, SetDecalMaterial, (class UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "SetFadeIn", { ERASE_METHOD_PTR(UDecalComponent, SetFadeIn, (float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "SetFadeOut", { ERASE_METHOD_PTR(UDecalComponent, SetFadeOut, (float,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "SetFadeScreenSize", { ERASE_METHOD_PTR(UDecalComponent, SetFadeScreenSize, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDecalComponent::StaticClass(), "SetSortOrder", { ERASE_METHOD_PTR(UDecalComponent, SetSortOrder, (int32), ERASE_ARGUMENT_PACK( void )) } );
}
