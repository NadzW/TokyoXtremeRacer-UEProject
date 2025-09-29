using UnrealBuildTool;

public class StreamlineDeepDVCBlueprint : ModuleRules {
    public StreamlineDeepDVCBlueprint(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        CppCompileWarningSettings.ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "StreamlineBlueprint",
        });
    }
}
