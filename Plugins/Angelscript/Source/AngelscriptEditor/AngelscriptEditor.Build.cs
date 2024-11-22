using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class AngelscriptEditor : ModuleRules
	{
		public AngelscriptEditor(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"UnrealEd",
				"EditorSubsystem",
				"AngelscriptCode",
				"BlueprintGraph",
				"Kismet",
				"DirectoryWatcher",
				"Slate",
				"SlateCore",
				"AssetTools",
                "AngelscriptNativeBinds",
            });

			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"Projects",
				"GameplayTags",
				"Settings",
				"LevelEditor",
				"PropertyEditor",
				"ContentBrowser",
				"ContentBrowserData",
				"ToolMenus",
				"ToolWidgets",
                "GameProjectGeneration",
            });
		}
	}
}
