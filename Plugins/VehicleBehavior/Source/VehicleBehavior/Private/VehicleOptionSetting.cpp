#include "VehicleOptionSetting.h"

FVehicleOptionSetting::FVehicleOptionSetting() {
    this->steer_input_rise_rate = 0.00f;
    this->steer_input_fall_rate = 0.00f;
    this->steer_limit_angle_enabled = false;
    this->steer_input_is_digital = false;
    this->accele_input_rise_rate = 0.00f;
    this->accele_input_fall_rate = 0.00f;
    this->accele_input_is_digital = false;
    this->brake_input_rise_rate = 0.00f;
    this->brake_input_fall_rate = 0.00f;
    this->brake_input_is_digital = false;
    this->sidebrake_input_rise_rate = 0.00f;
    this->sidebrake_input_fall_rate = 0.00f;
    this->sidebrake_input_is_digital = false;
}

