#include "UserInfoGameInstanceSubsystem.h"

UUserInfoGameInstanceSubsystem::UUserInfoGameInstanceSubsystem() {
    this->EnterParkingArea = EParkingArea::PA_6_9_Hakozaki;
    this->NextGameModeForMovieTeater = EGameMode::InGame;
    this->TutorialModeInfoDataTable = NULL;
    this->IsValidCurrentTutorialModeInfo = false;
    this->IsDispCurrentTutorialModePopup = false;
    this->SaveDataChangedFlag = false;
    this->OptionSaveDataChangedFlag = false;
    this->Is_First_Time_Startup = true;
    this->Is_Option_Initialized = false;
}

void UUserInfoGameInstanceSubsystem::UsedEvaluationLatestBattleResult() {
}

TMap<FName, FSObjectiveInfo> UUserInfoGameInstanceSubsystem::UpdateObjective(const UDataTable* objective_data_table, TArray<FName>& clear_id, TArray<EObjectiveActionWhenCleared>& cleared_actions, TArray<FName>& not_clear_id) {
    return TMap<FName, FSObjectiveInfo>();
}

void UUserInfoGameInstanceSubsystem::UpdateCurrentGrangeInfo(const FSGarageInfo new_info) {
}

void UUserInfoGameInstanceSubsystem::SetUpperLimitCP(const int64 new_cp) {
}

void UUserInfoGameInstanceSubsystem::SetupBaseInfo(const FSBaseInfo base_info) {
}

void UUserInfoGameInstanceSubsystem::SetTutorialModeInfoDataTable(UDataTable* tutorial_datatable) {
}

void UUserInfoGameInstanceSubsystem::SetTutorialMode(const EGameTutorialMode tutorial_mode, const bool is_exe_action) {
}

bool UUserInfoGameInstanceSubsystem::SetTunePartsMaxOpenLevel(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetTeamSituation(const FName team_id, const FSTeamSituationInfo team_info) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetStoryStage(const EStoryStage in_new_stage) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetSkillTreeStatus(const int32 ID, const ESkillTreeStatus Status, const int32 DT_No, const int32 Step) {
    return false;
}

void UUserInfoGameInstanceSubsystem::SetSelectedMyCarId(const int32 ID) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarWingStikers(const TMap<int32, FSMyCarBodySticker> wing_stickers) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarWindowStikers(const TMap<EWindowStickerIndex, FSMyCarWindowSticker> window_stickers) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarWheel(const FSWheelInfo wheel_info, const bool is_front, const bool is_equip) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarTunerTune(const EVehicleTuneKind tune_kind) {
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarTunePartsEquipLevel(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level, const TArray<ECustomCarPartsSimpleKind> unlockcustoms, const TArray<ECustomCarPartsSimpleKind> lockcustoms, const TArray<ECarSetting> unlock_setttings) {
    return false;
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarTireType(const bool in_is_front, const ECarTireType in_type) {
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarTireInfoCore(const FSCarTireInfo tire_info, const bool is_both, const bool is_front) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarSettingParameterRaw(const ECarSetting Type, const int32 Val) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarSettingParameter(const ECarSetting Type, const int32 Val) {
    return false;
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarSettingInfo(const FSCarSettingInfo setting_info) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarSettingGears(const int32 in_gear_num, const TArray<float> Gears) {
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarSettingGearRatio(const int32 gear_pos, const float Ratio) {
    return false;
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarSettingGearNum(const int32 in_gear_num) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarSettingAuto(const ECarSettingAutoKind auto_kind, const ECarSettingAutoType auto_type) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarPaint(const FSCarPaint new_paint) {
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarBrakeRotorScale(const int32 Scale, const bool is_both, const bool is_front) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarBrakeCaliperColor(const FName Color, const bool is_both, const bool is_front) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetSelectedCarBrakeCaliperAngle(const int32 Angle, const bool is_both, const bool is_front) {
    return false;
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarBrake(const FSBrakeInfo brake_info, const bool is_front, const bool is_equip, const bool is_caliper) {
}

void UUserInfoGameInstanceSubsystem::SetSelectedCarBodyStikers(const TMap<int32, FSMyCarBodySticker> body_stickers) {
}

bool UUserInfoGameInstanceSubsystem::SetRivalSituationReadFlag(const FName rival_id, const bool is_rumors) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetRivalSituationAnimationFlag(const FName rival_id, const bool is_unlock) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetRivalSituation(const FName rival_id, const ERivalSituation rival_situation, const bool rival_is_team_leader, int32& num_of_rival_defated, int32& num_of_team_defated) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetPerkTreeStatus(const UDataTable* in_root_datatable, const FName in_category, const FName in_row_name, const ESkillTreeStatus in_status) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::SetOptionVehicleInfoViewType(const ECarViewType view_type) {
    return false;
}

void UUserInfoGameInstanceSubsystem::SetOptionVehicleInfoTransmissionType(const ECarTransmissionType transmission_type) {
}

void UUserInfoGameInstanceSubsystem::SetOptionVehicleInfo(const FSUserOptionVehicleInfo vehicle_info) {
}

void UUserInfoGameInstanceSubsystem::SetOptionInputMappingInfo(const FSOptionInputMappingInfo setting_info) {
}

void UUserInfoGameInstanceSubsystem::SetOptionGameSettingInfo(const FSUserOptionGameSetting game_info) {
}

void UUserInfoGameInstanceSubsystem::SetNextGameModeForMovieTeather(const EGameMode next_mode) {
}

bool UUserInfoGameInstanceSubsystem::SetMaxGarageMyCarNum(const int32 car_num) {
    return false;
}

void UUserInfoGameInstanceSubsystem::SetMapInfo(const FSMapInfo& map_info) {
}

void UUserInfoGameInstanceSubsystem::SetLicensePlate(const int32& car_id, const FSCarLicensePlate& car_license_plate) {
}

void UUserInfoGameInstanceSubsystem::SetIsDispCurrentTutorialModePopup(const bool is_disp) {
}

void UUserInfoGameInstanceSubsystem::SetGraveInfo(const FVector Location, const int64 Cp) {
}

void UUserInfoGameInstanceSubsystem::SetGarageVehicleCameraInfo(const FSGarageVehicleCameraInfo camera_info) {
}

int64 UUserInfoGameInstanceSubsystem::SetGarageResult(const FSRaceProcessAndResultInfo garage_result, int32& out_overflow_pp) {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::SetEnterParkingArea(const EParkingArea parking_area) {
    return 0;
}

void UUserInfoGameInstanceSubsystem::SetEnableSystemMenu(const bool is_enable) {
}

void UUserInfoGameInstanceSubsystem::SetCourseOpenArea(const ECourseOpenArea open_area) {
}

void UUserInfoGameInstanceSubsystem::SetBattleResult(const FSRaceBattleResultInfo battle_result) {
}

void UUserInfoGameInstanceSubsystem::SeenParkingAreaConversation(const EParkingArea parking_area, const FSParkingAreaConversationDispInfo conv_info) {
}

void UUserInfoGameInstanceSubsystem::ResetSaveDataChangedFlag() {
}

void UUserInfoGameInstanceSubsystem::ResetOptionSaveDataChangedFlag() {
}

void UUserInfoGameInstanceSubsystem::RemoveSelectedCarTunerTune() {
}

void UUserInfoGameInstanceSubsystem::RemoveNewLiveryVinyls(const FName in_vinyl) {
}

bool UUserInfoGameInstanceSubsystem::RemoveMyCar(const int32 my_car_id) {
    return false;
}

void UUserInfoGameInstanceSubsystem::RefrectMyCarMeasurement(const double Mileages, const float max_speed) {
}

void UUserInfoGameInstanceSubsystem::ReflectDefaultPerk(const UDataTable* in_root_datatable) {
}

int32 UUserInfoGameInstanceSubsystem::RecordSpeedTrap(const FName name_id, const double Speed, const FName car_name_id, const FDateTime Date, const int32 Day, double& out_last_best_result) {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::RecordSegment(const FName name_id, const double Time, const FName car_name_id, const FDateTime Date, const int32 Day, const double in_distance, const bool in_is_wall_hit, double& out_last_best_result) {
    return 0;
}

void UUserInfoGameInstanceSubsystem::RaceRestartResetParameter() {
}

bool UUserInfoGameInstanceSubsystem::OpenCourseExit(const ECourseExit course_enter) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::OpenCourseEnter(const ECourseEnter course_enter) {
    return false;
}

void UUserInfoGameInstanceSubsystem::MeetsTuner() {
}

int32 UUserInfoGameInstanceSubsystem::LevelUpDriverStatus(const EDriverStatus Type, const int32 num_of_levelup) {
    return 0;
}

bool UUserInfoGameInstanceSubsystem::IsValidGraveInfo() {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsSeenParkingAreaConversation(const EParkingArea parking_area, const FName conv_id) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsNewMarkTunePartsLevel(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsNewMarkCanBoughtEngine(const FName engine_name_id) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsNewMarkCanBoughtCar(const FName car_name_id) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsIncludedCurrentStoryStage(const EStoryStage in_check_stage) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsExistNewLiveryVinyl() {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsExistNewLiverySticker() {
    return false;
}

bool UUserInfoGameInstanceSubsystem::IsEnableFastTravelCourseExitShop(const ECourseExit course_exit, const ECourseExitShopTypeFlag Type) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::HaveSelectedCarNeon(const ENeonLightPositionType in_check_position) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::HasSaveDataChanged() {
    return false;
}

bool UUserInfoGameInstanceSubsystem::HasOptionSaveDataChanged() {
    return false;
}

int32 UUserInfoGameInstanceSubsystem::GetWiningStreakForProvenExperienceFromPerk() {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::GetWiningStreak() {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::GetVisitedParkingAreaTimes(const EParkingArea parking_area) {
    return 0;
}

TArray<EParkingArea> UUserInfoGameInstanceSubsystem::GetVisitedParkingArea() {
    return TArray<EParkingArea>();
}

int64 UUserInfoGameInstanceSubsystem::GetUpperLimitPP() {
    return 0;
}

int64 UUserInfoGameInstanceSubsystem::GetUpperLimitCP() {
    return 0;
}

TArray<EParkingArea> UUserInfoGameInstanceSubsystem::GetUnlockParkingAreas() {
    return TArray<EParkingArea>();
}

EGameTutorialMode UUserInfoGameInstanceSubsystem::GetTutorialMode() {
    return EGameTutorialMode::None;
}

EVehicleTuneLevel UUserInfoGameInstanceSubsystem::GetTunePartsMaxOpenLevel(const EVehicleTuneKind tune_kind) {
    return EVehicleTuneLevel::None;
}

ERaceTimeZone UUserInfoGameInstanceSubsystem::GetTimeZone() {
    return ERaceTimeZone::RTZ_1;
}

FSTeamSituationInfo UUserInfoGameInstanceSubsystem::GetTeamSituation(const FName team_id) {
    return FSTeamSituationInfo{};
}

EStoryStage UUserInfoGameInstanceSubsystem::GetStoryStage() {
    return EStoryStage::None;
}

FSSpeedTrapRecords UUserInfoGameInstanceSubsystem::GetSpeedTrapRecord(const FName name_id, const bool clear_update_best) {
    return FSSpeedTrapRecords{};
}

ESkillTreeStatus UUserInfoGameInstanceSubsystem::GetSkillTreeStatus(const int32 ID, const int32 DT_No, const int32 Step) {
    return ESkillTreeStatus::STS_CAN_NOT_UNLOCK;
}

int32 UUserInfoGameInstanceSubsystem::GetSelectedMyCarId() {
    return 0;
}

FSMyCarInfo UUserInfoGameInstanceSubsystem::GetSelectedMyCar(int32& my_car_id) {
    return FSMyCarInfo{};
}

TArray<EVehicleTuneLevel> UUserInfoGameInstanceSubsystem::GetSelectedCarTunePartsHaveLevels(const EVehicleTuneKind tune_kind) {
    return TArray<EVehicleTuneLevel>();
}

EVehicleTuneLevel UUserInfoGameInstanceSubsystem::GetSelectedCarTunePartsEquipLevel(const EVehicleTuneKind tune_kind) {
    return EVehicleTuneLevel::None;
}

ECarTireType UUserInfoGameInstanceSubsystem::GetSelectedCarTireType(const bool in_is_front) {
    return ECarTireType::Soft;
}

FSCarTireInfo UUserInfoGameInstanceSubsystem::GetSelectedCarTireInfo(const bool is_front) {
    return FSCarTireInfo{};
}

int32 UUserInfoGameInstanceSubsystem::GetSelectedCarSettingParameterRaw(const ECarSetting setting_type, bool& out_find) {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::GetSelectedCarSettingParameter(const ECarSetting setting_type, bool& out_find) {
    return 0;
}

TArray<float> UUserInfoGameInstanceSubsystem::GetSelectedCarSettingGears() {
    return TArray<float>();
}

float UUserInfoGameInstanceSubsystem::GetSelectedCarSettingGearRatio(const int32 gear_pos) {
    return 0.0f;
}

int32 UUserInfoGameInstanceSubsystem::GetSelectedCarSettingGearNum() {
    return 0;
}

ECarSettingAutoType UUserInfoGameInstanceSubsystem::GetSelectedCarSettingAuto(const ECarSettingAutoKind auto_kind) {
    return ECarSettingAutoType::None;
}

FSMyCarNeon UUserInfoGameInstanceSubsystem::GetSelectedCarNeon(const ENeonLightPositionType Position) {
    return FSMyCarNeon{};
}

TMap<ECustomCarPartsKind, FSCustomCarParts> UUserInfoGameInstanceSubsystem::GetSelectedCarDressupInfos() {
    return TMap<ECustomCarPartsKind, FSCustomCarParts>();
}

FSBrakeInfo UUserInfoGameInstanceSubsystem::GetSelectedCarBrakeInfo(const bool is_front) {
    return FSBrakeInfo{};
}

FSSegmentRecords UUserInfoGameInstanceSubsystem::GetSegmentRecord(const FName name_id, const bool clear_update_best) {
    return FSSegmentRecords{};
}

int32 UUserInfoGameInstanceSubsystem::GetSeenProgressConvercastionNum() {
    return 0;
}

bool UUserInfoGameInstanceSubsystem::GetRivalSituationNewFlag(const FName rival_id, const bool is_win) const {
    return false;
}

FSRivalSituationInfo UUserInfoGameInstanceSubsystem::GetRivalSituation(const FName rival_id) {
    return FSRivalSituationInfo{};
}

int64 UUserInfoGameInstanceSubsystem::GetPP() {
    return 0;
}

TMap<FName, ESkillTreeStatus> UUserInfoGameInstanceSubsystem::GetPerkTreeStatuses(const UDataTable* in_root_datatable, const FName in_category) {
    return TMap<FName, ESkillTreeStatus>();
}

TMap<ESkillTreeType, int32> UUserInfoGameInstanceSubsystem::GetPerkTreeCategoryAcquiredLevels(const UDataTable* in_root_datatable, const ESkillTreeCategory in_category) {
    return TMap<ESkillTreeType, int32>();
}

TMap<FName, FSPerkCategoryRootInfo> UUserInfoGameInstanceSubsystem::GetPerkCategoryDataTables(const UDataTable* in_root_datatable, const ESkillTreeCategory in_category) {
    return TMap<FName, FSPerkCategoryRootInfo>();
}

int64 UUserInfoGameInstanceSubsystem::GetPartsPriceCoef() {
    return 0;
}

ECarTransmissionType UUserInfoGameInstanceSubsystem::GetOptionVehicleInfoTransmissionType() {
    return ECarTransmissionType::None;
}

FSUserOptionVehicleInfo UUserInfoGameInstanceSubsystem::GetOptionVehicleInfo() {
    return FSUserOptionVehicleInfo{};
}

FSUserOptionInfo UUserInfoGameInstanceSubsystem::GetOptionInfo() {
    return FSUserOptionInfo{};
}

FSUserOptionGameSetting UUserInfoGameInstanceSubsystem::GetOptionGameSettingInfo() {
    return FSUserOptionGameSetting{};
}

TMap<ECourseExit, FSShopFistTravelInfo> UUserInfoGameInstanceSubsystem::GetOpenCourseExit() {
    return TMap<ECourseExit, FSShopFistTravelInfo>();
}

TArray<ECourseEnter> UUserInfoGameInstanceSubsystem::GetOpenCourseEnter() {
    return TArray<ECourseEnter>();
}

TMap<FName, FSPerkTreeMachineInfo> UUserInfoGameInstanceSubsystem::GetNumberOfPerkTreeMachineAcquired(const UDataTable* in_root_datatable) {
    return TMap<FName, FSPerkTreeMachineInfo>();
}

TSoftObjectPtr<UDataTable> UUserInfoGameInstanceSubsystem::GetNowhereConversation(const bool in_get_conv_delete) {
    return NULL;
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetNotClearObjectives() {
    return TArray<FName>();
}

EGameMode UUserInfoGameInstanceSubsystem::GetNextGameModeForMovieTeater() {
    return EGameMode::InGame;
}

TArray<ECourseEnter> UUserInfoGameInstanceSubsystem::GetNewOpenCourseEnter(const bool is_clear) {
    return TArray<ECourseEnter>();
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetNewObjectives() {
    return TArray<FName>();
}

TArray<ECarSetting> UUserInfoGameInstanceSubsystem::GetNewMarkSelectedCarSettingInfos() {
    return TArray<ECarSetting>();
}

TArray<ECustomCarPartsSimpleKind> UUserInfoGameInstanceSubsystem::GetNewMarkSelectedCarDressupInfos() {
    return TArray<ECustomCarPartsSimpleKind>();
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetNewMarkCanBoughtEngine() {
    return TArray<FName>();
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetNewMarkCanBoughtCar() {
    return TArray<FName>();
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetNewLiveryVinyls() {
    return TArray<FName>();
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetNewLiveryStickers() {
    return TArray<FName>();
}

TMap<int32, FSMyCarInfo> UUserInfoGameInstanceSubsystem::GetMyCars() {
    return TMap<int32, FSMyCarInfo>();
}

FName UUserInfoGameInstanceSubsystem::GetMovieTeatherPlayMovieId(bool& out_is_valid_id) {
    return NAME_None;
}

int64 UUserInfoGameInstanceSubsystem::GetMinUnitCP() {
    return 0;
}

double UUserInfoGameInstanceSubsystem::GetMinBattleTime() {
    return 0.0;
}

int32 UUserInfoGameInstanceSubsystem::GetMaxGarageMyCarNum() {
    return 0;
}

double UUserInfoGameInstanceSubsystem::GetMaxBattleTime() {
    return 0.0;
}

FSMapInfo UUserInfoGameInstanceSubsystem::GetMapInfo() const {
    return FSMapInfo{};
}

FSRaceBattleResultInfo UUserInfoGameInstanceSubsystem::GetLastBattleResult() {
    return FSRaceBattleResultInfo{};
}

bool UUserInfoGameInstanceSubsystem::GetIsDispCurrentTutorialModePopup() {
    return false;
}

TArray<FSInputActionKeyMapping> UUserInfoGameInstanceSubsystem::GetInputActionKeyMapping() {
    return TArray<FSInputActionKeyMapping>();
}

EJumpScene UUserInfoGameInstanceSubsystem::GetHeadOutGameStackScene(const bool is_head_remove) {
    return EJumpScene::None;
}

FSGarageVehicleCameraInfo UUserInfoGameInstanceSubsystem::GetGarageVehicleCameraInfo() {
    return FSGarageVehicleCameraInfo{};
}

TArray<FSGarageInfo> UUserInfoGameInstanceSubsystem::GetGarages() {
    return TArray<FSGarageInfo>();
}

TArray<ESkillTreeType> UUserInfoGameInstanceSubsystem::GetEquipPerkSkill() {
    return TArray<ESkillTreeType>();
}

EParkingArea UUserInfoGameInstanceSubsystem::GetEnterParkingArea() {
    return EParkingArea::PA_6_9_Hakozaki;
}

bool UUserInfoGameInstanceSubsystem::GetEnableSystemMenu() {
    return false;
}

FSShopFistTravelInfo UUserInfoGameInstanceSubsystem::GetEnableFistTravelCourseExitInfo(const ECourseExit course_exit) {
    return FSShopFistTravelInfo{};
}

int32 UUserInfoGameInstanceSubsystem::GetDriverStatusParameter(const EDriverStatus Type, const int32 num_of_levelup) {
    return 0;
}

void UUserInfoGameInstanceSubsystem::GetDriverSkill(const ESkillTreeType Type, int32& Level, int32& Value) {
}

int64 UUserInfoGameInstanceSubsystem::GetDriverLevelUpCost(const int32 total_num_of_levelup) {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::GetDriverLevel() {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::GetDaysForDisplayed() {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::GetDays() {
    return 0;
}

FSTutorialModeInfo UUserInfoGameInstanceSubsystem::GetCurrentTutorialModeInfo(bool& is_valid) {
    return FSTutorialModeInfo{};
}

FSGarageInfo UUserInfoGameInstanceSubsystem::GetCurrentGarageInfo() {
    return FSGarageInfo{};
}

int64 UUserInfoGameInstanceSubsystem::GetCumulativePP() {
    return 0;
}

int64 UUserInfoGameInstanceSubsystem::GetCumulativeCP() {
    return 0;
}

int64 UUserInfoGameInstanceSubsystem::GetCP() {
    return 0;
}

ECourseOpenArea UUserInfoGameInstanceSubsystem::GetCourseOpenArea() {
    return ECourseOpenArea::None;
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetClearedObjectives() {
    return TArray<FName>();
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetCanBoughtEngineNameIds() {
    return TArray<FName>();
}

TArray<FName> UUserInfoGameInstanceSubsystem::GetCanBoughtCarNameIds() {
    return TArray<FName>();
}

TMap<FName, FSTeamSituationInfo> UUserInfoGameInstanceSubsystem::GetAllTeamSituation() {
    return TMap<FName, FSTeamSituationInfo>();
}

TMap<FName, FSRivalSituationInfo> UUserInfoGameInstanceSubsystem::GetAllRivalSituation() {
    return TMap<FName, FSRivalSituationInfo>();
}

FSSkillTree UUserInfoGameInstanceSubsystem::GetAcquiredPerkSkill(const UDataTable* in_root_datatable, const ESkillTreeType in_type, bool& out_is_find) {
    return FSSkillTree{};
}

bool UUserInfoGameInstanceSubsystem::EquipSelectedCarCustomParts(const ECustomCarPartsKind Kind, const ECustomCarPartsType Type) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::EnableFastTravelCourseExitShop(const ECourseExit course_exit, const ECourseExitShopTypeFlag Type) {
    return false;
}

void UUserInfoGameInstanceSubsystem::DepriveAllMyCar() {
}

void UUserInfoGameInstanceSubsystem::DeleteNewMarkCanBoughtEngine(const FName engine_name_id) {
}

void UUserInfoGameInstanceSubsystem::DeleteNewMarkCanBoughtCar(const FName car_name_id) {
}

bool UUserInfoGameInstanceSubsystem::ConsumePP(const int32 in_consume_pp, int32& out_current_pp) {
    return false;
}

void UUserInfoGameInstanceSubsystem::ClearWiningStreakForProvenExperienceFromPerk() {
}

void UUserInfoGameInstanceSubsystem::ClearWiningStreak() {
}

void UUserInfoGameInstanceSubsystem::ClearSelectedCarSettingGearRatios() {
}

void UUserInfoGameInstanceSubsystem::ClearOutGameStackScenes() {
}

void UUserInfoGameInstanceSubsystem::ClearNewOpenCourseEnter() {
}

void UUserInfoGameInstanceSubsystem::ClearNewObjectives() {
}

void UUserInfoGameInstanceSubsystem::ClearNewMarkTunePartsLevel(const EVehicleTuneKind tune_kind) {
}

void UUserInfoGameInstanceSubsystem::ClearNewMarkSelectedCarSettingInfo(const ECarSetting in_kind) {
}

void UUserInfoGameInstanceSubsystem::ClearNewMarkSelectedCarDressupInfos(const ECustomCarPartsSimpleKind clear_kind) {
}

void UUserInfoGameInstanceSubsystem::ClearNewLiveryVinyls() {
}

void UUserInfoGameInstanceSubsystem::ClearNewLiveryStickers() {
}

void UUserInfoGameInstanceSubsystem::ClearMovieTeatherPlayMovieId(const bool in_is_all) {
}

void UUserInfoGameInstanceSubsystem::ClearEquipPerkSkill() {
}

void UUserInfoGameInstanceSubsystem::ClearAnnounceUnlockedTunes() {
}

bool UUserInfoGameInstanceSubsystem::CheckCarYouOwn(const FName in_check_car_name_id) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::ChangeCurrentGarageInfo(const int32 ID) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::BuySelectedCarNeon(const ENeonLightPositionType in_buy_position) {
    return false;
}

int32 UUserInfoGameInstanceSubsystem::AdvanceTimeZone(const ERaceTimeZone next_timezone) {
    return 0;
}

int32 UUserInfoGameInstanceSubsystem::AdvanceDay(const int32 num_of_day) {
    return 0;
}

bool UUserInfoGameInstanceSubsystem::AddStickerTargetMaker(const FName in_maker) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::AddSelectedCarTunePartsHaveFlag(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::AddSelectedCarNeon(const ENeonLightPositionType Position, const FSMyCarNeon my_neon_info) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::AddSelectedCarCustomParts(const ECustomCarPartsKind Kind, const ECustomCarPartsType Type, const bool is_equip) {
    return false;
}

int32 UUserInfoGameInstanceSubsystem::AddPP(const int32 in_add_pp, const bool in_add_cumulative_acquisition, int32& overflowed_pp) {
    return 0;
}

void UUserInfoGameInstanceSubsystem::AddPerk(const FName in_category, const FName in_row_name, const FSSkillTree in_perk) {
}

void UUserInfoGameInstanceSubsystem::AddOutGameStackScenes(const EJumpScene add_scene) {
}

TMap<FName, FSObjectiveInfo> UUserInfoGameInstanceSubsystem::AddObjective(const UDataTable* objective_data_table) {
    return TMap<FName, FSObjectiveInfo>();
}

void UUserInfoGameInstanceSubsystem::AddNowhereConversation(TSoftObjectPtr<UDataTable> soft_ptr_datatable) {
}

void UUserInfoGameInstanceSubsystem::AddNewLiveryVinyl(const FName in_vinyl) {
}

void UUserInfoGameInstanceSubsystem::AddNewLiverySticker(const FName in_sticker) {
}

int32 UUserInfoGameInstanceSubsystem::AddMyCar(const FName car_id, const int32 Category, const FSCarSettingInfo setting_info, const FSCarTireInfo front_tire, const FSCarTireInfo rear_tire, const bool is_select, const int32 color_id) {
    return 0;
}

void UUserInfoGameInstanceSubsystem::AddMovieTeatherPlayMovieId(const FName movie_id) {
}

bool UUserInfoGameInstanceSubsystem::AddMaxGarageMyCarNum() {
    return false;
}

void UUserInfoGameInstanceSubsystem::AddInputActionKeyMapping(const FSInputActionKeyMapping KeyMapping) {
}

void UUserInfoGameInstanceSubsystem::AddGarage(const FName garage, const bool is_use) {
}

bool UUserInfoGameInstanceSubsystem::AddEquipPerkSkill(const ESkillTreeType in_type) {
    return false;
}

int32 UUserInfoGameInstanceSubsystem::AddDriverSkill(const ESkillTreeType Type, const int32 Value, const bool increment_level, int32& new_level, int32& new_value) {
    return 0;
}

int64 UUserInfoGameInstanceSubsystem::AddCP(const int64 for_cp, const int64 for_cumulative_cp, int64& overflowed_cp, const bool in_ignore_limit) {
    return 0;
}

bool UUserInfoGameInstanceSubsystem::AddCanBoughtEngineNameId(const FName engine_name_id) {
    return false;
}

bool UUserInfoGameInstanceSubsystem::AddCanBoughtCarNameId(const FName car_name_id) {
    return false;
}

void UUserInfoGameInstanceSubsystem::AddBattleNum(const int32 battle_num, const int32 win_num, const int32 lose_num, const int32 draw_num, const int32 max_winning_streak) {
}

void UUserInfoGameInstanceSubsystem::AddAnnounceUnlockedTunes(const FSUnlockTuneInfo unlocked_tune) {
}


