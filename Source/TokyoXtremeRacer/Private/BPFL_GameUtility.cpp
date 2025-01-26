#include "BPFL_GameUtility.h"

UBPFL_GameUtility::UBPFL_GameUtility() {
}

void UBPFL_GameUtility::RefrectTuneInfoToParameter(const TMap<EVehicleTuneKind, FSTuneInfo>& src_info, UTuneParameter* dst_param) {
}

void UBPFL_GameUtility::RefrectMyCarInfoToParameter(const FSMyCarInfo src_info, UTuneParameter* dst_param) {
}

bool UBPFL_GameUtility::IsSameCarPaintData(const FSCarPaint& in_Paint_A, const FSCarPaint& in_Paint_B) {
    return false;
}

double UBPFL_GameUtility::GetYvalueFromXYarray(const double X, const TArray<double> xy_list) {
    return 0.0;
}

EVehicleTuneLevel UBPFL_GameUtility::GetVehicleTuneLevelFromFlag(const EVehicleTuneLevelFlag level_flag) {
    return EVehicleTuneLevel::None;
}

EVehicleTuneLevelFlag UBPFL_GameUtility::GetVehicleTuneLevelFlag(const EVehicleTuneLevel Level) {
    return EVehicleTuneLevelFlag::None;
}

TArray<ERPDZoneAttribute> UBPFL_GameUtility::GetValidZone(const ECourseOpenArea in_zone) {
    return TArray<ERPDZoneAttribute>();
}

TArray<ERunArea> UBPFL_GameUtility::GetValidRunArea(const ECourseOpenArea in_open_area) {
    return TArray<ERunArea>();
}

bool UBPFL_GameUtility::GetRivalSituationInfoNewFlag(const FSRivalSituationInfo& Info, const bool is_win) {
    return false;
}

FSCarLicensePlate UBPFL_GameUtility::GetRandomLicensePlate(const int32 in_category) {
    return FSCarLicensePlate{};
}

bool UBPFL_GameUtility::GetPassingTiming(const double in_timer, const double in_first_wait_time, const double in_lighting_time, const double in_lighting_between_time, const double in_last_wait_time, bool& out_is_finished) {
    return false;
}

TArray<double> UBPFL_GameUtility::GetGears(const FSInternalMethodCarData in_data) {
    return TArray<double>();
}

ERaceDayOfWeek UBPFL_GameUtility::GetDayOfWeek(const int32& Day) {
    return ERaceDayOfWeek::Sun;
}

FSRivalBattleInfo UBPFL_GameUtility::GetBattleInfoFromDT(const UDataTable* data_table, ERivalBattleBaseParameterTbl Type, const int32 Level) {
    return FSRivalBattleInfo{};
}

double UBPFL_GameUtility::ComputeTopSpeedAtGear(const double in_max_rpm, const double in_check_max_rpm, const double in_max_torque, const TArray<double> in_torque_map, const double in_gear, const double in_final_gear, const double in_mass, const double in_tire_radius, const double in_Cd, const double in_front_area, const double in_torque_coef, const double in_stop_acc_threshould, const double in_disp_scale, const double in_dt, const double in_start_rpm, const double in_start_speed, const double in_total_time, const double in_rrc, double& out_top_speed_rpm, double& out_total_time) {
    return 0.0;
}

TMap<int32, int32> UBPFL_GameUtility::ComputeTireLifePercentage(const TMap<int32, double> in_tire_lives, const double in_front_tire_life_max, const double in_rear_tire_life_max) {
    return TMap<int32, int32>();
}

double UBPFL_GameUtility::ComputeTireGripRateFromDegradationInfo(const FSCarTireDegradationInfo in_degra_info, const double in_current_life, FSCarTireConditionInfo& out_condition_info, double& out_side_grip) {
    return 0.0;
}

void UBPFL_GameUtility::ComputeSplitRateByDCCD(const double in_dt, const double in_speed, const double in_ang_vel, const double in_accele, const double in_brake, const double in_steer_angle, const bool in_side_brake, const double in_steer_limit_angle, const double in_a_split_rate, const double in_move_speed, const double in_old_rate_a, double& out_rate_a, double& out_rate_b) {
}

void UBPFL_GameUtility::ComputeSplitRateByAYC(const double in_dt, const double in_speed, const double in_ang_vel, const double in_accele, const double in_brake, const double in_steer_angle, const double in_wheel_base, const double in_tread, const double in_inertia, const double in_force, const double in_move_rate, const double in_move_speed, const double in_old_rate_a, double& out_rate_a, double& out_rate_b) {
}

void UBPFL_GameUtility::ComputeSplitRateByATTESA_ETS(const double in_dt, const double in_a_split_rate, const double in_a_force, const double in_b_force, const double in_b_max_force, const bool in_is_b_slip, const double in_move_speed, const double in_old_rate_a, double& out_rate_a, double& out_rate_b) {
}

double UBPFL_GameUtility::ComputeRearDriveRateFromSettingTorqueBalance(const double in_base_drive_rate, const double in_setting_torque_balance) {
    return 0.0;
}

void UBPFL_GameUtility::ComputeLsdParamByACD(const double in_speed, const double in_ang_vel, const double in_accele, const double in_brake, const double in_steer_angle, const bool in_side_brake, const double in_steer_limit_angle, double& out_lock_rate) {
}

void UBPFL_GameUtility::ComputeGearChangeRpmAndOtheresCore(const double in_max_rpm, const double in_check_max_rpm, const double in_max_torque, const TArray<double> in_torque_map, const int32 in_gear_num, const TArray<double> in_gears, const double in_final_gear, const double in_mass, const double in_tire_radius, const double in_Cd, const double in_front_area, const double in_torque_coef, const double in_stop_acc_threshould, const double in_disp_scale, const double in_dt, const TArray<double> in_time_check_speed, const TArray<double> in_shift_up_rpm, const double in_gear_change_time, const double in_rrc, TArray<double>& out_shift_up_rpms, TArray<double>& out_shift_down_rpms, TArray<double>& out_top_speed_at_gear, TMap<double, double>& out_result_time_check_speed) {
}

void UBPFL_GameUtility::ComputeGearChangeRpmAndOtheres(const double in_max_rpm, const double in_check_max_rpm, const double in_max_torque, const TArray<double> in_torque_map, const int32 in_gear_num, const TArray<double> in_gears, const double in_final_gear, const double in_mass, const double in_tire_radius, const double in_Cd, const double in_front_area, const double in_torque_coef, const double in_stop_acc_threshould, const double in_disp_scale, const double in_dt, const double in_rrc, TArray<double>& out_shift_up_rpms, TArray<double>& out_shift_down_rpms, TArray<double>& out_top_speed_at_gear) {
}

void UBPFL_GameUtility::ComputeEnginePhyiscsParameter(const EEngineKind in_engine_kind, const int32 in_engine_displacement, const ECarIceAspirationType in_engine_aspirationtype, double& out_engine_weight, double& out_com_offset_z) {
}

double UBPFL_GameUtility::ComputeDopplerEffect(const double in_listener_v, const double in_target_v, const double in_target_f) {
    return 0.0;
}

double UBPFL_GameUtility::ComputeBrakeRotorContactArea(const double in_rotor_inchi, const double in_pad_length_on_radius) {
    return 0.0;
}

void UBPFL_GameUtility::ComputeBrakeRoterParam(const double in_default_temp, const double in_thickness, const double in_heat_dissipation_area, const double in_density, const double in_specific_heat, const double in_emissivity, double& out_heat_capacity, double& out_heat_dissipation_temp) {
}

double UBPFL_GameUtility::ComputeBrakeRoterAddTemp(const double in_dt, const double in_Ek, const FSBrakeRotorParameter in_rotor_param, const double in_speed, const double in_del_temp_coef) {
    return 0.0;
}

double UBPFL_GameUtility::ComputeAirDragForce(const double in_speed, const double in_c, const double in_area) {
    return 0.0;
}

ERivalDispSituation UBPFL_GameUtility::CheckRivalDispSituation(const UDataTable* in_data_table, const FSUserInfo& in_user_info, const FName in_root_rival, int32& out_win_num) {
    return ERivalDispSituation::None;
}

bool UBPFL_GameUtility::CheckRivalAppearance(const FSRivalAppearanceConditionInfo& rival_appear_cond, const FSUserInfo& user_info, const UDataTable* data_table, int32& clear_group_num) {
    return false;
}


