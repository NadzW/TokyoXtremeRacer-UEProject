using UnrealBuildTool;

public class TokyoXtremeRacerGameTarget : TargetRules {
	public TokyoXtremeRacerGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"TokyoXtremeRacer",
		});
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		CppStandard = CppStandardVersion.Cpp20;
	}
}
