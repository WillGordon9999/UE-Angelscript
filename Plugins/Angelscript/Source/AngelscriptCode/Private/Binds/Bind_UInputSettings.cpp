#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "GameFramework/InputSettings.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UInputSettings(FAngelscriptBinds::EOrder::Late, [] {
	auto UInputSettings_ = FAngelscriptBinds::ExistingClass("UInputSettings");

	UInputSettings_.Method("FName GetUniqueActionName(const FName BaseActionMappingName)", METHODPR_TRIVIAL(FName, UInputSettings, GetUniqueActionName, (const FName)));
	UInputSettings_.Method("FName GetUniqueAxisName(const FName BaseAxisMappingName)", METHODPR_TRIVIAL(FName, UInputSettings, GetUniqueAxisName, (const FName)));

	UInputSettings_.Method("const TArray<FInputActionKeyMapping>& GetActionMappings() const", METHODPR_TRIVIAL(const TArray<FInputActionKeyMapping>&, UInputSettings, GetActionMappings, ()));
	UInputSettings_.Method("const TArray<FInputAxisKeyMapping>& GetAxisMappings() const", METHODPR_TRIVIAL(const TArray<FInputAxisKeyMapping>&, UInputSettings, GetAxisMappings, ()));
	UInputSettings_.Method("const TArray<FInputActionSpeechMapping>& GetSpeechMappings() const", METHODPR_TRIVIAL(const TArray<FInputActionSpeechMapping>&, UInputSettings, GetSpeechMappings, ()));

	UInputSettings_.Method("bool DoesActionExist(const FName InActionName)", METHODPR_TRIVIAL(bool, UInputSettings, DoesActionExist, (const FName)));
	UInputSettings_.Method("bool DoesAxisExist(const FName InAxisName)", METHODPR_TRIVIAL(bool, UInputSettings, DoesAxisExist, (const FName)));
	UInputSettings_.Method("bool DoesSpeechExist(const FName InSpeechName)", METHODPR_TRIVIAL(bool, UInputSettings, DoesSpeechExist, (const FName)));
});
