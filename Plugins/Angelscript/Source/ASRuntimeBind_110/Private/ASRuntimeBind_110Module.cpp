#include "ASRuntimeBind_110Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_110Module, ASRuntimeBind_110);

void FASRuntimeBind_110Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
		}
	);

}

void FASRuntimeBind_110Module::ShutdownModule()
{
}

