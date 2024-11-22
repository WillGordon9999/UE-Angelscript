#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"
#include "Engine/OverlapResult.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FOverlapResult(FAngelscriptBinds::EOrder::Late, []
{
	auto FOverlapResult_ = FAngelscriptBinds::ExistingClass("FOverlapResult");

	FOverlapResult_.Property("int ItemIndex", &FOverlapResult::ItemIndex);

	FOverlapResult_.Method("void SetComponent(UPrimitiveComponent InComp)", [](FOverlapResult* OverlapResult, UPrimitiveComponent* Comp)
	{
		OverlapResult->Component = Comp;
	});

	FOverlapResult_.Method("UPrimitiveComponent GetComponent() const", [](FOverlapResult* OverlapResult)->UPrimitiveComponent*
	{
		return OverlapResult->GetComponent();
	});

	FOverlapResult_.Method("void SetActor(AActor InActor)", [](FOverlapResult* OverlapResult, AActor* Actor)
	{
		OverlapResult->OverlapObjectHandle = FActorInstanceHandle(Actor);
	});

	FOverlapResult_.Method("AActor GetActor() const", [](FOverlapResult* OverlapResult)->AActor*
	{
		return OverlapResult->GetActor();
	});

	FOverlapResult_.Method("bool GetbBlockingHit() const", [](FOverlapResult* OverlapResult)->bool
	{
		return OverlapResult->bBlockingHit;
	});

	FOverlapResult_.Method("void SetBlockingHit(bool bIsBlocking)", [](FOverlapResult* OverlapResult, bool bIsBlocking)
	{
		OverlapResult->bBlockingHit = bIsBlocking;
	});
});