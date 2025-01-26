using UnrealBuildTool;

public class TokyoXtremeRacerEditorTarget : TargetRules {
	public TokyoXtremeRacerEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"TokyoXtremeRacer",
		});
		bOverrideBuildEnvironment = true;
	}
}
