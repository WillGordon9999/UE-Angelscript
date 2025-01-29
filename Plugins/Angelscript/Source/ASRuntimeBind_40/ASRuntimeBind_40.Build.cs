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
					"GLTFExporter",
					"DatasmithContent",
					"OnlineSubsystemUtils",
					"MRMesh",
					"FunctionalTesting",
					"ClothingSystemRuntimeNv",
					"AndroidFileServer",
					"BPTestPlugin",
					"EnhancedInput",
					"StructUtilsEngine",
				}
			);
		}
	}
}
