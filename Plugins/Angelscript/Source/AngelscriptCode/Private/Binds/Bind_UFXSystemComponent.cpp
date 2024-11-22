#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Particles/ParticleSystemComponent.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UFXSystemComponent(FAngelscriptBinds::EOrder::Late, [] {
	auto FXSystemComponent = FAngelscriptBinds::ExistingClass("UFXSystemComponent");

	FXSystemComponent.Method("void DeactivateImmediate()", METHODPR_TRIVIAL(void, UFXSystemComponent, DeactivateImmediate, ()));
	});
