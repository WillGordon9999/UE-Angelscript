#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FHitResult(FAngelscriptBinds::EOrder::Late, []
{
	auto FHitResult_ = FAngelscriptBinds::ExistingClass("FHitResult");

	FHitResult_.Constructor("void f(AActor InActor, UPrimitiveComponent InComponent, const FVector& HitLoc, const FVector& HitNorm)", [](FHitResult* Address, class AActor* InActor, class UPrimitiveComponent* InComponent, FVector const& HitLoc, FVector const& HitNorm)
	{
		new(Address) FHitResult(InActor, InComponent, HitLoc, HitNorm);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FHitResult_, "FHitResult");

	FHitResult_.Constructor("void f(const FVector& TraceStart, const FVector& TraceEnd)", [](FHitResult* Address, FVector const& TraceStart, FVector const& TraceEnd)
	{
		new(Address) FHitResult(TraceStart, TraceEnd);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FHitResult_, "FHitResult");

	FHitResult_.Property("int FaceIndex", &FHitResult::FaceIndex);

	FHitResult_.Property("float32 PenetrationDepth", &FHitResult::PenetrationDepth);
	FHitResult_.Property("float32 Distance", &FHitResult::Distance);
	FHitResult_.Property("float32 Time", &FHitResult::Time);

	FHitResult_.Property("FVector TraceStart", &FHitResult::TraceStart);
	FHitResult_.Property("FVector TraceEnd", &FHitResult::TraceEnd);
	FHitResult_.Property("FVector ImpactNormal", &FHitResult::ImpactNormal);
	FHitResult_.Property("FVector ImpactPoint", &FHitResult::ImpactPoint);
	FHitResult_.Property("FVector Location", &FHitResult::Location);
	FHitResult_.Property("FVector Normal", &FHitResult::Normal);
	FHitResult_.Property("FName BoneName", &FHitResult::BoneName);
});