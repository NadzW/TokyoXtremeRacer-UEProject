#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGkOPSAchievementClearStatus.h"
#include "EAchievementsPlatform.h"
#include "EGkBuildPlatformType.h"
#include "SAchievementsIdsForPlatform.h"
#include "SAchievementsInfo.h"
#include "BPFL_Achievement.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_Achievement : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Achievement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WriteAchievementsForPS5(const TArray<FSAchievementsIdsForPlatform> in_check_achievements, EAchievementsPlatform UseAchievementPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGkOPSAchievementClearStatus GetAchievementStatusCheckForPS5(const FString& AchievementID, const FSAchievementsInfo& AchievementInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAchievementsPlatform BuildPlatformToAchievementsPlatform(const EGkBuildPlatformType BuildPlatformType);
    
};

