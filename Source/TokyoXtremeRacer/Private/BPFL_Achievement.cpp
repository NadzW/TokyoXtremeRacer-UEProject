#include "BPFL_Achievement.h"

UBPFL_Achievement::UBPFL_Achievement() {
}

bool UBPFL_Achievement::WriteAchievementsForPS5(const TArray<FSAchievementsIdsForPlatform> in_check_achievements, EAchievementsPlatform UseAchievementPlatform) {
    return false;
}

EGkOPSAchievementClearStatus UBPFL_Achievement::GetAchievementStatusCheckForPS5(const FString& AchievementID, const FSAchievementsInfo& AchievementInfo) {
    return EGkOPSAchievementClearStatus::EGKOPSACS_Locked;
}

EAchievementsPlatform UBPFL_Achievement::BuildPlatformToAchievementsPlatform(const EGkBuildPlatformType BuildPlatformType) {
    return EAchievementsPlatform::Steam;
}


