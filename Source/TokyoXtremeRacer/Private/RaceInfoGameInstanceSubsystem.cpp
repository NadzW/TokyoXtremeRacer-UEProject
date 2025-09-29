#include "RaceInfoGameInstanceSubsystem.h"

URaceInfoGameInstanceSubsystem::URaceInfoGameInstanceSubsystem() {
    this->car_type = 0;
    this->course_road_only = false;
    this->rival_car_num = 0;
    this->other_car_num = 0;
    this->wanderer_car_num = 0;
    this->parking_area_car_num = 0;
    this->InGameFromOutGame = false;
    this->StartCourseEnter = ECourseEnter::HW_C1_Ginza_Inner;
    this->ExitCourseExit = ECourseExit::HW_C1_Takarachou_Outer;
    this->StartArea = ERunArea::ERA_None;
    this->EnterParkingArea = EParkingArea::PA_6_9_Hakozaki;
    this->IsReturnPakingAreaBattle = false;
    this->ExitParkingArea = EParkingArea::PA_6_9_Hakozaki;
    this->OnCouseForBattle = false;
    this->UpdateDay = 0;
    this->IsReplay = false;
    this->RivalDataTable = NULL;
    this->IsBattle = false;
    this->ControllIsPlayer = false;
    this->ParkingAreaInfoNeedUpdate = false;
    this->IsTA = 0;
    this->ContinuousJustAccele = 0;
    this->ContinuousFirstAttack = 0;
    this->ContinuousReversalAttack = 0;
    this->EnableAddTimeNotDriving = false;
}

bool URaceInfoGameInstanceSubsystem::UpdateRivalPosition(const ERunArea _area, const FName _rival_id, const FVector _location, const FRotator _rotation, const float _spline_rate) {
    return false;
}

void URaceInfoGameInstanceSubsystem::UpdatePlayerPosition(const ERunArea _area, const FVector _location, const FRotator _rotation) {
}

void URaceInfoGameInstanceSubsystem::UpdateParkingRival(const FSUserInfo& user_info, const EParkingArea parking_area, const int32 parking_area_placement_num, const int32 parking_area_max_num_of_placement, const bool include_aready_won, const int32 random_seed) {
}

bool URaceInfoGameInstanceSubsystem::UpdateParkingAreaConversation(const EParkingArea parking_area, const UDataTable* data_table, const FSUserInfo& user_info, const int32 random_seed, const TArray<FName> in_on_course_rivals, const TArray<FName> in_on_parking_rivals, const int32 in_prioty_hi_conv_disp_num) {
    return false;
}

void URaceInfoGameInstanceSubsystem::UpdateCurrentSpForProcessAndResult(const double Sp) {
}

void URaceInfoGameInstanceSubsystem::TunerLeaves() {
}

int64 URaceInfoGameInstanceSubsystem::SPZeroModifyProcessAndResult(const int32 secret_pocket_percent) {
    return 0;
}

void URaceInfoGameInstanceSubsystem::SetValidProcessAndResult(const bool in_is_valid) {
}

bool URaceInfoGameInstanceSubsystem::SetRivalPlacedSituation(const FName rival_id, const ERivalPlacedSituation Situation, const bool is_add, const bool is_on_course) {
    return false;
}

void URaceInfoGameInstanceSubsystem::SetRivalDataTable(UDataTable* data_table) {
}

void URaceInfoGameInstanceSubsystem::SetPlayerIntermediateData(const FSPlayerIntermediateData in_data) {
}

void URaceInfoGameInstanceSubsystem::SetPlacedRivalInfosAfterLoad() {
}

void URaceInfoGameInstanceSubsystem::SetParkingAreaTuner(const UDataTable* data_table, const FSUserInfo& user_info, const int32 random_seed) {
}

bool URaceInfoGameInstanceSubsystem::SetParkingAreaBattleRival(const EParkingArea parking_area, const FName rival_id) {
    return false;
}

void URaceInfoGameInstanceSubsystem::SetIsTA(const bool in_is_battle) {
}

void URaceInfoGameInstanceSubsystem::SetIsReplay(const bool is_replay) {
}

void URaceInfoGameInstanceSubsystem::SetIsBattle(const bool in_is_battle) {
}

bool URaceInfoGameInstanceSubsystem::SetForceParkingAreaBattleRival(const ECourseEnter course_enter, const FName rival_id) {
    return false;
}

void URaceInfoGameInstanceSubsystem::SetExitParkingArea(const EParkingArea Area) {
}

void URaceInfoGameInstanceSubsystem::SetEnterParkingArea(const EParkingArea Area, const bool in_is_return_pa_battle) {
}

void URaceInfoGameInstanceSubsystem::SetEnableAddTimeNotDriving(const bool in_is_enable) {
}

void URaceInfoGameInstanceSubsystem::SetCurrentSpeedForProcessAndResult(const float Speed, const float dt, bool& is_update_max_speed, float& current_distance, int32& long_run_distance, int64& long_run_bonus, float& distance_at_dt) {
}

void URaceInfoGameInstanceSubsystem::SetBattleResultForProcessAndResult(const FSRaceBattleResultInfo battle_result, int64& out_this_time_get_cp, int32& out_this_time_get_pp) {
}

void URaceInfoGameInstanceSubsystem::SetAllRival(const FSUserInfo& user_info, const TMap<ERunArea, int32> placement_nums, const float placement_interval_adj_rate, const int32 parking_area_placement_num, const int32 parking_area_max_num_of_placement, const bool include_aready_won, const int32 random_seed, const TMap<ERunArea, USplineComponent*> runarea_splines, const TMap<ERunArea, FSCourseEnterSplineKeys> run_area_spline_keys, const bool ignore_parking_area) {
}

int32 URaceInfoGameInstanceSubsystem::ReturnkInitialRivalCarNum() const {
    return 0;
}

int32 URaceInfoGameInstanceSubsystem::ReturnkInitialOtherCarNum() const {
    return 0;
}

void URaceInfoGameInstanceSubsystem::ResetTimeNotDriving() {
}

void URaceInfoGameInstanceSubsystem::ReplayedCutin(const FName rival_id) {
}

void URaceInfoGameInstanceSubsystem::RemoveRivalPosition(const FName _rival_id) {
}

void URaceInfoGameInstanceSubsystem::RemoveAreaNonePositionInfo(const bool in_return_parking) {
}

int64 URaceInfoGameInstanceSubsystem::ReflectGarageResultBonusInCpEarnedForProcessAndResult(TArray<ERacePrizeCpType>& prize_type, int64& fix_cp_earned, int32& out_total_garage_bonus_pp, int32& fix_pp_earned) {
    return 0;
}

void URaceInfoGameInstanceSubsystem::RecoveryPlayerIntermediateDataTireLife() {
}

void URaceInfoGameInstanceSubsystem::RecoveryPlayerIntermediateDataNitro() {
}

void URaceInfoGameInstanceSubsystem::RecoveryPlayerIntermediateData() {
}

void URaceInfoGameInstanceSubsystem::RecordSpeedTrapForProcessAndResult(const FName ID, const double Speed, const bool is_new_record) {
}

void URaceInfoGameInstanceSubsystem::RecordSegmentForProcessAndResult(const FName ID, const double Time, const bool is_new_record) {
}

void URaceInfoGameInstanceSubsystem::RaceStart() {
}

void URaceInfoGameInstanceSubsystem::LookConversation() {
}

bool URaceInfoGameInstanceSubsystem::IsValidRivalDataTable() {
    return false;
}

bool URaceInfoGameInstanceSubsystem::IsReplayedCutin(const FName rival_id) {
    return false;
}

bool URaceInfoGameInstanceSubsystem::IsForceAddedRival(const FName rival_id) {
    return false;
}

bool URaceInfoGameInstanceSubsystem::IsAppearsTuner(const EParkingArea current_parking_area, EVehicleTuneKind& tuner_tune_kind, const bool is_check_map) {
    return false;
}

void URaceInfoGameInstanceSubsystem::Init() {
}

int32 URaceInfoGameInstanceSubsystem::IncContinuousReversalAttack() {
    return 0;
}

int32 URaceInfoGameInstanceSubsystem::IncContinuousJustAccele() {
    return 0;
}

int32 URaceInfoGameInstanceSubsystem::IncContinuousFirstAttack() {
    return 0;
}

bool URaceInfoGameInstanceSubsystem::GetValidProcessAndResult() {
    return false;
}

EParkingArea URaceInfoGameInstanceSubsystem::GetTunerAppearsParkingArea() const {
    return EParkingArea::PA_6_9_Hakozaki;
}

FSCourseTrafficJamInfoForRefrences URaceInfoGameInstanceSubsystem::GetTrafficJamInfos(const ERunArea Area) {
    return FSCourseTrafficJamInfoForRefrences{};
}

void URaceInfoGameInstanceSubsystem::GetRivalsOnParkingArea(const EParkingArea in_parking_area, TArray<FName>& out_rivals) {
}

void URaceInfoGameInstanceSubsystem::GetRivalsOnCourse(TArray<FName>& out_rivals) {
}

int32 URaceInfoGameInstanceSubsystem::GetPpEarnedForProcessAndResult() {
    return 0;
}

FSPlayerIntermediateData URaceInfoGameInstanceSubsystem::GetPlayerIntermediateData() {
    return FSPlayerIntermediateData{};
}

FName URaceInfoGameInstanceSubsystem::GetParkingAreaBattleTriggerRival() {
    return NAME_None;
}

TArray<FName> URaceInfoGameInstanceSubsystem::GetNotClearObjective() {
    return TArray<FName>();
}

double URaceInfoGameInstanceSubsystem::GetMaxTimeNotDriving() {
    return 0.0;
}

bool URaceInfoGameInstanceSubsystem::GetIsTA() {
    return false;
}

bool URaceInfoGameInstanceSubsystem::GetIsReplay() {
    return false;
}

bool URaceInfoGameInstanceSubsystem::GetIsMeetTheBattleConditionRival(const FName in_check_rival) {
    return false;
}

bool URaceInfoGameInstanceSubsystem::GetIsBattle() {
    return false;
}

float URaceInfoGameInstanceSubsystem::GetFreeRunBonusCheckSpeed(const float delta_distance, const float delta_time, const float check_time) {
    return 0.0f;
}

EParkingArea URaceInfoGameInstanceSubsystem::GetExitParkingArea() {
    return EParkingArea::PA_6_9_Hakozaki;
}

FSEventForcedAddRivalInfo URaceInfoGameInstanceSubsystem::GetEventForcedAddRivalInfo(const ERunArea Area, bool& is_exist) {
    return FSEventForcedAddRivalInfo{};
}

EParkingArea URaceInfoGameInstanceSubsystem::GetEnterParkingArea(bool& out_is_return_pa_battle) {
    return EParkingArea::PA_6_9_Hakozaki;
}

double URaceInfoGameInstanceSubsystem::GetDistanceTravelledToday() {
    return 0.0;
}

int64 URaceInfoGameInstanceSubsystem::GetCpEarnedForProcessAndResult() {
    return 0;
}

TArray<FSSegmentSpeedTrapInfo> URaceInfoGameInstanceSubsystem::GetCourseSegmentSpeedTrapInfos() {
    return TArray<FSSegmentSpeedTrapInfo>();
}

TArray<FSCourseLineInfo> URaceInfoGameInstanceSubsystem::GetCourseDrawLineInfos() {
    return TArray<FSCourseLineInfo>();
}

TArray<FName> URaceInfoGameInstanceSubsystem::GetClearObjective() {
    return TArray<FName>();
}

void URaceInfoGameInstanceSubsystem::ForceAddedRival(const FName rival_id) {
}

void URaceInfoGameInstanceSubsystem::ClearTrafficJamInfo() {
}

void URaceInfoGameInstanceSubsystem::ClearTimeNotDriving() {
}

void URaceInfoGameInstanceSubsystem::ClearSetRival() {
}

void URaceInfoGameInstanceSubsystem::ClearProcessAndResult() {
}

void URaceInfoGameInstanceSubsystem::ClearParkingAreaBattleInfo() {
}

void URaceInfoGameInstanceSubsystem::ClearObstacleInfos() {
}

void URaceInfoGameInstanceSubsystem::ClearNotMeetTheBattleConditionRival() {
}

void URaceInfoGameInstanceSubsystem::ClearLongRunBonus(const bool is_load_game) {
}

void URaceInfoGameInstanceSubsystem::ClearIsTA() {
}

void URaceInfoGameInstanceSubsystem::ClearForcedAppearanceRivals() {
}

void URaceInfoGameInstanceSubsystem::ClearCourseSegmentSpeedTrapInfos() {
}

void URaceInfoGameInstanceSubsystem::ClearCourseDrawLineInfos() {
}

void URaceInfoGameInstanceSubsystem::ClearContinuousReversalAttack() {
}

void URaceInfoGameInstanceSubsystem::ClearContinuousJustAccele() {
}

void URaceInfoGameInstanceSubsystem::ClearContinuousFirstAttack() {
}

bool URaceInfoGameInstanceSubsystem::CheckRivalAppearance(const FSRivalAppearanceConditionInfo& appear_cond_info, const FSUserInfo& user_info) {
    return false;
}

void URaceInfoGameInstanceSubsystem::CheckActionDailyInit() {
}

bool URaceInfoGameInstanceSubsystem::CanGetPerfectBonusFromRival(const FName in_rival_id) {
    return false;
}

void URaceInfoGameInstanceSubsystem::AddTrafficJamInfo(const FSCourseTrafficJamInfo Info) {
}

double URaceInfoGameInstanceSubsystem::AddTimeNotDriving(const double in_dt) {
    return 0.0;
}

void URaceInfoGameInstanceSubsystem::AddRoadConstructionInfo(const ECourseArea Area, const FSObstacleConstructionSiteInfo Info) {
}

void URaceInfoGameInstanceSubsystem::AddReverseTimesProcessAndResult(const int32 Times) {
}

void URaceInfoGameInstanceSubsystem::AddNotMeetTheBattleConditionRival(const FName in_not_meet_rival) {
}

void URaceInfoGameInstanceSubsystem::AddNotClearObjectives(const TArray<FName> in_objectives) {
}

void URaceInfoGameInstanceSubsystem::AddNotClearObjective(const FName in_objective) {
}

void URaceInfoGameInstanceSubsystem::AddLongRunBonus(const FSRaceLongRunBonusInfo Info, const bool add_check_id) {
}

void URaceInfoGameInstanceSubsystem::AddForcedAppearanceRival(const FName in_rival_id) {
}

void URaceInfoGameInstanceSubsystem::AddEventForcedAddRivalInfo(const FSEventForcedAddRivalInfo event_forced_rival_info) {
}

int64 URaceInfoGameInstanceSubsystem::AddCpForProcessAndResult(const ERacePrizeCpType Type, const int64 Cp, bool& is_garage_add, bool& is_pp) {
    return 0;
}

int32 URaceInfoGameInstanceSubsystem::AddCourseSegmentSpeedTrapInfo(const FSSegmentSpeedTrapInfo ss_info) {
    return 0;
}

TArray<FName> URaceInfoGameInstanceSubsystem::AddCourseRival(const FSUserInfo& user_info, const ERunArea Area, const TArray<FTransform> enter_poss, const int32 add_num, const bool include_aready_won, const int32 random_seed) {
    return TArray<FName>();
}

int32 URaceInfoGameInstanceSubsystem::AddCourseDrawLineInfo(const FSCourseLineInfo line_info) {
    return 0;
}

void URaceInfoGameInstanceSubsystem::AddClearObjectives(const TArray<FName> in_objectives) {
}

void URaceInfoGameInstanceSubsystem::AddClearObjective(const FName in_objective) {
}

void URaceInfoGameInstanceSubsystem::AddBrokenVehicleInfo(const ECourseArea Area, const FSObstacleBrokenVehickeInfo Info) {
}


