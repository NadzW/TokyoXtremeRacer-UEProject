#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPFL_VehicleBehavior.generated.h"

class UPrimitiveComponent;
class USceneComponent;
class USuspensionModelComponent;
class UTireModelComponent;

UCLASS(Blueprintable)
class VEHICLEBEHAVIOR_API UBPFL_VehicleBehavior : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_VehicleBehavior();

private:
    UFUNCTION(BlueprintCallable)
    static bool TireUpdate(const double in_dt, const TArray<UTireModelComponent*> in_tires, const double in_accele, const double in_brake, const double in_front_left_steer_angle, const double in_front_right_steer_angle, const double in_rear_left_steer_angle, const double in_rear_right_steer_angle, const double in_sidebrake, const double in_torque_from_pu, const double in_omega_from_pu, const double in_front_left_drive_rate, const double in_front_right_drive_rate, const double in_rear_left_drive_rate, const double in_rear_right_drive_rate, const double in_center_diff_front_rate, const double in_center_diff_rear_rate, const double in_rolling_regist_coef, const double in_front_grip, const double in_front_grip_coef, const double in_rear_grip, const double in_rear_grip_coef, const double in_front_side_grip, const double in_front_side_grip_coef, const double in_rear_side_grip, const double in_rear_side_grip_coef, const double in_front_rrc, const double in_rear_rrc, const bool in_is_go_ahead, const int32 in_gear_position, const double in_clutch_position, const double in_ex_front_grip_coef, const double in_ex_rear_grip_coef, const double in_ex_front_side_grip_coef, const double in_ex_rear_side_grip_coef, const double in_front_tire_resist, const double in_front_tire_resist_coef, const double in_rear_tire_resist, const double in_rear_tire_resist_coef, const double in_front_tire_side_resist, const double in_front_tire_side_resist_coef, const double in_rear_tire_side_resist, const double in_rear_tire_side_resist_coef, const bool in_is_no_move, UPrimitiveComponent* in_body);
    
    UFUNCTION(BlueprintCallable)
    static int32 SuspensionUpdate(const double in_dt, const TArray<USuspensionModelComponent*> in_suspensions, UPrimitiveComponent* in_body);
    
    UFUNCTION(BlueprintPure)
    static double ProcessPositiveAnalogValue(const double in_dt, const double in_rise_rate, const double in_fall_rate, const double in_current_value, const double in_target_value, const double in_value_scale);
    
    UFUNCTION(BlueprintPure)
    static double ProcessAnagloValueBase0(const double in_dt, const double in_rise_rate, const double in_fall_rate, const double in_current_value, const double in_target_value, const double in_value_scale);
    
    UFUNCTION(BlueprintPure)
    static bool IsToStationay(const double in_brake, const double in_handbrake, const double in_speed, const double in_speed_threshold);
    
    UFUNCTION(BlueprintPure)
    static void ComputeTireAngle(const double in_angle, const double in_wheel_base, const double in_tred, double& out_angle_leftside, double& out_angle_rightside);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeSuspensionBaseSpec(const double in_sprung_mass, const double in_compression_length, const double in_gravity, const double in_spring_coef, const double in_bumper_rubber_length, double& out_spring_strength, double& out_damping, double& out_bumper_rubber_strength);
    
    UFUNCTION(BlueprintPure)
    static void ComputeSteerAngleConsideringSlipAngle(const double in_limit_steer_angle, const double in_slip_angle, const double in_max_steer_angle, double& out_max_steer_angle, double& out_min_steer_angle);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeSplitRateFromLSD(const double in_dt, const double in_accele, const int32 in_type, const double in_torque_a, const double in_torque_b, const double in_a_split_rate, const double in_lock_rate, const double in_init_rate, const double in_move_rate, const double in_last_rate_a, double& out_rate_a, double& out_rate_b);
    
    UFUNCTION(BlueprintPure)
    static double ComputeMaxSteerAngleByVelocity(const double in_max_steer_angle, const double in_velocity, const double in_coef, const double in_min_steer_angle);
    
    UFUNCTION(BlueprintPure)
    static double ComputeCurrentSteerAngle(const double in_steer, const double in_default_steer_angle, const double in_max_steer_angle, const double in_min_steer_angle, const bool in_steer_input_value_is_always_same);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeBodySpeedAndOther(const USceneComponent* in_target, const double in_0_threshold, double& out_body_speed, double& out_forward_speed, double& out_slip_angle, double& out_vec_body_speed, bool& out_is_go_ahead);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckExeAbs(const double in_speed, const double in_check_speed_threshold, const double in_input_brake_from_abs, const double in_brake, double& out_use_brake);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyRollStabilizer(UPrimitiveComponent* Mesh, const double RollStiffness, const double RollDamping, const double MaxRollAngle, const double PitchStiffness, const double PitchDamping, const double MaxPitchAngle);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAntiRollBar(UPrimitiveComponent* in_target, const USuspensionModelComponent* in_sus_l, const USuspensionModelComponent* in_sus_r, const double in_bar_stiffness, const double in_max_diff, const bool in_is_downforce_only);
    
};

