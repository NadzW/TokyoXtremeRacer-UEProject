#include "RivalRaceInfo.h"

URivalRaceInfo::URivalRaceInfo() {
    this->RivalInfo = NULL;
    this->NumOfWin = 0;
    this->NumOfLose = 0;
    this->NumOfDraw = 0;
    this->NumOfBattle = 0;
    this->bRivalForcedAdd = false;
    this->bReplayedCutin = false;
    this->bScheduledCutin = false;
    this->bLockGameVehicle = false;
    this->ThisTimeNumOfWin = 0;
    this->ThisTimeNumOfLose = 0;
    this->ThisTimeNumOfDraw = 0;
    this->ThisTimeNumOfBattle = 0;
    this->DistanceSq = 0.00f;
}

void URivalRaceInfo::SetIsLockGameVehicle(const bool is_lock) {
}

void URivalRaceInfo::SetBattleResultNum(const int32 num_of_win, const int32 num_of_lose, const int32 num_of_draw) {
}

void URivalRaceInfo::SetBattleResult(const ERaceBattleResult Result) {
}

bool URivalRaceInfo::GetIsLockGameVehicle() {
    return false;
}

FName URivalRaceInfo::GetId() {
    return NAME_None;
}

ERunArea URivalRaceInfo::GetArea() {
    return ERunArea::ERA_None;
}


