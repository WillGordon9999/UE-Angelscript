#include "GameFramework/ProjectileMovementComponent.h"

#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"


AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UProjectileMovementComponent([]
{
	FAngelscriptBinds Binds = FAngelscriptBinds::ExistingClass("UProjectileMovementComponent");

	if (Binds.GetTypeInfo() == nullptr)
		return;

	Binds.Method("const USceneComponent GetHomingTargetComponent() const",
	[](const UProjectileMovementComponent* Component) -> const USceneComponent*
	{
		return Component->HomingTargetComponent.Get();
	});
	Binds.Method("void SetHomingTargetComponent(USceneComponent HomingTargetComponent)",
	[](UProjectileMovementComponent* Component, USceneComponent* HomingTargetComponent) -> void
	{
		Component->HomingTargetComponent = HomingTargetComponent;
	});
});