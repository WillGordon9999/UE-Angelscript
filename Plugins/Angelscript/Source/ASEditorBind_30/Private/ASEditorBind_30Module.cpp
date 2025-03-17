#include "ASEditorBind_30Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASEditorBind_30Module, ASEditorBind_30);

void FASEditorBind_30Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_SkeletalMeshEditorSubsystem();
			Bind_StaticMeshEditorSubsystem();
			Bind_LevelSequenceEditorSubsystem();
			Bind_IKRetargeterController();
			Bind_IKRigController();
		}
	);

}

void FASEditorBind_30Module::ShutdownModule()
{
}

