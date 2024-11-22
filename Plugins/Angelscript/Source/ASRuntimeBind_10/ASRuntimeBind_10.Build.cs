using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_10 : ModuleRules
	{
		public ASRuntimeBind_10(ReadOnlyTargetRules Target) : base(Target)
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
					"Engine",
					"UMG",
					"HeadMountedDisplay",
					"GameplayTasks",
					"GameplayTags",
					"AIModule",
					"DataflowEngine",
					"ChaosSolverEngine",
					"FieldSystemEngine",
					"GeometryCollectionEngine",
				}
			);
		}
	}
}
