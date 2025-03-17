#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraComponent.h"
#include "NiagaraCommon.h"
#include "NiagaraSystem.h"
#include "NiagaraDataInterface.h"
#include "UObject/NoExportTypes.h"
#include "NiagaraSimCache.h"
#include "NiagaraTickBehaviorEnum.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInterface.h"
#include "Engine/StaticMesh.h"
#include "Engine/Texture.h"
#include "Engine/TextureRenderTarget.h"
void FASRuntimeBind_50Module::Bind_NiagaraComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "AdvanceSimulation", { ERASE_METHOD_PTR(UNiagaraComponent, AdvanceSimulation, (int32,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "AdvanceSimulationByTime", { ERASE_METHOD_PTR(UNiagaraComponent, AdvanceSimulationByTime, (float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "ClearEmitterFixedBounds", { ERASE_METHOD_PTR(UNiagaraComponent, ClearEmitterFixedBounds, (FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "ClearSimCache", { ERASE_METHOD_PTR(UNiagaraComponent, ClearSimCache, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "ClearSystemFixedBounds", { ERASE_METHOD_PTR(UNiagaraComponent, ClearSystemFixedBounds, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetAgeUpdateMode", { ERASE_METHOD_PTR(UNiagaraComponent, GetAgeUpdateMode, () const, ERASE_ARGUMENT_PACK( ENiagaraAgeUpdateMode )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetAsset", { ERASE_METHOD_PTR(UNiagaraComponent, GetAsset, () const, ERASE_ARGUMENT_PACK( UNiagaraSystem* )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetCustomTimeDilation", { ERASE_METHOD_PTR(UNiagaraComponent, GetCustomTimeDilation, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetDesiredAge", { ERASE_METHOD_PTR(UNiagaraComponent, GetDesiredAge, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetEmitterFixedBounds", { ERASE_METHOD_PTR(UNiagaraComponent, GetEmitterFixedBounds, (FName) const, ERASE_ARGUMENT_PACK( FBox )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetForceSolo", { ERASE_METHOD_PTR(UNiagaraComponent, GetForceSolo, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetLockDesiredAgeDeltaTimeToSeekDelta", { ERASE_METHOD_PTR(UNiagaraComponent, GetLockDesiredAgeDeltaTimeToSeekDelta, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetMaxSimTime", { ERASE_METHOD_PTR(UNiagaraComponent, GetMaxSimTime, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetOcclusionQueryMode", { ERASE_METHOD_PTR(UNiagaraComponent, GetOcclusionQueryMode, () const, ERASE_ARGUMENT_PACK( ENiagaraOcclusionQueryMode )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetPreviewLODDistance", { ERASE_METHOD_PTR(UNiagaraComponent, GetPreviewLODDistance, () const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetPreviewLODDistanceEnabled", { ERASE_METHOD_PTR(UNiagaraComponent, GetPreviewLODDistanceEnabled, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetRandomSeedOffset", { ERASE_METHOD_PTR(UNiagaraComponent, GetRandomSeedOffset, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetSeekDelta", { ERASE_METHOD_PTR(UNiagaraComponent, GetSeekDelta, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetSimCache", { ERASE_METHOD_PTR(UNiagaraComponent, GetSimCache, () const, ERASE_ARGUMENT_PACK( UNiagaraSimCache* )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetSystemFixedBounds", { ERASE_METHOD_PTR(UNiagaraComponent, GetSystemFixedBounds, () const, ERASE_ARGUMENT_PACK( FBox )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "GetTickBehavior", { ERASE_METHOD_PTR(UNiagaraComponent, GetTickBehavior, () const, ERASE_ARGUMENT_PACK(ENiagaraTickBehavior )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "InitForPerformanceBaseline", { ERASE_METHOD_PTR(UNiagaraComponent, InitForPerformanceBaseline, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "IsPaused", { ERASE_METHOD_PTR(UNiagaraComponent, IsPaused, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "ReinitializeSystem", { ERASE_METHOD_PTR(UNiagaraComponent, ReinitializeSystem, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "ResetSystem", { ERASE_METHOD_PTR(UNiagaraComponent, ResetSystem, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SeekToDesiredAge", { ERASE_METHOD_PTR(UNiagaraComponent, SeekToDesiredAge, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetAgeUpdateMode", { ERASE_METHOD_PTR(UNiagaraComponent, SetAgeUpdateMode, (ENiagaraAgeUpdateMode), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetAsset", { ERASE_METHOD_PTR(UNiagaraComponent, SetAsset, (UNiagaraSystem*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetAutoDestroy", { ERASE_METHOD_PTR(UNiagaraComponent, SetAutoDestroy, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetCanRenderWhileSeeking", { ERASE_METHOD_PTR(UNiagaraComponent, SetCanRenderWhileSeeking, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetCustomTimeDilation", { ERASE_METHOD_PTR(UNiagaraComponent, SetCustomTimeDilation, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetDesiredAge", { ERASE_METHOD_PTR(UNiagaraComponent, SetDesiredAge, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetEmitterFixedBounds", { ERASE_METHOD_PTR(UNiagaraComponent, SetEmitterFixedBounds, (FName,  FBox), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetForceSolo", { ERASE_METHOD_PTR(UNiagaraComponent, SetForceSolo, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetGpuComputeDebug", { ERASE_METHOD_PTR(UNiagaraComponent, SetGpuComputeDebug, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetLockDesiredAgeDeltaTimeToSeekDelta", { ERASE_METHOD_PTR(UNiagaraComponent, SetLockDesiredAgeDeltaTimeToSeekDelta, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetMaxSimTime", { ERASE_METHOD_PTR(UNiagaraComponent, SetMaxSimTime, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetOcclusionQueryMode", { ERASE_METHOD_PTR(UNiagaraComponent, SetOcclusionQueryMode, (ENiagaraOcclusionQueryMode), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetPaused", { ERASE_METHOD_PTR(UNiagaraComponent, SetPaused, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetPreviewLODDistance", { ERASE_METHOD_PTR(UNiagaraComponent, SetPreviewLODDistance, (bool,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetRandomSeedOffset", { ERASE_METHOD_PTR(UNiagaraComponent, SetRandomSeedOffset, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetRenderingEnabled", { ERASE_METHOD_PTR(UNiagaraComponent, SetRenderingEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetSeekDelta", { ERASE_METHOD_PTR(UNiagaraComponent, SetSeekDelta, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetSimCache", { ERASE_METHOD_PTR(UNiagaraComponent, SetSimCache, (UNiagaraSimCache*,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetSystemFixedBounds", { ERASE_METHOD_PTR(UNiagaraComponent, SetSystemFixedBounds, (FBox), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetTickBehavior", { ERASE_METHOD_PTR(UNiagaraComponent, SetTickBehavior, (ENiagaraTickBehavior), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableActor", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableActor, (FName,  AActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableBool", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableBool, (FName,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableFloat", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableFloat, (FName,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableInt", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableInt, (FName,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableLinearColor", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableLinearColor, (FName,  const FLinearColor&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableMaterial", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableMaterial, (FName,  UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableMatrix", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableMatrix, (FName,  const FMatrix&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableObject", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableObject, (FName,  UObject*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariablePosition", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariablePosition, (FName,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableQuat", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableQuat, (FName,  const FQuat&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableStaticMesh", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableStaticMesh, (FName,  UStaticMesh*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableTexture", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableTexture, (FName,  class UTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableTextureRenderTarget", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableTextureRenderTarget, (FName,  class UTextureRenderTarget*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableVec2", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableVec2, (FName,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableVec3", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableVec3, (FName,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraComponent::StaticClass(), "SetVariableVec4", { ERASE_METHOD_PTR(UNiagaraComponent, SetVariableVec4, (FName,  const FVector4&), ERASE_ARGUMENT_PACK( void )) } );
}
