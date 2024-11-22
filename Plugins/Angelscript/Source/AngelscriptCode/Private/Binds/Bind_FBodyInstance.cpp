#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FBodyInstance(FAngelscriptBinds::EOrder::Late, []
{
	auto FBodyInstance_ = FAngelscriptBinds::ExistingClass("FBodyInstance");

	FBodyInstance_.Method("UBodySetup GetBodySetup() const", METHOD_TRIVIAL(FBodyInstance, GetBodySetup));
	FBodyInstance_.Method("bool Weld(FBodyInstance& TheirBody, const FTransform& TheirTM)", METHOD_TRIVIAL(FBodyInstance, Weld));
	FBodyInstance_.Method("void UnWeld(FBodyInstance& TheirBI)", METHOD_TRIVIAL(FBodyInstance, UnWeld));
	FBodyInstance_.Method("void SetUseCCD(bool bInUseCCD)", METHOD_TRIVIAL(FBodyInstance, SetUseCCD));
});
