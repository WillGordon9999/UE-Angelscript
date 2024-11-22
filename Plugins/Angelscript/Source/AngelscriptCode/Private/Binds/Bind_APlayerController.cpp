#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_APlayerController(FAngelscriptBinds::EOrder::Late, [] {
#if !WITH_ANGELSCRIPT_HAZE
	auto APlayerController_ = FAngelscriptBinds::ExistingClass("APlayerController");

	APlayerController_.Method("void SetPlayer(UPlayer InPlayer)", METHOD_TRIVIAL(APlayerController, SetPlayer));
	APlayerController_.Method("ULocalPlayer GetLocalPlayer() const", METHOD_TRIVIAL(APlayerController, GetLocalPlayer));
#endif
});
