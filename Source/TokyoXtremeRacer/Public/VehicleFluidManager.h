#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVehicleFluidType.h"
#include "VehicleFluidInfo.h"
#include "VehicleFluidManager.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UVehicleFluidManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Efficiency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OutsideTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EngineC;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EngineMass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EngineTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseMaxRpm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseMaxTorque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTurbo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InterCoolerBase;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RpmHeatBoostRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleFluidInfo WaterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleFluidInfo OilInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentUseRpm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentUseTorque;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PeBoostCoef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeatCoef;
    
    UVehicleFluidManager();

    UFUNCTION(BlueprintCallable)
    void Tick(const double in_dt, const double in_accele, const double in_omega, const double in_max_omega, const double in_torque, const double in_max_torque, const double in_speed, const double in_boost, const double in_wind_coef, bool& out_water_lamp_state_change, bool& out_oil_lamp_state_change, bool& out_water_lamp_is_on, bool& out_oil_lamp_is_on, bool& out_water_redzone_state_change, bool& out_oil_redzone_state_change, bool& out_water_inredzone, bool& out_oil_in_redozone);
    
    UFUNCTION(BlueprintCallable)
    void SetupType(const EVehicleFluidType in_type, const double in_c, const double in_mass, const double in_add_k_fan_on, const double in_k_thermostat_off, const double in_k_thermostat_on, const double in_thermostat_on_temp, const double in_fan_on_temp, const double in_current_temp, const double in_redzone_temp, const double in_check_lamp_temp, const double in_max_temp, const double in_heat_omeag_gain, const double in_cooler_base, const double in_cooler_alpha, const double in_thermal_conductivity_coef, const double in_heat_omega_rate, const double in_cooler_coef, const double in_heat_transfer_coef);
    
    UFUNCTION(BlueprintCallable)
    void Setup(const float in_base_max_torque, const bool in_is_turbo, const double in_intercoolerbase, const double in_hi_rpm_heat_boost_ate, const double in_engine_c, const double in_engine_mass, const double in_engine_temp, const double in_pe_boost_coef, const double in_heat_coef);
    
    UFUNCTION(BlueprintPure)
    double GetRedzoneTemp(const EVehicleFluidType in_type) const;
    
    UFUNCTION(BlueprintPure)
    double GetCurrentTemp(const EVehicleFluidType in_type) const;
    
};

