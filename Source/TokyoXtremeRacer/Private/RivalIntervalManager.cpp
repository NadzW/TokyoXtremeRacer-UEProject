#include "RivalIntervalManager.h"

URivalIntervalManager::URivalIntervalManager() {
    this->UpdateInterval = 0.10f;
    this->GroupMumMax = 5;
    this->TotalTime = 0.00f;
    this->IsDebugDisp = false;
    this->UpdateGroup = 0;
}

int32 URivalIntervalManager::Update(const double in_dt, double& out_dt) {
    return 0;
}

void URivalIntervalManager::Init(const double in_update_time, const int32 in_group_num_max, const bool in_debug_disp) {
}

TArray<int32> URivalIntervalManager::GetGroupRivalIds(const int32 in_group_id) {
    return TArray<int32>();
}

bool URivalIntervalManager::DeleteRival(const int32 in_rival_id) {
    return false;
}

int32 URivalIntervalManager::AddRival(const int32 in_rival_id) {
    return 0;
}


