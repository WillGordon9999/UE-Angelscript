#include "ASRuntimeBind_110Module.h"
#include "AngelscriptBinds.h"
#include "ClassGenerator/ASClass.h"
void FASRuntimeBind_110Module::Bind_ASClass()
{
			FAngelscriptBinds::AddFunctionEntry(UASClass::StaticClass(), "GetRelativeSourceFilePath", { ERASE_METHOD_PTR(UASClass, GetRelativeSourceFilePath, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UASClass::StaticClass(), "GetSourceFilePath", { ERASE_METHOD_PTR(UASClass, GetSourceFilePath, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UASClass::StaticClass(), "IsDeveloperOnly", { ERASE_METHOD_PTR(UASClass, IsDeveloperOnly, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
