#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ECourseArea.h"
#include "ECourseEnter.h"
#include "ECourseExit.h"
#include "EParkingArea.h"
#include "ERacePrizeCpType.h"
#include "ERivalPlacedSituation.h"
#include "ERunArea.h"
#include "EVehicleTuneKind.h"
#include "RaceSubsystemBattleEndDelegateDelegate.h"
#include "RaceSubsystemBattleStartDelegateDelegate.h"
#include "RaceSubsystemTimeAttackEndDelegateDelegate.h"
#include "RaceSubsystemTimeAttackStartDelegateDelegate.h"
#include "SCourseEnterSplineKeys.h"
#include "SCourseLineInfo.h"
#include "SCourseTrafficJamInfo.h"
#include "SCourseTrafficJamInfoForRefrences.h"
#include "SEventForcedAddRivalInfo.h"
#include "SObstacleBrokenVehickeInfo.h"
#include "SObstacleConstructionSiteInfo.h"
#include "SParkingAreaAppearanceConversaionInfo.h"
#include "SParkingBattleInfo.h"
#include "SPlayerIntermediateData.h"
#include "SRaceBattleResultInfo.h"
#include "SRaceCoreInfo.h"
#include "SRaceLongRunBonusInfo.h"
#include "SRivalAppearanceConditionInfo.h"
#include "SSegmentSpeedTrapInfo.h"
#include "SUserInfo.h"
#include "RaceInfoGameInstanceSubsystem.generated.h"

class UDataTable;
class URivalInfoObject;
class USplineComponent;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URaceInfoGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 car_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool course_road_only;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rival_car_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 other_car_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 wanderer_car_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parking_area_car_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InGameFromOutGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseEnter StartCourseEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseExit ExitCourseExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea StartArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParkingArea ExitParkingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnCouseForBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EParkingArea, FSParkingAreaAppearanceConversaionInfo> ParkingAreaConversationInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRaceCoreInfo CoreInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, URivalInfoObject*> RivalInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParkingBattleTriggerRivalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSParkingBattleInfo ParkingBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSRaceLongRunBonusInfo> LongRunBonusInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RivalDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCourseLineInfo> CourseDrawLineInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSegmentSpeedTrapInfo> CourseSegmentSpeedTrapInfos;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceSubsystemBattleStartDelegate BattleStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceSubsystemBattleEndDelegate BattleEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceSubsystemTimeAttackStartDelegate TAStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceSubsystemTimeAttackEndDelegate TAEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllIsPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ParkingAreaInfoNeedUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IsTA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ForcedAppearanceRivals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuousJustAccele;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuousFirstAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuousReversalAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAddTimeNotDriving;
    
    URaceInfoGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    bool UpdateRivalPosition(const ERunArea _area, const FName _rival_id, const FVector _location, const FRotator _rotation, const float _spline_rate);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerPosition(const ERunArea _area, const FVector _location, const FRotator _rotation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParkingRival(const FSUserInfo& user_info, const EParkingArea parking_area, const int32 parking_area_placement_num, const int32 parking_area_max_num_of_placement, const bool include_aready_won, const int32 random_seed);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateParkingAreaConversation(const EParkingArea parking_area, const UDataTable* data_table, const FSUserInfo& user_info, const int32 random_seed, const TArray<FName> in_on_course_rivals, const TArray<FName> in_on_parking_rivals, const int32 in_prioty_hi_conv_disp_num);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentSpForProcessAndResult(const double Sp);
    
    UFUNCTION(BlueprintCallable)
    void TunerLeaves();
    
    UFUNCTION(BlueprintCallable)
    int64 SPZeroModifyProcessAndResult(const int32 secret_pocket_percent);
    
    UFUNCTION(BlueprintCallable)
    void SetValidProcessAndResult(const bool in_is_valid);
    
    UFUNCTION(BlueprintCallable)
    bool SetRivalPlacedSituation(const FName rival_id, const ERivalPlacedSituation Situation, const bool is_add, const bool is_on_course);
    
    UFUNCTION(BlueprintCallable)
    void SetRivalDataTable(UDataTable* data_table);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIntermediateData(const FSPlayerIntermediateData in_data);
    
    UFUNCTION(BlueprintCallable)
    void SetPlacedRivalInfosAfterLoad();
    
    UFUNCTION(BlueprintCallable)
    void SetParkingAreaTuner(const UDataTable* data_table, const FSUserInfo& user_info, const int32 random_seed);
    
    UFUNCTION(BlueprintCallable)
    bool SetParkingAreaBattleRival(const EParkingArea parking_area, const FName rival_id);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTA(const bool in_is_battle);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReplay(const bool is_replay);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBattle(const bool in_is_battle);
    
    UFUNCTION(BlueprintCallable)
    bool SetForceParkingAreaBattleRival(const ECourseEnter course_enter, const FName rival_id);
    
    UFUNCTION(BlueprintCallable)
    void SetExitParkingArea(const EParkingArea Area);
    
    UFUNCTION(BlueprintCallable)
    void SetEnterParkingArea(const EParkingArea Area);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAddTimeNotDriving(const bool in_is_enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSpeedForProcessAndResult(const float Speed, const float dt, bool& is_update_max_speed, float& current_distance, int32& long_run_distance, int64& long_run_bonus, float& distance_at_dt);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleResultForProcessAndResult(const FSRaceBattleResultInfo battle_result, int64& out_this_time_get_cp, int32& out_this_time_get_pp);
    
    UFUNCTION(BlueprintCallable)
    void SetAllRival(const FSUserInfo& user_info, const TMap<ERunArea, int32> placement_nums, const float placement_interval_adj_rate, const int32 parking_area_placement_num, const int32 parking_area_max_num_of_placement, const bool include_aready_won, const int32 random_seed, const TMap<ERunArea, USplineComponent*> runarea_splines, const TMap<ERunArea, FSCourseEnterSplineKeys> run_area_spline_keys, const bool ignore_parking_area);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ReturnkInitialRivalCarNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ReturnkInitialOtherCarNum() const;
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeNotDriving();
    
    UFUNCTION(BlueprintCallable)
    void ReplayedCutin(const FName rival_id);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRivalPosition(const FName _rival_id);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAreaNonePositionInfo(const bool in_return_parking);
    
    UFUNCTION(BlueprintCallable)
    int64 ReflectGarageResultBonusInCpEarnedForProcessAndResult(TArray<ERacePrizeCpType>& prize_type, int64& fix_cp_earned, int32& out_total_garage_bonus_pp, int32& fix_pp_earned);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryPlayerIntermediateDataTireLife();
    
    UFUNCTION(BlueprintCallable)
    void RecoveryPlayerIntermediateDataNitro();
    
    UFUNCTION(BlueprintCallable)
    void RecoveryPlayerIntermediateData();
    
    UFUNCTION(BlueprintCallable)
    void RecordSpeedTrapForProcessAndResult(const FName ID, const double Speed, const bool is_new_record);
    
    UFUNCTION(BlueprintCallable)
    void RecordSegmentForProcessAndResult(const FName ID, const double Time, const bool is_new_record);
    
    UFUNCTION(BlueprintCallable)
    void RaceStart();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidRivalDataTable();
    
    UFUNCTION(BlueprintCallable)
    bool IsReplayedCutin(const FName rival_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsForceAddedRival(const FName rival_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsAppearsTuner(const EParkingArea current_parking_area, EVehicleTuneKind& tuner_tune_kind, const bool is_check_map);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    int32 IncContinuousReversalAttack();
    
    UFUNCTION(BlueprintCallable)
    int32 IncContinuousJustAccele();
    
    UFUNCTION(BlueprintCallable)
    int32 IncContinuousFirstAttack();
    
    UFUNCTION(BlueprintCallable)
    bool GetValidProcessAndResult();
    
    UFUNCTION(BlueprintCallable)
    FSCourseTrafficJamInfoForRefrences GetTrafficJamInfos(const ERunArea Area);
    
    UFUNCTION(BlueprintCallable)
    void GetRivalsOnParkingArea(const EParkingArea in_parking_area, TArray<FName>& out_rivals);
    
    UFUNCTION(BlueprintCallable)
    void GetRivalsOnCourse(TArray<FName>& out_rivals);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPpEarnedForProcessAndResult();
    
    UFUNCTION(BlueprintCallable)
    FSPlayerIntermediateData GetPlayerIntermediateData();
    
    UFUNCTION(BlueprintCallable)
    FName GetParkingAreaBattleTriggerRival();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNotClearObjective();
    
    UFUNCTION(BlueprintCallable)
    double GetMaxTimeNotDriving();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTA();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsReplay();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsMeetTheBattleConditionRival(const FName in_check_rival);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBattle();
    
    UFUNCTION(BlueprintCallable)
    float GetFreeRunBonusCheckSpeed(const float delta_distance, const float delta_time, const float check_time);
    
    UFUNCTION(BlueprintCallable)
    EParkingArea GetExitParkingArea();
    
    UFUNCTION(BlueprintCallable)
    FSEventForcedAddRivalInfo GetEventForcedAddRivalInfo(const ERunArea Area, bool& is_exist);
    
    UFUNCTION(BlueprintCallable)
    EParkingArea GetEnterParkingArea();
    
    UFUNCTION(BlueprintCallable)
    double GetDistanceTravelledToday();
    
    UFUNCTION(BlueprintCallable)
    int64 GetCpEarnedForProcessAndResult();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSegmentSpeedTrapInfo> GetCourseSegmentSpeedTrapInfos();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSCourseLineInfo> GetCourseDrawLineInfos();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetClearObjective();
    
    UFUNCTION(BlueprintCallable)
    void ForceAddedRival(const FName rival_id);
    
    UFUNCTION(BlueprintCallable)
    void ClearTrafficJamInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearTimeNotDriving();
    
    UFUNCTION(BlueprintCallable)
    void ClearSetRival();
    
    UFUNCTION(BlueprintCallable)
    void ClearProcessAndResult();
    
    UFUNCTION(BlueprintCallable)
    void ClearParkingAreaBattleInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearObstacleInfos();
    
    UFUNCTION(BlueprintCallable)
    void ClearNotMeetTheBattleConditionRival();
    
    UFUNCTION(BlueprintCallable)
    void ClearLongRunBonus(const bool is_load_game);
    
    UFUNCTION(BlueprintCallable)
    void ClearIsTA();
    
    UFUNCTION(BlueprintCallable)
    void ClearForcedAppearanceRivals();
    
    UFUNCTION(BlueprintCallable)
    void ClearCourseSegmentSpeedTrapInfos();
    
    UFUNCTION(BlueprintCallable)
    void ClearCourseDrawLineInfos();
    
    UFUNCTION(BlueprintCallable)
    void ClearContinuousReversalAttack();
    
    UFUNCTION(BlueprintCallable)
    void ClearContinuousJustAccele();
    
    UFUNCTION(BlueprintCallable)
    void ClearContinuousFirstAttack();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRivalAppearance(const FSRivalAppearanceConditionInfo& appear_cond_info, const FSUserInfo& user_info);
    
    UFUNCTION(BlueprintCallable)
    void CheckActionDailyInit();
    
    UFUNCTION(BlueprintCallable)
    void AddTrafficJamInfo(const FSCourseTrafficJamInfo Info);
    
    UFUNCTION(BlueprintCallable)
    double AddTimeNotDriving(const double in_dt);
    
    UFUNCTION(BlueprintCallable)
    void AddRoadConstructionInfo(const ECourseArea Area, const FSObstacleConstructionSiteInfo Info);
    
    UFUNCTION(BlueprintCallable)
    void AddReverseTimesProcessAndResult(const int32 Times);
    
    UFUNCTION(BlueprintCallable)
    void AddNotMeetTheBattleConditionRival(const FName in_not_meet_rival);
    
    UFUNCTION(BlueprintCallable)
    void AddNotClearObjectives(const TArray<FName> in_objectives);
    
    UFUNCTION(BlueprintCallable)
    void AddNotClearObjective(const FName in_objective);
    
    UFUNCTION(BlueprintCallable)
    void AddLongRunBonus(const FSRaceLongRunBonusInfo Info, const bool add_check_id);
    
    UFUNCTION(BlueprintCallable)
    void AddForcedAppearanceRival(const FName in_rival_id);
    
    UFUNCTION(BlueprintCallable)
    void AddEventForcedAddRivalInfo(const FSEventForcedAddRivalInfo event_forced_rival_info);
    
    UFUNCTION(BlueprintCallable)
    int64 AddCpForProcessAndResult(const ERacePrizeCpType Type, const int64 Cp, bool& is_garage_add, bool& is_pp);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCourseSegmentSpeedTrapInfo(const FSSegmentSpeedTrapInfo ss_info);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> AddCourseRival(const FSUserInfo& user_info, const ERunArea Area, const TArray<FTransform> enter_poss, const int32 add_num, const bool include_aready_won, const int32 random_seed);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCourseDrawLineInfo(const FSCourseLineInfo line_info);
    
    UFUNCTION(BlueprintCallable)
    void AddClearObjectives(const TArray<FName> in_objectives);
    
    UFUNCTION(BlueprintCallable)
    void AddClearObjective(const FName in_objective);
    
    UFUNCTION(BlueprintCallable)
    void AddBrokenVehicleInfo(const ECourseArea Area, const FSObstacleBrokenVehickeInfo Info);
    
};

