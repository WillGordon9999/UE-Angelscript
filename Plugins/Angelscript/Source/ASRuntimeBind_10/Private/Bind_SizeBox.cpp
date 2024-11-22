#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SizeBox.h"
void FASRuntimeBind_10Module::Bind_SizeBox()
{
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearHeightOverride", { ERASE_METHOD_PTR(USizeBox, ClearHeightOverride, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearMaxAspectRatio", { ERASE_METHOD_PTR(USizeBox, ClearMaxAspectRatio, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearMaxDesiredHeight", { ERASE_METHOD_PTR(USizeBox, ClearMaxDesiredHeight, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearMaxDesiredWidth", { ERASE_METHOD_PTR(USizeBox, ClearMaxDesiredWidth, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearMinAspectRatio", { ERASE_METHOD_PTR(USizeBox, ClearMinAspectRatio, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearMinDesiredHeight", { ERASE_METHOD_PTR(USizeBox, ClearMinDesiredHeight, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearMinDesiredWidth", { ERASE_METHOD_PTR(USizeBox, ClearMinDesiredWidth, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "ClearWidthOverride", { ERASE_METHOD_PTR(USizeBox, ClearWidthOverride, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetHeightOverride", { ERASE_METHOD_PTR(USizeBox, SetHeightOverride, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetMaxAspectRatio", { ERASE_METHOD_PTR(USizeBox, SetMaxAspectRatio, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetMaxDesiredHeight", { ERASE_METHOD_PTR(USizeBox, SetMaxDesiredHeight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetMaxDesiredWidth", { ERASE_METHOD_PTR(USizeBox, SetMaxDesiredWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetMinAspectRatio", { ERASE_METHOD_PTR(USizeBox, SetMinAspectRatio, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetMinDesiredHeight", { ERASE_METHOD_PTR(USizeBox, SetMinDesiredHeight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetMinDesiredWidth", { ERASE_METHOD_PTR(USizeBox, SetMinDesiredWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USizeBox::StaticClass(), "SetWidthOverride", { ERASE_METHOD_PTR(USizeBox, SetWidthOverride, (float), ERASE_ARGUMENT_PACK( void )) } );
}
