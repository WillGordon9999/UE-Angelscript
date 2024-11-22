#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ScrollBox.h"
void FASRuntimeBind_10Module::Bind_ScrollBox()
{
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "EndInertialScrolling", { ERASE_METHOD_PTR(UScrollBox, EndInertialScrolling, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "GetScrollOffset", { ERASE_METHOD_PTR(UScrollBox, GetScrollOffset, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "GetScrollOffsetOfEnd", { ERASE_METHOD_PTR(UScrollBox, GetScrollOffsetOfEnd, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "GetViewFraction", { ERASE_METHOD_PTR(UScrollBox, GetViewFraction, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "GetViewOffsetFraction", { ERASE_METHOD_PTR(UScrollBox, GetViewOffsetFraction, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "ScrollToEnd", { ERASE_METHOD_PTR(UScrollBox, ScrollToEnd, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "ScrollToStart", { ERASE_METHOD_PTR(UScrollBox, ScrollToStart, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "ScrollWidgetIntoView", { ERASE_METHOD_PTR(UScrollBox, ScrollWidgetIntoView, (UWidget*,  bool,  EDescendantScrollDestination,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetAllowOverscroll", { ERASE_METHOD_PTR(UScrollBox, SetAllowOverscroll, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetAlwaysShowScrollbar", { ERASE_METHOD_PTR(UScrollBox, SetAlwaysShowScrollbar, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetAnimateWheelScrolling", { ERASE_METHOD_PTR(UScrollBox, SetAnimateWheelScrolling, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetConsumeMouseWheel", { ERASE_METHOD_PTR(UScrollBox, SetConsumeMouseWheel, (EConsumeMouseWheel), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetNavigationDestination", { ERASE_METHOD_PTR(UScrollBox, SetNavigationDestination, (const EDescendantScrollDestination), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetOrientation", { ERASE_METHOD_PTR(UScrollBox, SetOrientation, (EOrientation), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetScrollbarPadding", { ERASE_METHOD_PTR(UScrollBox, SetScrollbarPadding, (const FMargin&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetScrollbarThickness", { ERASE_METHOD_PTR(UScrollBox, SetScrollbarThickness, (const FVector2D&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetScrollBarVisibility", { ERASE_METHOD_PTR(UScrollBox, SetScrollBarVisibility, (ESlateVisibility), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetScrollOffset", { ERASE_METHOD_PTR(UScrollBox, SetScrollOffset, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetScrollWhenFocusChanges", { ERASE_METHOD_PTR(UScrollBox, SetScrollWhenFocusChanges, (EScrollWhenFocusChanges), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UScrollBox::StaticClass(), "SetWheelScrollMultiplier", { ERASE_METHOD_PTR(UScrollBox, SetWheelScrollMultiplier, (float), ERASE_ARGUMENT_PACK( void )) } );
}
