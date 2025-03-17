using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASEditorBind_10 : ModuleRules
	{
		public ASEditorBind_10(ReadOnlyTargetRules Target) : base(Target)
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
					"AngelscriptEditor",
				}
			);

			PrivateDependencyModuleNames.AddRange
			(
				new string[]
				{
					"DataLayerEditor",
					"SubobjectDataInterface",
					"SubobjectEditor",
					"BlueprintEditorLibrary",
					"ContentBrowserData",
					"Kismet",
					"AnimGraph",
					"AnimationBlueprintLibrary",
					"UnrealEd",
					"Persona",
					"Engine",
					"CoreUObject",
					"AnimGraphRuntime",
					"AssetTools",
				}
			);
		}
	}
}
