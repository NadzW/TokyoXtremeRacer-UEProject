#include "VehicleFluidInfo.h"

FVehicleFluidInfo::FVehicleFluidInfo() {
    this->C = 0.00f;
    this->Mass = 0.00f;
    this->kBaseThermostatOff = 0.00f;
    this->kBaseThermostatOn = 0.00f;
    this->AddkFanOn = 0.00f;
    this->ThermostatOnTemp = 0.00f;
    this->FanOnTemp = 0.00f;
    this->CurrentTemp = 0.00f;
    this->RedzoneTemp = 0.00f;
    this->CheckLampTemp = 0.00f;
    this->MaxTemp = 0.00f;
    this->HeatOmegaGain = 0.00f;
    this->CoolerBase = 0.00f;
    this->CoolerAlpha = 0.00f;
    this->OpenThermostat = false;
    this->OnFan = false;
    this->PowerRatio = 0.00f;
    this->OnLamp = false;
    this->CoolCoef = 0.00f;
    this->ThermalConductivityCoef = 0.00f;
    this->HeatOmegaRate = 0.00f;
    this->InRedzone = false;
    this->HeatTransferCoef = 0.00f;
}

