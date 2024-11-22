#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundOutputSubsystem.h"
void FASRuntimeBind_50Module::Bind_MetaSoundOutputSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundOutputSubsystem::StaticClass(), "WatchOutput", { ERASE_METHOD_PTR(UMetaSoundOutputSubsystem, WatchOutput, (
		UAudioComponent*, 
		FName, 
		const FOnMetasoundOutputValueChanged&, 
		FName, 
		FName), ERASE_ARGUMENT_PACK(bool )) } );
}
