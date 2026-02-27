#include "ReplayDetailInfo.h"

FReplayDetailInfo::FReplayDetailInfo() {
    this->Time = 0.00f;
    this->Area = ERunArea::ERA_None;
    this->MyDriverLevel = 0;
    this->BattleResult = ERaceBattleResult::None;
    this->IsLocked = false;
    this->IsNeedDelete = false;
    this->IsFavorite = false;
    this->ReplayVersion = 0;
    this->ReplayBGMDefault = EBGMType::SND_BGM_INVALID;
}

