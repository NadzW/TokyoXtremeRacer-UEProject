using UnrealBuildTool;

public class DLSSMoviePipelineSupport : ModuleRules {
    public DLSSMoviePipelineSupport(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        CppCompileWarningSettings.ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieRenderPipelineCore",
        });
    }
}
