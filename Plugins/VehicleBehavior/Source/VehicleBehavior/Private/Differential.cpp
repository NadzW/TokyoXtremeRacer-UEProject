#include "Differential.h"

UDifferential::UDifferential() {
    this->Type = 0;
    this->InitLockRate = 0.00f;
    this->MaxLockRate = 0.00f;
    this->InvChangeSpeed = 1.00f;
    this->CurrentLockRate = 0.00f;
    this->CurrentTireTorqueL = 0.00f;
    this->CurrentTireTorqueR = 0.00f;
    this->IsAcceleOn = false;
}

void UDifferential::Update(const double in_dt, const double in_accele, const double in_tire_omega_l, const double in_tire_omega_r, const bool in_tire_is_slip_l, const bool in_tire_is_slip_r, const double in_tire_max_torqu_l, const double in_tire_max_torque_r, const double in_pu_torque, double& out_torque_rate_l, double& out_torque_rate_r) {
}

void UDifferential::SetParameter(const int32 in_type, const double in_init_lock_rate, const double in_max_lock_rate, const double in_change_speed) {
}


