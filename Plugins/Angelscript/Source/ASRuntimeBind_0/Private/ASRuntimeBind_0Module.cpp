#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_0Module, ASRuntimeBind_0);

void FASRuntimeBind_0Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_TypedElementRegistry();
			Bind_TypedElementSelectionSet();
			Bind_GameMapsSettings();
			Bind_MeshDescriptionBase();
			Bind_StaticMeshDescription();
			Bind_ToolMenu();
			Bind_ToolMenus();
			Bind_InterchangeSourceData();
			Bind_InterchangeBaseNode();
			Bind_InterchangeBaseNodeContainer();
			Bind_InterchangeFactoryBaseNode();
			Bind_InterchangeSourceNode();
			Bind_MovieSceneCapture();
		}
	);

}

void FASRuntimeBind_0Module::ShutdownModule()
{
}

