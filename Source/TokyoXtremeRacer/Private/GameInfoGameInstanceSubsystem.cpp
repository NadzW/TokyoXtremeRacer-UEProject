#include "GameInfoGameInstanceSubsystem.h"

UGameInfoGameInstanceSubsystem::UGameInfoGameInstanceSubsystem() {
    this->Version = EVersion::EarlyAccess;
    this->LicensePlateGenerator = NULL;
    this->UseLogoLicensePlate = false;
    this->bForcedVibrationStop = false;
    this->AchievementManager = NULL;
    this->UseAchievementPlatform = EAchievementsPlatform::Steam;
    this->DispMessage = EDispMessage::None;
}

void UGameInfoGameInstanceSubsystem::SkillSetup(const UDataTable* in_root_datatableconst, const FName in_category, const bool in_exe_empty) {
}

void UGameInfoGameInstanceSubsystem::SetupAchievemet(UDataTable* data_table, const bool in_achievementinfo_reflect_to_userinfo, FSUserInfo& in_user_info, const TMap<EVehicleTuneKind, EVehicleTuneLevel> in_max_tune_levels, const UDataTable* rival_data_table) {
}

void UGameInfoGameInstanceSubsystem::SetForcedVibrationStop(const bool in_is_forced_stop) {
}

void UGameInfoGameInstanceSubsystem::SetDispMessage(const EDispMessage in_message_type) {
}

EVersion UGameInfoGameInstanceSubsystem::GetVersion(FName& out_number) {
    return EVersion::EarlyAccess;
}

bool UGameInfoGameInstanceSubsystem::GetSkillInfo(const ESkillTreeType in_type, const int32 in_level, FSSkillTree& out_info) {
    return false;
}

FSSBVersion UGameInfoGameInstanceSubsystem::GetSBVersion() {
    return FSSBVersion{};
}

int32 UGameInfoGameInstanceSubsystem::GetSBRevision() {
    return 0;
}

bool UGameInfoGameInstanceSubsystem::GetForcedVibrationStop() const {
    return false;
}

EDispMessage UGameInfoGameInstanceSubsystem::GetDispMessage() {
    return EDispMessage::None;
}

void UGameInfoGameInstanceSubsystem::ClearDispMessage() {
}

void UGameInfoGameInstanceSubsystem::CheckPlatformAchievement(const TArray<FSAchievementsIdsForPlatform> in_check_achievements) {
}

TArray<FSAchievementsIdsForPlatform> UGameInfoGameInstanceSubsystem::CheckBattleResultForAchievement(const FSRaceBattleResultInfo in_result, const bool in_is_player_kei, const int32 in_num_wining_streak, const int32 in_total_draw_num, const bool in_is_tire_life_zero, const int32 in_num_of_win_kei) {
    return TArray<FSAchievementsIdsForPlatform>();
}


