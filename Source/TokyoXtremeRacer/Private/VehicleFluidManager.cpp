#include "VehicleFluidManager.h"

UVehicleFluidManager::UVehicleFluidManager() {
    this->Efficiency = 0.30f;
    this->OutsideTemp = 25.00f;
    this->EngineC = 500.00f;
    this->EngineMass = 60.00f;
    this->EngineTemp = 40.00f;
    this->BaseMaxRpm = 6000.00f;
    this->BaseMaxTorque = 300.00f;
    this->IsTurbo = false;
    this->InterCoolerBase = 30.00f;
    this->RpmHeatBoostRate = 0.05f;
    this->CurrentUseRpm = 0.00f;
    this->CurrentUseTorque = 0.00f;
    this->PeBoostCoef = 0.30f;
    this->HeatCoef = 1.00f;
}

void UVehicleFluidManager::Tick(const double in_dt, const double in_accele, const double in_omega, const double in_max_omega, const double in_torque, const double in_max_torque, const double in_speed, const double in_boost, const double in_wind_coef, bool& out_water_lamp_state_change, bool& out_oil_lamp_state_change, bool& out_water_lamp_is_on, bool& out_oil_lamp_is_on, bool& out_water_redzone_state_change, bool& out_oil_redzone_state_change, bool& out_water_inredzone, bool& out_oil_in_redozone) {
}

void UVehicleFluidManager::SetupType(const EVehicleFluidType in_type, const double in_c, const double in_mass, const double in_add_k_fan_on, const double in_k_thermostat_off, const double in_k_thermostat_on, const double in_thermostat_on_temp, const double in_fan_on_temp, const double in_current_temp, const double in_redzone_temp, const double in_check_lamp_temp, const double in_max_temp, const double in_heat_omeag_gain, const double in_cooler_base, const double in_cooler_alpha, const double in_thermal_conductivity_coef, const double in_heat_omega_rate, const double in_cooler_coef, const double in_heat_transfer_coef) {
}

void UVehicleFluidManager::Setup(const float in_base_max_torque, const bool in_is_turbo, const double in_intercoolerbase, const double in_hi_rpm_heat_boost_ate, const double in_engine_c, const double in_engine_mass, const double in_engine_temp, const double in_pe_boost_coef, const double in_heat_coef) {
}

double UVehicleFluidManager::GetRedzoneTemp(const EVehicleFluidType in_type) const {
    return 0.0;
}

double UVehicleFluidManager::GetCurrentTemp(const EVehicleFluidType in_type) const {
    return 0.0;
}


