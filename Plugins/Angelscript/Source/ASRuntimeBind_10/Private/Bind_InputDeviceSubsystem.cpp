#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/InputDeviceSubsystem.h"
void FASRuntimeBind_10Module::Bind_InputDeviceSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "ActivateDevicePropertyOfClass", { ERASE_METHOD_PTR(UInputDeviceSubsystem, ActivateDevicePropertyOfClass, (TSubclassOf<UInputDeviceProperty>,  const FActivateDevicePropertyParams&), ERASE_ARGUMENT_PACK( FInputDevicePropertyHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "GetActiveDeviceProperty", { ERASE_METHOD_PTR(UInputDeviceSubsystem, GetActiveDeviceProperty, (const FInputDevicePropertyHandle) const, ERASE_ARGUMENT_PACK( UInputDeviceProperty* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "GetInputDeviceHardwareIdentifier", { ERASE_METHOD_PTR(UInputDeviceSubsystem, GetInputDeviceHardwareIdentifier, (const FInputDeviceId) const, ERASE_ARGUMENT_PACK( FHardwareDeviceIdentifier )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "GetMostRecentlyUsedHardwareDevice", { ERASE_METHOD_PTR(UInputDeviceSubsystem, GetMostRecentlyUsedHardwareDevice, (const FPlatformUserId) const, ERASE_ARGUMENT_PACK( FHardwareDeviceIdentifier )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "IsPropertyActive", { ERASE_METHOD_PTR(UInputDeviceSubsystem, IsPropertyActive, (const FInputDevicePropertyHandle) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "RemoveAllDeviceProperties", { ERASE_METHOD_PTR(UInputDeviceSubsystem, RemoveAllDeviceProperties, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "RemoveDevicePropertyByHandle", { ERASE_METHOD_PTR(UInputDeviceSubsystem, RemoveDevicePropertyByHandle, (const FInputDevicePropertyHandle), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputDeviceSubsystem::StaticClass(), "RemoveDevicePropertyHandles", { ERASE_METHOD_PTR(UInputDeviceSubsystem, RemoveDevicePropertyHandles, (const TSet<FInputDevicePropertyHandle>&), ERASE_ARGUMENT_PACK( void )) } );
}
