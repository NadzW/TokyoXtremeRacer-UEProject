#include "SRaceBattleResultInfo.h"

FSRaceBattleResultInfo::FSRaceBattleResultInfo() {
    this->BattleResult = ERaceBattleResult::None;
    this->Distance = 0.00f;
    this->Time = 0.00f;
    this->NumOfWallHit = 0;
    this->NumOfVehicleHit = 0;
    this->DayOfWeek = ERaceDayOfWeek::Sun;
    this->TeamID = 0;
    this->bUseBrake = false;
    this->IsContinuousBattle = false;
    this->IsContinuousLastBattle = false;
    this->bEnemyIsOther = false;
    this->bUseEvaluation = false;
}

