#include "BPFL_Achievement.h"

UBPFL_Achievement::UBPFL_Achievement() {
}

EAchievementsPlatform UBPFL_Achievement::BuildPlatformToAchievementsPlatform(const EGkBuildPlatformType BuildPlatformType) {
    return EAchievementsPlatform::Steam;
}


