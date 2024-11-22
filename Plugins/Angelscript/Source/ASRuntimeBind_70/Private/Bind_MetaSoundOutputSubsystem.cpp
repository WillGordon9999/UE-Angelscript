#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundOutputSubsystem.h"
void FASRuntimeBind_70Module::Bind_MetaSoundOutputSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundOutputSubsystem::StaticClass(), "WatchOutput", { ERASE_METHOD_PTR(UMetaSoundOutputSubsystem, WatchOutput, (
		UAudioComponent*, 
		FName, 
		const FOnMetasoundOutputValueChanged&, 
		FName, 
		FName), ERASE_ARGUMENT_PACK(bool )) } );
}
