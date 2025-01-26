#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ECarSetting.h"
#include "ECarSettingAutoKind.h"
#include "ECarSettingAutoType.h"
#include "ECarTireType.h"
#include "ECarTransmissionType.h"
#include "ECarViewType.h"
#include "ECourseEnter.h"
#include "ECourseExit.h"
#include "ECourseExitShopTypeFlag.h"
#include "ECourseOpenArea.h"
#include "ECustomCarPartsKind.h"
#include "ECustomCarPartsSimpleKind.h"
#include "ECustomCarPartsType.h"
#include "EDriverStatus.h"
#include "EGameMode.h"
#include "EGameTutorialMode.h"
#include "EJumpScene.h"
#include "ENeonLightPositionType.h"
#include "EObjectiveActionWhenCleared.h"
#include "EParkingArea.h"
#include "ERaceTimeZone.h"
#include "ERivalSituation.h"
#include "ESkillTreeCategory.h"
#include "ESkillTreeStatus.h"
#include "ESkillTreeType.h"
#include "EStoryStage.h"
#include "EVehicleTuneKind.h"
#include "EVehicleTuneLevel.h"
#include "EWindowStickerIndex.h"
#include "SBaseInfo.h"
#include "SBrakeInfo.h"
#include "SCarLicensePlate.h"
#include "SCarPaint.h"
#include "SCarSettingInfo.h"
#include "SCarTireInfo.h"
#include "SCustomCarParts.h"
#include "SGarageInfo.h"
#include "SGarageVehicleCameraInfo.h"
#include "SInputActionKeyMapping.h"
#include "SMapInfo.h"
#include "SMyCarBodySticker.h"
#include "SMyCarInfo.h"
#include "SMyCarNeon.h"
#include "SMyCarWindowSticker.h"
#include "SObjectiveInfo.h"
#include "SOptionInputMappingInfo.h"
#include "SParkingAreaConversationDispInfo.h"
#include "SPerkCategoryRootInfo.h"
#include "SPerkTreeMachineInfo.h"
#include "SRaceBattleResultInfo.h"
#include "SRaceProcessAndResultInfo.h"
#include "SRivalSituationInfo.h"
#include "SSegmentRecords.h"
#include "SShopFistTravelInfo.h"
#include "SSkillTree.h"
#include "SSpeedTrapRecords.h"
#include "STeamSituationInfo.h"
#include "STutorialModeInfo.h"
#include "SUnlockTuneInfo.h"
#include "SUserInfo.h"
#include "SUserOptionGameSetting.h"
#include "SUserOptionInfo.h"
#include "SUserOptionVehicleInfo.h"
#include "SWheelInfo.h"
#include "UserSubSystemOptionHandleControllerSettingInfoChangeDelegateDelegate.h"
#include "UserSubSystemRivalSituationChangeDelegateDelegate.h"
#include "UserSubSystemTutorialModeUpdateDelegateDelegate.h"
#include "UserInfoGameInstanceSubsystem.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UUserInfoGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBaseInfo BaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUserInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUserOptionInfo OptionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSUnlockTuneInfo> AnnounceUnlockedTunes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EJumpScene> OutGameStackScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParkingArea EnterParkingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameMode NextGameModeForMovieTeater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayMovieIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> ConversationScripts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialModeInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValidCurrentTutorialModeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTutorialModeInfo CurrentTutorialModeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispCurrentTutorialModePopup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSubSystemTutorialModeUpdateDelegate TutorialModeUpdateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveDataChangedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OptionSaveDataChangedFlag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSubSystemOptionHandleControllerSettingInfoChangeDelegate OptionHandleControllerSettingInfoChangeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSInputActionKeyMapping> InputActionKeyMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is_First_Time_Startup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is_Option_Initialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSubSystemRivalSituationChangeDelegate OnChangeRivalSituation;
    
    UUserInfoGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void UsedEvaluationLatestBattleResult();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FSObjectiveInfo> UpdateObjective(const UDataTable* objective_data_table, TArray<FName>& clear_id, TArray<EObjectiveActionWhenCleared>& cleared_actions, TArray<FName>& not_clear_id);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentGrangeInfo(const FSGarageInfo new_info);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperLimitCP(const int64 new_cp);
    
    UFUNCTION(BlueprintCallable)
    void SetupBaseInfo(const FSBaseInfo base_info);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialModeInfoDataTable(UDataTable* tutorial_datatable);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialMode(const EGameTutorialMode tutorial_mode, const bool is_exe_action);
    
    UFUNCTION(BlueprintCallable)
    bool SetTunePartsMaxOpenLevel(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level);
    
    UFUNCTION(BlueprintCallable)
    bool SetTeamSituation(const FName team_id, const FSTeamSituationInfo team_info);
    
    UFUNCTION(BlueprintCallable)
    bool SetStoryStage(const EStoryStage in_new_stage);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkillTreeStatus(const int32 ID, const ESkillTreeStatus Status, const int32 DT_No, const int32 Step);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMyCarId(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarWingStikers(const TMap<int32, FSMyCarBodySticker> wing_stickers);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarWindowStikers(const TMap<EWindowStickerIndex, FSMyCarWindowSticker> window_stickers);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarWheel(const FSWheelInfo wheel_info, const bool is_front, const bool is_equip);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarTunerTune(const EVehicleTuneKind tune_kind);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarTunePartsEquipLevel(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level, const TArray<ECustomCarPartsSimpleKind> unlockcustoms, const TArray<ECustomCarPartsSimpleKind> lockcustoms, const TArray<ECarSetting> unlock_setttings);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarTireType(const bool in_is_front, const ECarTireType in_type);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarTireInfoCore(const FSCarTireInfo tire_info, const bool is_both, const bool is_front);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarSettingParameterRaw(const ECarSetting Type, const int32 Val);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarSettingParameter(const ECarSetting Type, const int32 Val);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarSettingInfo(const FSCarSettingInfo setting_info);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarSettingGears(const int32 in_gear_num, const TArray<float> Gears);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarSettingGearRatio(const int32 gear_pos, const float Ratio);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarSettingGearNum(const int32 in_gear_num);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarSettingAuto(const ECarSettingAutoKind auto_kind, const ECarSettingAutoType auto_type);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarPaint(const FSCarPaint new_paint);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarBrakeRotorScale(const int32 Scale, const bool is_both, const bool is_front);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarBrakeCaliperColor(const FName Color, const bool is_both, const bool is_front);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedCarBrakeCaliperAngle(const int32 Angle, const bool is_both, const bool is_front);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarBrake(const FSBrakeInfo brake_info, const bool is_front, const bool is_equip, const bool is_caliper);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCarBodyStikers(const TMap<int32, FSMyCarBodySticker> body_stickers);
    
    UFUNCTION(BlueprintCallable)
    bool SetRivalSituationReadFlag(const FName rival_id, const bool is_rumors);
    
    UFUNCTION(BlueprintCallable)
    bool SetRivalSituationAnimationFlag(const FName rival_id, const bool is_unlock);
    
    UFUNCTION(BlueprintCallable)
    bool SetRivalSituation(const FName rival_id, const ERivalSituation rival_situation, const bool rival_is_team_leader, int32& num_of_rival_defated, int32& num_of_team_defated);
    
    UFUNCTION(BlueprintCallable)
    bool SetPerkTreeStatus(const UDataTable* in_root_datatable, const FName in_category, const FName in_row_name, const ESkillTreeStatus in_status);
    
    UFUNCTION(BlueprintCallable)
    bool SetOptionVehicleInfoViewType(const ECarViewType view_type);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionVehicleInfoTransmissionType(const ECarTransmissionType transmission_type);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionVehicleInfo(const FSUserOptionVehicleInfo vehicle_info);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionInputMappingInfo(const FSOptionInputMappingInfo setting_info);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionGameSettingInfo(const FSUserOptionGameSetting game_info);
    
    UFUNCTION(BlueprintCallable)
    void SetNextGameModeForMovieTeather(const EGameMode next_mode);
    
    UFUNCTION(BlueprintCallable)
    bool SetMaxGarageMyCarNum(const int32 car_num);
    
    UFUNCTION(BlueprintCallable)
    void SetMapInfo(const FSMapInfo& map_info);
    
    UFUNCTION(BlueprintCallable)
    void SetLicensePlate(const int32& car_id, const FSCarLicensePlate& car_license_plate);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDispCurrentTutorialModePopup(const bool is_disp);
    
    UFUNCTION(BlueprintCallable)
    void SetGraveInfo(const FVector Location, const int64 Cp);
    
    UFUNCTION(BlueprintCallable)
    void SetGarageVehicleCameraInfo(const FSGarageVehicleCameraInfo camera_info);
    
    UFUNCTION(BlueprintCallable)
    int64 SetGarageResult(const FSRaceProcessAndResultInfo garage_result, int32& out_overflow_pp);
    
    UFUNCTION(BlueprintCallable)
    int32 SetEnterParkingArea(const EParkingArea parking_area);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSystemMenu(const bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCourseOpenArea(const ECourseOpenArea open_area);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleResult(const FSRaceBattleResultInfo battle_result);
    
    UFUNCTION(BlueprintCallable)
    void SeenParkingAreaConversation(const EParkingArea parking_area, const FSParkingAreaConversationDispInfo conv_info);
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveDataChangedFlag();
    
    UFUNCTION(BlueprintCallable)
    void ResetOptionSaveDataChangedFlag();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedCarTunerTune();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewLiveryVinyls(const FName in_vinyl);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMyCar(const int32 my_car_id);
    
    UFUNCTION(BlueprintCallable)
    void RefrectMyCarMeasurement(const double Mileages, const float max_speed);
    
    UFUNCTION(BlueprintCallable)
    void ReflectDefaultPerk(const UDataTable* in_root_datatable);
    
    UFUNCTION(BlueprintCallable)
    int32 RecordSpeedTrap(const FName name_id, const double Speed, const FName car_name_id, const FDateTime Date, const int32 Day, double& out_last_best_result);
    
    UFUNCTION(BlueprintCallable)
    int32 RecordSegment(const FName name_id, const double Time, const FName car_name_id, const FDateTime Date, const int32 Day, const double in_distance, const bool in_is_wall_hit, double& out_last_best_result);
    
    UFUNCTION(BlueprintCallable)
    void RaceRestartResetParameter();
    
    UFUNCTION(BlueprintCallable)
    bool OpenCourseExit(const ECourseExit course_enter);
    
    UFUNCTION(BlueprintCallable)
    bool OpenCourseEnter(const ECourseEnter course_enter);
    
    UFUNCTION(BlueprintCallable)
    void MeetsTuner();
    
    UFUNCTION(BlueprintCallable)
    int32 LevelUpDriverStatus(const EDriverStatus Type, const int32 num_of_levelup);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidGraveInfo();
    
    UFUNCTION(BlueprintCallable)
    bool IsSeenParkingAreaConversation(const EParkingArea parking_area, const FName conv_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsNewMarkTunePartsLevel(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level);
    
    UFUNCTION(BlueprintCallable)
    bool IsNewMarkCanBoughtEngine(const FName engine_name_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsNewMarkCanBoughtCar(const FName car_name_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsIncludedCurrentStoryStage(const EStoryStage in_check_stage);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistNewLiveryVinyl();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistNewLiverySticker();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableFastTravelCourseExitShop(const ECourseExit course_exit, const ECourseExitShopTypeFlag Type);
    
    UFUNCTION(BlueprintCallable)
    bool HaveSelectedCarNeon(const ENeonLightPositionType in_check_position);
    
    UFUNCTION(BlueprintCallable)
    bool HasSaveDataChanged();
    
    UFUNCTION(BlueprintCallable)
    bool HasOptionSaveDataChanged();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWiningStreakForProvenExperienceFromPerk();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWiningStreak();
    
    UFUNCTION(BlueprintCallable)
    int32 GetVisitedParkingAreaTimes(const EParkingArea parking_area);
    
    UFUNCTION(BlueprintCallable)
    TArray<EParkingArea> GetVisitedParkingArea();
    
    UFUNCTION(BlueprintCallable)
    int64 GetUpperLimitPP();
    
    UFUNCTION(BlueprintCallable)
    int64 GetUpperLimitCP();
    
    UFUNCTION(BlueprintCallable)
    TArray<EParkingArea> GetUnlockParkingAreas();
    
    UFUNCTION(BlueprintCallable)
    EGameTutorialMode GetTutorialMode();
    
    UFUNCTION(BlueprintCallable)
    EVehicleTuneLevel GetTunePartsMaxOpenLevel(const EVehicleTuneKind tune_kind);
    
    UFUNCTION(BlueprintCallable)
    ERaceTimeZone GetTimeZone();
    
    UFUNCTION(BlueprintCallable)
    FSTeamSituationInfo GetTeamSituation(const FName team_id);
    
    UFUNCTION(BlueprintCallable)
    EStoryStage GetStoryStage();
    
    UFUNCTION(BlueprintCallable)
    FSSpeedTrapRecords GetSpeedTrapRecord(const FName name_id, const bool clear_update_best);
    
    UFUNCTION(BlueprintCallable)
    ESkillTreeStatus GetSkillTreeStatus(const int32 ID, const int32 DT_No, const int32 Step);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedMyCarId();
    
    UFUNCTION(BlueprintCallable)
    FSMyCarInfo GetSelectedMyCar(int32& my_car_id);
    
    UFUNCTION(BlueprintCallable)
    TArray<EVehicleTuneLevel> GetSelectedCarTunePartsHaveLevels(const EVehicleTuneKind tune_kind);
    
    UFUNCTION(BlueprintCallable)
    EVehicleTuneLevel GetSelectedCarTunePartsEquipLevel(const EVehicleTuneKind tune_kind);
    
    UFUNCTION(BlueprintCallable)
    ECarTireType GetSelectedCarTireType(const bool in_is_front);
    
    UFUNCTION(BlueprintCallable)
    FSCarTireInfo GetSelectedCarTireInfo(const bool is_front);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedCarSettingParameterRaw(const ECarSetting setting_type, bool& out_find);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedCarSettingParameter(const ECarSetting setting_type, bool& out_find);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetSelectedCarSettingGears();
    
    UFUNCTION(BlueprintCallable)
    float GetSelectedCarSettingGearRatio(const int32 gear_pos);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedCarSettingGearNum();
    
    UFUNCTION(BlueprintCallable)
    ECarSettingAutoType GetSelectedCarSettingAuto(const ECarSettingAutoKind auto_kind);
    
    UFUNCTION(BlueprintCallable)
    FSMyCarNeon GetSelectedCarNeon(const ENeonLightPositionType Position);
    
    UFUNCTION(BlueprintCallable)
    TMap<ECustomCarPartsKind, FSCustomCarParts> GetSelectedCarDressupInfos();
    
    UFUNCTION(BlueprintCallable)
    FSBrakeInfo GetSelectedCarBrakeInfo(const bool is_front);
    
    UFUNCTION(BlueprintCallable)
    FSSegmentRecords GetSegmentRecord(const FName name_id, const bool clear_update_best);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSeenProgressConvercastionNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRivalSituationNewFlag(const FName rival_id, const bool is_win) const;
    
    UFUNCTION(BlueprintCallable)
    FSRivalSituationInfo GetRivalSituation(const FName rival_id);
    
    UFUNCTION(BlueprintCallable)
    int64 GetPP();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, ESkillTreeStatus> GetPerkTreeStatuses(const UDataTable* in_root_datatable, const FName in_category);
    
    UFUNCTION(BlueprintCallable)
    TMap<ESkillTreeType, int32> GetPerkTreeCategoryAcquiredLevels(const UDataTable* in_root_datatable, const ESkillTreeCategory in_category);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FSPerkCategoryRootInfo> GetPerkCategoryDataTables(const UDataTable* in_root_datatable, const ESkillTreeCategory in_category);
    
    UFUNCTION(BlueprintCallable)
    int64 GetPartsPriceCoef();
    
    UFUNCTION(BlueprintCallable)
    ECarTransmissionType GetOptionVehicleInfoTransmissionType();
    
    UFUNCTION(BlueprintCallable)
    FSUserOptionVehicleInfo GetOptionVehicleInfo();
    
    UFUNCTION(BlueprintCallable)
    FSUserOptionInfo GetOptionInfo();
    
    UFUNCTION(BlueprintCallable)
    FSUserOptionGameSetting GetOptionGameSettingInfo();
    
    UFUNCTION(BlueprintCallable)
    TMap<ECourseExit, FSShopFistTravelInfo> GetOpenCourseExit();
    
    UFUNCTION(BlueprintCallable)
    TArray<ECourseEnter> GetOpenCourseEnter();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FSPerkTreeMachineInfo> GetNumberOfPerkTreeMachineAcquired(const UDataTable* in_root_datatable);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UDataTable> GetNowhereConversation(const bool in_get_conv_delete);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNotClearObjectives();
    
    UFUNCTION(BlueprintCallable)
    EGameMode GetNextGameModeForMovieTeater();
    
    UFUNCTION(BlueprintCallable)
    TArray<ECourseEnter> GetNewOpenCourseEnter(const bool is_clear);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNewObjectives();
    
    UFUNCTION(BlueprintCallable)
    TArray<ECarSetting> GetNewMarkSelectedCarSettingInfos();
    
    UFUNCTION(BlueprintCallable)
    TArray<ECustomCarPartsSimpleKind> GetNewMarkSelectedCarDressupInfos();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNewMarkCanBoughtEngine();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNewMarkCanBoughtCar();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNewLiveryVinyls();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNewLiveryStickers();
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, FSMyCarInfo> GetMyCars();
    
    UFUNCTION(BlueprintCallable)
    FName GetMovieTeatherPlayMovieId(bool& out_is_valid_id);
    
    UFUNCTION(BlueprintCallable)
    int64 GetMinUnitCP();
    
    UFUNCTION(BlueprintCallable)
    double GetMinBattleTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxGarageMyCarNum();
    
    UFUNCTION(BlueprintCallable)
    double GetMaxBattleTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSMapInfo GetMapInfo() const;
    
    UFUNCTION(BlueprintCallable)
    FSRaceBattleResultInfo GetLastBattleResult();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsDispCurrentTutorialModePopup();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSInputActionKeyMapping> GetInputActionKeyMapping();
    
    UFUNCTION(BlueprintCallable)
    EJumpScene GetHeadOutGameStackScene(const bool is_head_remove);
    
    UFUNCTION(BlueprintCallable)
    FSGarageVehicleCameraInfo GetGarageVehicleCameraInfo();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSGarageInfo> GetGarages();
    
    UFUNCTION(BlueprintCallable)
    TArray<ESkillTreeType> GetEquipPerkSkill();
    
    UFUNCTION(BlueprintCallable)
    EParkingArea GetEnterParkingArea();
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableSystemMenu();
    
    UFUNCTION(BlueprintCallable)
    FSShopFistTravelInfo GetEnableFistTravelCourseExitInfo(const ECourseExit course_exit);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDriverStatusParameter(const EDriverStatus Type, const int32 num_of_levelup);
    
    UFUNCTION(BlueprintCallable)
    void GetDriverSkill(const ESkillTreeType Type, int32& Level, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    int64 GetDriverLevelUpCost(const int32 total_num_of_levelup);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDriverLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDaysForDisplayed();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDays();
    
    UFUNCTION(BlueprintCallable)
    FSTutorialModeInfo GetCurrentTutorialModeInfo(bool& is_valid);
    
    UFUNCTION(BlueprintCallable)
    FSGarageInfo GetCurrentGarageInfo();
    
    UFUNCTION(BlueprintCallable)
    int64 GetCumulativePP();
    
    UFUNCTION(BlueprintCallable)
    int64 GetCumulativeCP();
    
    UFUNCTION(BlueprintCallable)
    int64 GetCP();
    
    UFUNCTION(BlueprintCallable)
    ECourseOpenArea GetCourseOpenArea();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetClearedObjectives();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCanBoughtEngineNameIds();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCanBoughtCarNameIds();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FSTeamSituationInfo> GetAllTeamSituation();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FSRivalSituationInfo> GetAllRivalSituation();
    
    UFUNCTION(BlueprintCallable)
    FSSkillTree GetAcquiredPerkSkill(const UDataTable* in_root_datatable, const ESkillTreeType in_type, bool& out_is_find);
    
    UFUNCTION(BlueprintCallable)
    bool EquipSelectedCarCustomParts(const ECustomCarPartsKind Kind, const ECustomCarPartsType Type);
    
    UFUNCTION(BlueprintCallable)
    bool EnableFastTravelCourseExitShop(const ECourseExit course_exit, const ECourseExitShopTypeFlag Type);
    
    UFUNCTION(BlueprintCallable)
    void DepriveAllMyCar();
    
    UFUNCTION(BlueprintCallable)
    void DeleteNewMarkCanBoughtEngine(const FName engine_name_id);
    
    UFUNCTION(BlueprintCallable)
    void DeleteNewMarkCanBoughtCar(const FName car_name_id);
    
    UFUNCTION(BlueprintCallable)
    bool ConsumePP(const int32 in_consume_pp, int32& out_current_pp);
    
    UFUNCTION(BlueprintCallable)
    void ClearWiningStreakForProvenExperienceFromPerk();
    
    UFUNCTION(BlueprintCallable)
    void ClearWiningStreak();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedCarSettingGearRatios();
    
    UFUNCTION(BlueprintCallable)
    void ClearOutGameStackScenes();
    
    UFUNCTION(BlueprintCallable)
    void ClearNewOpenCourseEnter();
    
    UFUNCTION(BlueprintCallable)
    void ClearNewObjectives();
    
    UFUNCTION(BlueprintCallable)
    void ClearNewMarkTunePartsLevel(const EVehicleTuneKind tune_kind);
    
    UFUNCTION(BlueprintCallable)
    void ClearNewMarkSelectedCarSettingInfo(const ECarSetting in_kind);
    
    UFUNCTION(BlueprintCallable)
    void ClearNewMarkSelectedCarDressupInfos(const ECustomCarPartsSimpleKind clear_kind);
    
    UFUNCTION(BlueprintCallable)
    void ClearNewLiveryVinyls();
    
    UFUNCTION(BlueprintCallable)
    void ClearNewLiveryStickers();
    
    UFUNCTION(BlueprintCallable)
    void ClearMovieTeatherPlayMovieId(const bool in_is_all);
    
    UFUNCTION(BlueprintCallable)
    void ClearEquipPerkSkill();
    
    UFUNCTION(BlueprintCallable)
    void ClearAnnounceUnlockedTunes();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCarYouOwn(const FName in_check_car_name_id);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeCurrentGarageInfo(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool BuySelectedCarNeon(const ENeonLightPositionType in_buy_position);
    
    UFUNCTION(BlueprintCallable)
    int32 AdvanceTimeZone(const ERaceTimeZone next_timezone);
    
    UFUNCTION(BlueprintCallable)
    int32 AdvanceDay(const int32 num_of_day);
    
    UFUNCTION(BlueprintCallable)
    bool AddStickerTargetMaker(const FName in_maker);
    
    UFUNCTION(BlueprintCallable)
    bool AddSelectedCarTunePartsHaveFlag(const EVehicleTuneKind tune_kind, const EVehicleTuneLevel Level);
    
    UFUNCTION(BlueprintCallable)
    bool AddSelectedCarNeon(const ENeonLightPositionType Position, const FSMyCarNeon my_neon_info);
    
    UFUNCTION(BlueprintCallable)
    bool AddSelectedCarCustomParts(const ECustomCarPartsKind Kind, const ECustomCarPartsType Type, const bool is_equip);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPP(const int32 in_add_pp, const bool in_add_cumulative_acquisition, int32& overflowed_pp);
    
    UFUNCTION(BlueprintCallable)
    void AddPerk(const FName in_category, const FName in_row_name, const FSSkillTree in_perk);
    
    UFUNCTION(BlueprintCallable)
    void AddOutGameStackScenes(const EJumpScene add_scene);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FSObjectiveInfo> AddObjective(const UDataTable* objective_data_table);
    
    UFUNCTION(BlueprintCallable)
    void AddNowhereConversation(TSoftObjectPtr<UDataTable> soft_ptr_datatable);
    
    UFUNCTION(BlueprintCallable)
    void AddNewLiveryVinyl(const FName in_vinyl);
    
    UFUNCTION(BlueprintCallable)
    void AddNewLiverySticker(const FName in_sticker);
    
    UFUNCTION(BlueprintCallable)
    int32 AddMyCar(const FName car_id, const int32 Category, const FSCarSettingInfo setting_info, const FSCarTireInfo front_tire, const FSCarTireInfo rear_tire, const bool is_select, const int32 color_id);
    
    UFUNCTION(BlueprintCallable)
    void AddMovieTeatherPlayMovieId(const FName movie_id);
    
    UFUNCTION(BlueprintCallable)
    bool AddMaxGarageMyCarNum();
    
    UFUNCTION(BlueprintCallable)
    void AddInputActionKeyMapping(const FSInputActionKeyMapping KeyMapping);
    
    UFUNCTION(BlueprintCallable)
    void AddGarage(const FName garage, const bool is_use);
    
    UFUNCTION(BlueprintCallable)
    bool AddEquipPerkSkill(const ESkillTreeType in_type);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDriverSkill(const ESkillTreeType Type, const int32 Value, const bool increment_level, int32& new_level, int32& new_value);
    
    UFUNCTION(BlueprintCallable)
    int64 AddCP(const int64 for_cp, const int64 for_cumulative_cp, int64& overflowed_cp, const bool in_ignore_limit);
    
    UFUNCTION(BlueprintCallable)
    bool AddCanBoughtEngineNameId(const FName engine_name_id);
    
    UFUNCTION(BlueprintCallable)
    bool AddCanBoughtCarNameId(const FName car_name_id);
    
    UFUNCTION(BlueprintCallable)
    void AddBattleNum(const int32 battle_num, const int32 win_num, const int32 lose_num, const int32 draw_num, const int32 max_winning_streak);
    
    UFUNCTION(BlueprintCallable)
    void AddAnnounceUnlockedTunes(const FSUnlockTuneInfo unlocked_tune);
    
};

