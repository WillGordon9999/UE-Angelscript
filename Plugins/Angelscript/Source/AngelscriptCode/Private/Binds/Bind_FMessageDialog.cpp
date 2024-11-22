#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"
#include "Misc/MessageDialog.h"

#include "GenericPlatform/GenericPlatformMisc.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FMessageDialog((int32)FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ns("FMessageDialog");
	FAngelscriptBinds::BindGlobalFunction("EAppReturnType Open(EAppMsgType MessageType, const FText& Message, FText OptionalTitle = FText())", 
		[](EAppMsgType::Type MessageType, const FText& Message, FText OptionalTitle) -> EAppReturnType::Type
		{
			return FMessageDialog::Open(MessageType, Message, OptionalTitle);
		});

	FAngelscriptBinds::BindGlobalFunction("EAppReturnType Open(EAppMsgCategory MessageCategory, EAppMsgType MessageType, const FText& Message, FText OptionalTitle = FText())", 
	[](EAppMsgCategory MessageCategory, EAppMsgType::Type MessageType, const FText& Message, FText OptionalTitle) -> EAppReturnType::Type
		{
			return FMessageDialog::Open(MessageCategory, MessageType, Message, OptionalTitle);
		});
});
