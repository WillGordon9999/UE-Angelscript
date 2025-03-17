using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_20 : ModuleRules
	{
		public ASRuntimeBind_20(ReadOnlyTargetRules Target) : base(Target)
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
					"NavigationSystem",
					"CinematicCamera",
					"Constraints",
					"SlateRHIRenderer",
					"InterchangeEngine",
					"AssetTools",
					"AnimGraphRuntime",
					"MovieSceneTracks",
					"MovieScene",
					"TimeManagement",
					"CoreUObject",
					"Engine",
					"SlateCore",
					"InterchangeCore",
				}
			);
		}
	}
}
