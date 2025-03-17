using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_40 : ModuleRules
	{
		public ASRuntimeBind_40(ReadOnlyTargetRules Target) : base(Target)
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
					"VariantManagerContent",
					"GLTFExporter",
					"DatasmithContent",
					"MRMesh",
					"FunctionalTesting",
					"ClothingSystemRuntimeNv",
					"AndroidFileServer",
					"EnhancedInput",
					"AnimationLocomotionLibraryRuntime",
					"StructUtilsEngine",
					"Engine",
					"CoreUObject",
					"LevelSequence",
					"InputCore",
					"GameplayTags",
				}
			);
		}
	}
}
