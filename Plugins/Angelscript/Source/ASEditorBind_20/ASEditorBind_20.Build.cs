using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASEditorBind_20 : ModuleRules
	{
		public ASEditorBind_20(ReadOnlyTargetRules Target) : base(Target)
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
					"UMGEditor",
					"ScriptableEditorWidgets",
					"InputEditor",
					"RigVMEditor",
					"NiagaraEditor",
					"Blutility",
					"DataValidation",
					"MetasoundEditor",
					"SkeletalMeshEditor",
					"StaticMeshEditor",
				}
			);
		}
	}
}
