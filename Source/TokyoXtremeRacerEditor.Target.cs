using UnrealBuildTool;

public class TokyoXtremeRacerEditorTarget : TargetRules {
	public TokyoXtremeRacerEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"TokyoXtremeRacer",
		});
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		CppStandard = CppStandardVersion.Cpp20;
	}
}
