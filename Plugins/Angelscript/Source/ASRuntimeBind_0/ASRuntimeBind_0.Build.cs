using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_0 : ModuleRules
	{
		public ASRuntimeBind_0(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange
			(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"AngelscriptCode",
				}
			);

			PrivateDependencyModuleNames.AddRange
			(
				new string[]
				{
					"TypedElementFramework",
					"TypedElementRuntime",
					"ImageCore",
					"AssetRegistry",
					"EngineSettings",
					"MeshDescription",
					"StaticMeshDescription",
					"ToolMenus",
					"InterchangeCore",
					"MovieSceneCapture",
				}
			);
		}
	}
}
