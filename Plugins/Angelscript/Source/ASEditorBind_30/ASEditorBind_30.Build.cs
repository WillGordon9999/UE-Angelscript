using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASEditorBind_30 : ModuleRules
	{
		public ASEditorBind_30(ReadOnlyTargetRules Target) : base(Target)
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
					"EditorScriptingUtilities",
					"SequencerScriptingEditor",
					"LevelSequenceEditor",
					"ControlRigEditor",
					"IKRigEditor",
				}
			);
		}
	}
}