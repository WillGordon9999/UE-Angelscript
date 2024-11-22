using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class AngelscriptNativeBindsEditor : ModuleRules
	{
		public AngelscriptNativeBindsEditor(ReadOnlyTargetRules Target) : base(Target)
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
				}
			);
			
			if (Target.bBuildEditor)
			{
				PublicDependencyModuleNames.AddRange
				(
					new string[] 
					{
						"UnrealEd",
						"EditorSubsystem",
					}
				);
	
				PrivateDependencyModuleNames.AddRange
				(
					new string[]
					{
						"UMGEditor",
					}
				);
			}
		}
	}
}