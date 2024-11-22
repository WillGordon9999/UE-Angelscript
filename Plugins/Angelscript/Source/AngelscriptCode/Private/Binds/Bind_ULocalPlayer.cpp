#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ULocalPlayer(FAngelscriptBinds::EOrder::Late, [] {
#if !WITH_ANGELSCRIPT_HAZE
	auto ULocalPlayer_ = FAngelscriptBinds::ExistingClass("ULocalPlayer");

	ULocalPlayer_.Method("UWorld GetWorld() const", METHOD_TRIVIAL(ULocalPlayer, GetWorld));
	ULocalPlayer_.Method("UGameInstance GetGameInstance() const", METHOD_TRIVIAL(ULocalPlayer, GetGameInstance));
	ULocalPlayer_.Method("int32 GetControllerId() const", METHOD_TRIVIAL(ULocalPlayer, GetControllerId));
#endif
});
