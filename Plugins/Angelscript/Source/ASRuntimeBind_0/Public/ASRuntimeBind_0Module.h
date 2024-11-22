#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_0Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_TypedElementRegistry();
	static void Bind_TypedElementSelectionSet();
	static void Bind_GameMapsSettings();
	static void Bind_MeshDescriptionBase();
	static void Bind_StaticMeshDescription();
	static void Bind_ToolMenu();
	static void Bind_ToolMenus();
	static void Bind_InterchangeSourceData();
	static void Bind_InterchangeBaseNode();
	static void Bind_InterchangeBaseNodeContainer();
	static void Bind_InterchangeFactoryBaseNode();
	static void Bind_InterchangeSourceNode();
	static void Bind_MovieSceneCapture();
};
