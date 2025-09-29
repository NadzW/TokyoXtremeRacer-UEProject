#include "PlayerRaceInfo.h"

UPlayerRaceInfo::UPlayerRaceInfo() {
    this->MaxWiningStreak = 0;
    this->NumOfWinsBonusStep = 0;
    this->PerfectBonusAddCoef = 0;
    this->RivalPrizeAddCoef = 0;
    this->WinningStreakBonusAddCoef = 0;
}

void UPlayerRaceInfo::Setup(const int32 max_wining_streak) {
}

bool UPlayerRaceInfo::GetTechniqueBonusCoef(const ESkillTarget in_taget, int32& out_value) {
    return false;
}

void UPlayerRaceInfo::AddTechniqueBonusCoef(const ESkillTarget in_target, const int32 in_value) {
}


