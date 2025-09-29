#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECarIceAspirationType.h"
#include "ECourseOpenArea.h"
#include "EEngineKind.h"
#include "EFFBWaveform.h"
#include "ERPDZoneAttribute.h"
#include "ERaceDayOfWeek.h"
#include "ERivalBattleBaseParameterTbl.h"
#include "ERivalDispSituation.h"
#include "ERivalPlacementSituation.h"
#include "ERivalSituation.h"
#include "ERunArea.h"
#include "ESkillTarget.h"
#include "EStoryStage.h"
#include "EVehicleTuneKind.h"
#include "EVehicleTuneLevel.h"
#include "EVehicleTuneLevelFlag.h"
#include "SBattleBaseInfo.h"
#include "SBattleTargetInfo.h"
#include "SBattleTargetInfos.h"
#include "SBrakeRotorParameter.h"
#include "SCarLicensePlate.h"
#include "SCarPaint.h"
#include "SCarTireConditionInfo.h"
#include "SCarTireDegradationInfo.h"
#include "SInternalMethodCarData.h"
#include "SMyCarInfo.h"
#include "SRivalAppearanceConditionInfo.h"
#include "SRivalBattleInfo.h"
#include "SRivalInfo.h"
#include "SRivalSituationInfo.h"
#include "STuneInfo.h"
#include "SUserInfo.h"
#include "BPFL_GameUtility.generated.h"

class UDataTable;
class UTuneParameter;
class UVehicleRaceInfo;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_GameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_GameUtility();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<float> UpdateTRUEFORCEArray(const TArray<float> in_a, const float in_dt, const float in_seg_dt);
    
    UFUNCTION(BlueprintCallable)
    static FSBattleTargetInfos UpdateBattleTargetInfos(const FSBattleTargetInfos in_infos, const int32 in_get_index, const FSBattleTargetInfo in_info);
    
    UFUNCTION(BlueprintCallable)
    static void RefrectTuneInfoToParameter(const TMap<EVehicleTuneKind, FSTuneInfo>& src_info, UTuneParameter* dst_param);
    
    UFUNCTION(BlueprintCallable)
    static void RefrectMyCarInfoToParameter(const FSMyCarInfo src_info, UTuneParameter* dst_param);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSameCarPaintData(const FSCarPaint& in_Paint_A, const FSCarPaint& in_Paint_B);
    
    UFUNCTION(BlueprintPure)
    static double GetYvalueFromXYarray(const double X, const TArray<double> xy_list);
    
    UFUNCTION(BlueprintCallable)
    static EVehicleTuneLevel GetVehicleTuneLevelFromFlag(const EVehicleTuneLevelFlag level_flag);
    
    UFUNCTION(BlueprintCallable)
    static EVehicleTuneLevelFlag GetVehicleTuneLevelFlag(const EVehicleTuneLevel Level);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ERPDZoneAttribute> GetValidZone(const ECourseOpenArea in_zone);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ERunArea> GetValidRunArea(const ECourseOpenArea in_open_area);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool GetRivalSituationInfoNewFlag(const FSRivalSituationInfo& Info, const bool is_win, const ERivalSituation keep_situation, ERivalSituation& out_situation);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalDriverLevel(const FSRivalInfo in_info);
    
    UFUNCTION(BlueprintCallable)
    static FSCarLicensePlate GetRandomLicensePlate(const int32 in_category);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPassingTiming(const double in_timer, const double in_first_wait_time, const double in_lighting_time, const double in_lighting_between_time, const double in_last_wait_time, bool& out_is_finished);
    
    UFUNCTION(BlueprintCallable)
    static TMap<EVehicleTuneKind, EVehicleTuneLevel> GetMaxTuneLevelAtStageFromPerk(const EStoryStage in_stage, const UDataTable* in_perk_root_datatable, int32& out_total_level);
    
    UFUNCTION(BlueprintPure)
    static TArray<double> GetGears(const FSInternalMethodCarData in_data);
    
    UFUNCTION(BlueprintCallable)
    static ERaceDayOfWeek GetDayOfWeek(const int32& Day);
    
    UFUNCTION(BlueprintCallable)
    static FSBattleTargetInfo GetBattleTargetInfo(const FSBattleTargetInfos in_infos, const int32 in_get_index);
    
    UFUNCTION(BlueprintCallable)
    static FSRivalBattleInfo GetBattleInfoFromDT(const UDataTable* data_table, ERivalBattleBaseParameterTbl Type, const int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static double ComputeTopSpeedAtGear(const double in_max_rpm, const double in_check_max_rpm, const double in_max_torque, const TArray<double> in_torque_map, const double in_gear, const double in_final_gear, const double in_mass, const double in_tire_radius, const double in_Cd, const double in_front_area, const double in_torque_coef, const double in_stop_acc_threshould, const double in_disp_scale, const double in_dt, const double in_start_rpm, const double in_start_speed, const double in_total_time, const double in_rrc, double& out_top_speed_rpm, double& out_total_time);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, int32> ComputeTireLifePercentage(const TMap<int32, double> in_tire_lives, const double in_front_tire_life_max, const double in_rear_tire_life_max);
    
    UFUNCTION(BlueprintCallable)
    static double ComputeTireGripRateFromDegradationInfo(const FSCarTireDegradationInfo in_degra_info, const double in_current_life, FSCarTireConditionInfo& out_condition_info, double& out_side_grip);
    
    UFUNCTION(BlueprintCallable)
    static bool ComputeSpRecoveryFromSkillTechnique(const ESkillTarget in_tec, const FSBattleBaseInfo in_base_info, const UVehicleRaceInfo* in_race_info, const double in_coef, double& out_recovery_value);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeSplitRateByDCCD(const double in_dt, const double in_speed, const double in_ang_vel, const double in_accele, const double in_brake, const double in_steer_angle, const bool in_side_brake, const double in_steer_limit_angle, const double in_a_split_rate, const double in_move_speed, const double in_old_rate_a, double& out_rate_a, double& out_rate_b);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeSplitRateByAYC(const double in_dt, const double in_speed, const double in_ang_vel, const double in_accele, const double in_brake, const double in_steer_angle, const double in_wheel_base, const double in_tread, const double in_inertia, const double in_force, const double in_move_rate, const double in_move_speed, const double in_old_rate_a, double& out_rate_a, double& out_rate_b);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeSplitRateByATTESA_ETS(const double in_dt, const double in_a_split_rate, const double in_a_force, const double in_b_force, const double in_b_max_force, const bool in_is_b_slip, const double in_move_speed, const double in_old_rate_a, double& out_rate_a, double& out_rate_b);
    
    UFUNCTION(BlueprintCallable)
    static bool ComputeSpDamageFromSkillTechnique(const double in_battle_time, const ESkillTarget in_tec, const FSBattleBaseInfo in_attacker_base_info, const UVehicleRaceInfo* in_attacker_info, const FSBattleBaseInfo in_defender_base_info, const UVehicleRaceInfo* in_defender_info, double& out_damage_value, bool& out_exe_defense_skill, bool& out_exe_attack_time_bonus, bool& out_exe_defense_time_bonus);
    
    UFUNCTION(BlueprintCallable)
    static bool ComputeSpDamage(const double in_dt, const double in_battle_time, const double in_distance_coef, const double in_attack_coef, const double in_defense_coef, const double in_max_damage, const FSBattleBaseInfo in_player_base_info, const UVehicleRaceInfo* in_player_info, const FSBattleBaseInfo in_rival_base_info, const UVehicleRaceInfo* in_rival_info, const double in_distance_from_player, const double in_base_distance, const bool in_use_pure_distance, const FSBattleTargetInfo in_targe_info, bool& out_is_player_attack_side, double& out_damage, double& out_use_distance, bool& out_exe_attack_time_bonus, bool& out_exe_defense_time_bonus, bool& out_exe_attack_coef, bool& out_exe_defence_coef, FSBattleTargetInfo& out_targe_info);
    
    UFUNCTION(BlueprintCallable)
    static int32 ComputeRewardBattlePoints(const int32 in_level, const bool in_is_first_win);
    
    UFUNCTION(BlueprintCallable)
    static double ComputeRearDriveRateFromSettingTorqueBalance(const double in_base_drive_rate, const double in_setting_torque_balance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> ComputePeriodicParameterForTRUEFORCE(const float in_duration_ms, const float in_seg_dt, const EFFBWaveform in_waveform, const float in_magnitude, const float in_offset, const float in_phase, const float in_period_ms);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeLsdParamByACD(const double in_speed, const double in_ang_vel, const double in_accele, const double in_brake, const double in_steer_angle, const bool in_side_brake, const double in_steer_limit_angle, double& out_lock_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> ComputeLinearInterpolation2(const float in_from, const float in_to, const float in_seg_dt, const float in_dt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> ComputeLinearInterpolation(const float in_from, const float in_to, const int32 in_num_of_div, const float in_dt, float& out_seg_dt);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeGearChangeRpmAndOtheresCore(const double in_max_rpm, const double in_check_max_rpm, const double in_max_torque, const TArray<double> in_torque_map, const int32 in_gear_num, const TArray<double> in_gears, const double in_final_gear, const double in_mass, const double in_tire_radius, const double in_Cd, const double in_front_area, const double in_torque_coef, const double in_stop_acc_threshould, const double in_disp_scale, const double in_dt, const TArray<double> in_time_check_speed, const TArray<double> in_shift_up_rpm, const double in_gear_change_time, const double in_rrc, TArray<double>& out_shift_up_rpms, TArray<double>& out_shift_down_rpms, TArray<double>& out_top_speed_at_gear, TMap<double, double>& out_result_time_check_speed);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeGearChangeRpmAndOtheres(const double in_max_rpm, const double in_check_max_rpm, const double in_max_torque, const TArray<double> in_torque_map, const int32 in_gear_num, const TArray<double> in_gears, const double in_final_gear, const double in_mass, const double in_tire_radius, const double in_Cd, const double in_front_area, const double in_torque_coef, const double in_stop_acc_threshould, const double in_disp_scale, const double in_dt, const double in_rrc, TArray<double>& out_shift_up_rpms, TArray<double>& out_shift_down_rpms, TArray<double>& out_top_speed_at_gear);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeEnginePhyiscsParameter(const EEngineKind in_engine_kind, const int32 in_engine_displacement, const ECarIceAspirationType in_engine_aspirationtype, double& out_engine_weight, double& out_com_offset_z);
    
    UFUNCTION(BlueprintCallable)
    static FRandomStream ComputeEachLevelFromDriverLevel(FRandomStream in_random_stream, const int32 in_level, const int32 in_max_level, int32& out_sp_level, int32& out_atk_level, int32& out_def_level, int32& out_phy_level, int32& out_level);
    
    UFUNCTION(BlueprintCallable)
    static double ComputeDopplerEffect(const double in_listener_v, const double in_target_v, const double in_target_f);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ComputeDampintFromStrength(const float in_strength, const float in_length, const float in_g_rate);
    
    UFUNCTION(BlueprintCallable)
    static float ComputeDampingForTRUEFORCE2(const float in_SAT, const float in_curren_steer_angle, const float in_current_steer_speed, const float in_max_damping, const float in_steer_angle_0_threshold, const float in_steer_angle_max_threshold);
    
    UFUNCTION(BlueprintCallable)
    static float ComputeDampingForTRUEFORCE(const float in_curren_steer_angle, const float in_current_steer_speed, const float in_inertia);
    
    UFUNCTION(BlueprintPure)
    static double ComputeBrakeRotorContactArea(const double in_rotor_inchi, const double in_pad_length_on_radius);
    
    UFUNCTION(BlueprintPure)
    static void ComputeBrakeRoterParam(const double in_default_temp, const double in_thickness, const double in_heat_dissipation_area, const double in_density, const double in_specific_heat, const double in_emissivity, double& out_heat_capacity, double& out_heat_dissipation_temp);
    
    UFUNCTION(BlueprintPure)
    static double ComputeBrakeRoterAddTemp(const double in_dt, const double in_current_temp, const double in_default_temp, const double in_Ek, const FSBrakeRotorParameter in_rotor_param, const double in_speed, const double in_del_temp_coef);
    
    UFUNCTION(BlueprintCallable)
    static double ComputeAirDragForce(const double in_speed, const double in_c, const double in_area);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> CombiningTRUEFORCEArray(const TArray<float> in_a, const TArray<float> in_b, const float in_max, const float in_min);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRivalPlacementSituation(const FName& rival_name_id, const ERivalPlacementSituation& placement_situation, const FSUserInfo& user_info);
    
    UFUNCTION(BlueprintCallable)
    static ERivalDispSituation CheckRivalDispSituation(const UDataTable* in_data_table, const FSUserInfo& in_user_info, const FName in_root_rival, int32& out_win_num);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRivalAppearance(const FSRivalAppearanceConditionInfo& rival_appear_cond, const FSUserInfo& user_info, const UDataTable* data_table, int32& clear_group_num);
    
    UFUNCTION(BlueprintCallable)
    static ERivalDispSituation CheckNormalAndKeepRivalDispSituation(const UDataTable* in_data_table, const FSUserInfo& in_user_info, const FName in_root_rival);
    
    UFUNCTION(BlueprintCallable)
    static ERivalDispSituation CheckKeepRivalDispSituation(const UDataTable* in_data_table, const FSUserInfo& in_user_info, const FName in_root_rival);
    
};

