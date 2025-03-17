#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Components/GameFrameworkComponentManager.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
void FASRuntimeBind_60Module::Bind_GameFrameworkComponentManager()
{
			FAngelscriptBinds::AddFunctionEntry(UGameFrameworkComponentManager::StaticClass(), "AddReceiver", { ERASE_METHOD_PTR(UGameFrameworkComponentManager, AddReceiver, (AActor*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameFrameworkComponentManager::StaticClass(), "RegisterAndCallForActorInitState", { ERASE_METHOD_PTR(UGameFrameworkComponentManager, RegisterAndCallForActorInitState, (AActor*,  FName,  FGameplayTag,  FActorInitStateChangedBPDelegate,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameFrameworkComponentManager::StaticClass(), "RegisterAndCallForClassInitState", { ERASE_METHOD_PTR(UGameFrameworkComponentManager, RegisterAndCallForClassInitState, (TSoftClassPtr<AActor>,  FName,  FGameplayTag,  FActorInitStateChangedBPDelegate,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameFrameworkComponentManager::StaticClass(), "RemoveReceiver", { ERASE_METHOD_PTR(UGameFrameworkComponentManager, RemoveReceiver, (AActor*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameFrameworkComponentManager::StaticClass(), "SendExtensionEvent", { ERASE_METHOD_PTR(UGameFrameworkComponentManager, SendExtensionEvent, (AActor*,  FName,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameFrameworkComponentManager::StaticClass(), "UnregisterActorInitStateDelegate", { ERASE_METHOD_PTR(UGameFrameworkComponentManager, UnregisterActorInitStateDelegate, (AActor*,  FActorInitStateChangedBPDelegate), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameFrameworkComponentManager::StaticClass(), "UnregisterClassInitStateDelegate", { ERASE_METHOD_PTR(UGameFrameworkComponentManager, UnregisterClassInitStateDelegate, (TSoftClassPtr<AActor>,  FActorInitStateChangedBPDelegate), ERASE_ARGUMENT_PACK(bool )) } );
}
