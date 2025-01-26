using UnrealBuildTool;

public class TokyoXtremeRacerGameTarget : TargetRules {
	public TokyoXtremeRacerGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"TokyoXtremeRacer",
		});
		bOverrideBuildEnvironment = true;
	}
}
