#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TireModelInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UTireModelInterface : public UInterface {
    GENERATED_BODY()
};

class ITireModelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWheelTireWeightMass(const double in_mass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTireMass(const double in_mass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector Update(const double in_dt, const FVector in_suspension_force, const FVector in_impact_point, const double in_input_accele, const double in_input_brake, const double in_steer_angle, const double in_input_sidebrake, const double in_torque_from_pu, const double in_omega_from_pu, const double in_drive_rate, const double in_normalize_load, const FVector in_point_speed, const double in_rolling_resist_coef, const double in_camber_from_suspension, const double in_grip, const double in_grip_for_sideforce, const double in_rrc, const bool in_go_ahead, const int32 in_gear_position, const double in_clutch_pos, const double in_grip_coef, const double in_grip_for_sideforce_coef, const double in_resist, const double in_resist_for_side, FVector& out_ground_point);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTireSpec(const double in_width, const double in_aspect_ratio, const double in_inchi, const double in_disp_scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTireSize(const double in_width, const double in_radius, const double in_disp_scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTireRelativeRotation(FRotator Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSprungMass(const double in_mass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSideGripCoef(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOrgRelativeRotation(const FRotator in_rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOrgRelativeLocation(const FVector in_location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOmega(const double in_omega);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMaxSideBrakeForce(const double in_torque);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMaxBrakeForce(const double in_torque);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGripCoef(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableTRC(const bool in_enable_trc);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableAbs(const bool in_enable_abs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetComputeSAT(const bool in_is_compute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBrakeSetting(const double in_abs_coef, const double in_brake_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBrakeRototorRelativeRotation(FRotator Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBrakeParameter(const double in_max_brake_force, const double in_max_sidebrake_force, const double in_abs_coef, const double in_brake_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBaseRelativeLocation(const FVector in_location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBaseParameter(const double in_wheel_tire_mass, const double in_sprung_mass, const double in_max_sf_slip_angle, const double in_sf_rise_coef, const double in_sf_fall_coef, const double in_total_mass, const bool in_is_drive_wheel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAlignmentParameter(const double in_camber_angle, const double in_toe_in_angle, const double in_total_tire_num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetUseCamberAngleFromSus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetUpVector();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetTireRelativeRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetTireRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetTireIsSpin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetTireIsLock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetTireDispRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetStaticLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetSprungMass();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetSideGripCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetSAT();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetRightVector();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPointVelocityLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetOrgRelativeRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetOrgRelativeLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsFront();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGripCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetForwardVector();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetEnableTRC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetEnableAbs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetDispRotator();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentTmpForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentMaxSideForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentMaxForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentDegladation(const double in_dt, const double in_degradation_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetBrakeRotorRelativeRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetBrakeEk();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetBlurAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetBaseRelativeLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetAcceleRateFromTRC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputeTireSmokeParameter(const double in_start_slip_angle, const double in_min_long_slip, const double in_min_speed, const double in_body_speed, const double in_output_lat_coef, const double in_output_lat_offset, const double in_output_long_coef, const double in_output_long_offset, double& out_parameter, double& out_speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double ComputeOmega(const double in_dt, const double in_body_speed, const double in_drive_speed, const double in_omea_rate, const bool in_is_drive_whee, const bool in_is_back_gear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double ComputeBrakeForce(const double in_input_brake);
    
};

