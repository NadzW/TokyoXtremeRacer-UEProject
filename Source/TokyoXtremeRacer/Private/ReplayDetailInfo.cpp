#include "ReplayDetailInfo.h"

FReplayDetailInfo::FReplayDetailInfo() {
    this->Time = 0.00f;
    this->Area = ERunArea::ERA_None;
    this->IsLocked = false;
    this->IsNeedDelete = false;
}

