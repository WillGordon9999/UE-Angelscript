#include "EnhancedInputComponent.h"

#include "AngelscriptBinds.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UEnhancedInputComponent(FAngelscriptBinds::EOrder::Late, []
{
	auto UEnhancedInputComponent_ = FAngelscriptBinds::ExistingClass("UEnhancedInputComponent");

	UEnhancedInputComponent_.Method("void SetShouldFireDelegatesInEditor(const bool bInNewValue)", METHODPR_TRIVIAL(void, UEnhancedInputComponent, SetShouldFireDelegatesInEditor, (const bool)));
	UEnhancedInputComponent_.Method("bool ShouldFireDelegatesInEditor() const", METHOD_TRIVIAL(UEnhancedInputComponent, ShouldFireDelegatesInEditor));

	UEnhancedInputComponent_.Method("bool HasBindings() const", METHOD_TRIVIAL(UEnhancedInputComponent, HasBindings));

	UEnhancedInputComponent_.Method("void ClearActionEventBindings() const", METHOD_TRIVIAL(UEnhancedInputComponent, ClearActionEventBindings));
	UEnhancedInputComponent_.Method("void ClearActionValueBindings() const", METHOD_TRIVIAL(UEnhancedInputComponent, ClearActionValueBindings));
	UEnhancedInputComponent_.Method("void ClearDebugKeyBindings() const", METHOD_TRIVIAL(UEnhancedInputComponent, ClearDebugKeyBindings));
	UEnhancedInputComponent_.Method("void ClearActionBindings() const", METHOD_TRIVIAL(UEnhancedInputComponent, ClearActionBindings));
	UEnhancedInputComponent_.Method("void ClearBindingsForObject(UObject InOwner)", METHODPR_TRIVIAL(void, UEnhancedInputComponent, ClearBindingsForObject, (UObject*)));

	UEnhancedInputComponent_.Method("bool RemoveActionEventBinding(const int32 BindingIndex)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveActionEventBinding, (const int32)));
	UEnhancedInputComponent_.Method("bool RemoveDebugKeyBinding(const int32 BindingIndex)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveDebugKeyBinding, (const int32)));
	UEnhancedInputComponent_.Method("bool RemoveActionValueBinding(const int32 BindingIndex)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveActionValueBinding, (const int32)));
	
	UEnhancedInputComponent_.Method("bool RemoveBindingByHandle(const uint32 BindingIndex)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveBindingByHandle, (const uint32)));

	UEnhancedInputComponent_.Method("bool RemoveBinding(const FInputBindingHandle& BindingToRemove)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveBinding, (const FInputBindingHandle&)));
	UEnhancedInputComponent_.Method("bool RemoveBinding(const FEnhancedInputActionEventBinding& BindingToRemove)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveBinding, (const FInputBindingHandle&)));
	UEnhancedInputComponent_.Method("bool RemoveBinding(const FEnhancedInputActionValueBinding& BindingToRemove)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveBinding, (const FInputBindingHandle&)));
	UEnhancedInputComponent_.Method("bool RemoveBinding(const FInputDebugKeyBinding& BindingToRemove)", METHODPR_TRIVIAL(bool, UEnhancedInputComponent, RemoveBinding, (const FInputBindingHandle&)));

	UEnhancedInputComponent_.Method(
		"FEnhancedInputActionEventBinding& BindAction(const UInputAction Action, ETriggerEvent TriggerEvent, FEnhancedInputActionHandlerDynamicSignature Delegate)",
		[](UEnhancedInputComponent& InputComponent, const UInputAction* Action, ETriggerEvent TriggerEvent, FEnhancedInputActionHandlerDynamicSignature Delegate) -> FEnhancedInputActionEventBinding&
		{
			return InputComponent.BindAction(Action, TriggerEvent, Delegate.GetUObject(), Delegate.GetFunctionName());
		});
	UEnhancedInputComponent_.Method("FEnhancedInputActionValueBinding& BindActionValue(const UInputAction Action)", METHODPR_TRIVIAL(FEnhancedInputActionValueBinding&, UEnhancedInputComponent, BindActionValue, (const UInputAction*)));

	UEnhancedInputComponent_.Method(
		"FInputDebugKeyBinding& BindDebugKey(const FInputChord Chord, const EInputEvent KeyEvent, FInputDebugKeyHandlerDynamicSignature Delegate, bool bExecuteWhenPaused = true)",
		[](UEnhancedInputComponent& InputComponent, const FInputChord Chord, const EInputEvent KeyEvent, FInputDebugKeyHandlerDynamicSignature Delegate, bool bExecuteWhenPaused) -> FInputDebugKeyBinding&
		{
			return InputComponent.BindDebugKey(Chord, KeyEvent, Delegate.GetUObject(), Delegate.GetFunctionName(), bExecuteWhenPaused);
		});
	UEnhancedInputComponent_.Method("FInputActionValue GetBoundActionValue(const UInputAction Action)", METHODPR_TRIVIAL(FInputActionValue, UEnhancedInputComponent, GetBoundActionValue, (const UInputAction*)));
});
