#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Particles/ParticleSystemComponent.h"
void FASRuntimeBind_10Module::Bind_ParticleSystemComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "BeginTrails", { ERASE_METHOD_PTR(UParticleSystemComponent, BeginTrails, (FName,  FName,  ETrailWidthMode,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "CreateNamedDynamicMaterialInstance", { ERASE_METHOD_PTR(UParticleSystemComponent, CreateNamedDynamicMaterialInstance, (FName,  class UMaterialInterface*), ERASE_ARGUMENT_PACK(  class UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "EndTrails", { ERASE_METHOD_PTR(UParticleSystemComponent, EndTrails, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GenerateParticleEvent", { ERASE_METHOD_PTR(UParticleSystemComponent, GenerateParticleEvent, (const FName,  const float, 
		const FVector,  const FVector,  const FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetBeamEndPoint", { ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamEndPoint, (int32,  FVector&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetBeamSourcePoint", { ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourcePoint, (int32,  int32,  FVector&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetBeamSourceStrength", { ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourceStrength, (int32,  int32,  float&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetBeamSourceTangent", { ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourceTangent, (int32,  int32,  FVector&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetBeamTargetPoint", { ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetPoint, (int32,  int32,  FVector&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetBeamTargetStrength", { ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetStrength, (int32,  int32,  float&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetBeamTargetTangent", { ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetTangent, (int32,  int32,  FVector&) const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetNamedMaterial", { ERASE_METHOD_PTR(UParticleSystemComponent, GetNamedMaterial, (FName) const, ERASE_ARGUMENT_PACK(  class UMaterialInterface* )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "GetNumActiveParticles", { ERASE_METHOD_PTR(UParticleSystemComponent, GetNumActiveParticles, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetBeamEndPoint", { ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamEndPoint, (int32,  FVector), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetBeamSourcePoint", { ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourcePoint, (int32,  FVector,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetBeamSourceStrength", { ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourceStrength, (int32,  float,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetBeamSourceTangent", { ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourceTangent, (int32,  FVector,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetBeamTargetPoint", { ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetPoint, (int32,  FVector,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetBeamTargetStrength", { ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetStrength, (int32,  float,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetBeamTargetTangent", { ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetTangent, (int32,  FVector,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetMaterialParameter", { ERASE_METHOD_PTR(UParticleSystemComponent, SetMaterialParameter, (FName,  class UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetTemplate", { ERASE_METHOD_PTR(UParticleSystemComponent, SetTemplate, (class UParticleSystem*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UParticleSystemComponent::StaticClass(), "SetTrailSourceData", { ERASE_METHOD_PTR(UParticleSystemComponent, SetTrailSourceData, (FName,  FName,  ETrailWidthMode,  float), ERASE_ARGUMENT_PACK( void )) } );
}
