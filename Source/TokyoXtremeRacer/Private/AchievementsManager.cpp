#include "AchievementsManager.h"

UAchievementsManager::UAchievementsManager() {
    this->IsValid = false;
    this->DataTable = NULL;
}

void UAchievementsManager::Setup(UDataTable* data_table, const TMap<EVehicleTuneKind, EVehicleTuneLevel> in_max_tune_levels, const UDataTable* rival_data_table) {
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckSpeedTrap(const FName in_speed_trap_name, const double in_current_speed) {
    return TArray<FSAchievementsIdsForPlatform>();
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckSpeed(const EAchievementsKind in_check_type, const double in_current_speed) {
    return TArray<FSAchievementsIdsForPlatform>();
}

bool UAchievementsManager::CheckOne(const FSUserInfo& in_user_info, const EAchievementsKind in_kind) const {
    return false;
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckInput(const EAchievementsKind in_check_kinds, const int32 in_value) {
    return TArray<FSAchievementsIdsForPlatform>();
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckEvents(const TArray<FName> in_event_ids) {
    return TArray<FSAchievementsIdsForPlatform>();
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckEvent(const FName in_event_id) {
    return TArray<FSAchievementsIdsForPlatform>();
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckDistance(const EAchievementsKind in_check_type, const double in_distance) {
    return TArray<FSAchievementsIdsForPlatform>();
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckBattleResult(const ERaceBattleResult in_result, const double in_battle_time, const int32 in_num_wining_streak, const int32 in_total_draw_num, const bool is_tire_life_zero, const int32 in_wall_hit_times, const bool in_rival_is_taxi, const bool in_is_player_kei, const bool is_rival_1st_win, const int32 in_num_of_win_kei) {
    return TArray<FSAchievementsIdsForPlatform>();
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::CheckActionTimes(const EAchievementsKind in_check_type, const int32 in_current_times) {
    return TArray<FSAchievementsIdsForPlatform>();
}

TArray<FSAchievementsIdsForPlatform> UAchievementsManager::Check(const FSUserInfo& in_user_info, const TArray<EAchievementsKind> in_check_kinds) {
    return TArray<FSAchievementsIdsForPlatform>();
}


