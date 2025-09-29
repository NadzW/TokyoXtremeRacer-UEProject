#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PowerUnitModelInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPowerUnitModelInterface : public UInterface {
    GENERATED_BODY()
};

class IPowerUnitModelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update(const double in_dt, const double in_drive_speed, const double in_accele, const double in_clutch_pos, const double in_side_brake, const bool in_is_spin, const bool in_is_safemode, double& out_torque, double& out_new_drive_speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTurboParameter(const TArray<double>& in_torque_map_for_non_boost, const double in_max_boost_pressure, const double in_turbin_omega_rise_coef, const double in_turbin_omega_drag_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTurbineOmegaRiseCoef(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTransmissionParameter(const TArray<double>& in_gears, const double in_final_gear, const double in_reverse_gear, const bool in_is_auto_gear_change, const bool in_is_auto_clutch);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTransmissionEfficiency(const double in_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTorqueCoef3(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTorqueCoef2(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTorqueCoef(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetShiftAssistChnageLock(const bool in_is_lock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPowerUnitMoiCoef(const double in_moi_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPowerUnitMoi(const double in_moi);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPowerUnitBrakeCoef(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMaxTorque(const double in_torque);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsStartedEngine(const bool in_is_start);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsIcuRotary(const bool in_is_rotary);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsAutoGearChange(const bool in_is_auto, const bool in_is_auto_clutch);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIcuBaseParameter(const double in_redzone_omega, const double in_revlimit_omega, const double in_max_omega, const double in_max_torque, const TArray<double>& in_torque_map, const double in_max_torque_coef, const bool in_is_rotary_engine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearUpOmegas(const TArray<double>& in_gear_up_omegas);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearUp(const bool is_at);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearRatios(const double in_final_gear_ratio, const TArray<double>& in_gear_ratios);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearRatio(const int32 in_gear_no, const double in_gear_ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearPosition(const int32 in_next_pos, const bool in_is_force);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearMoiCoef(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearDownOmegas(const TArray<double>& in_gear_down_omegas);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearDown(const bool is_at);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearChangeWaitTime(const double in_time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearChangeTime(const double in_time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGearChangeCoef(const double in_coef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnabledAntiLagSystem(const bool in_is_enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableAfterFireNeedPool(const double in_need_pool);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableAfterFire(const bool in_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetClutchForce(const double in_force);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetClutchChangeTime(const double in_time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetChassisMoi(const double in_moi);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitFinalize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetVehicleOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetUseAccele();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetTurbineOmegaRiseCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetTorqueCoef3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetTorqueCoef2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetTorqueCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetRevLimitOmegaCoefAtSafemode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetRevlimitOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetReverseGear();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetRedzoneOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetPuOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetPowerUnitMoi();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetPowerUnitBrakeCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetMaxTorqueOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetMaxTorqueCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetMaxTorque();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetMaxPowerOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetMaxPower();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetMaxOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetMaxBoostPressure();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsStartedEngine();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsSparkCutMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsIdling();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsCluthLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetIdleOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGearUpOmegaRate(const int32 in_gear_no);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<double> GetGears();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGearRatio(const int32 in_position);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetGearNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGearMoiCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGearDownOmegaRate(const int32 in_gear_no);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGearChangeWaitTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGearChangeWaitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetGearChangeTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetFinalGear();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetEnabledAntiLagSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentTorque(const bool in_is_pure);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentOmega();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentGearPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetCurrentBoostPressure();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetClutchPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetClutchForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetClutchChangeTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    double GetChassisMoi();
    
};

