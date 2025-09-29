#include "abs.h"

Uabs::Uabs() {
    this->InControll = false;
    this->ModeIsBraking = false;
    this->Timer = 0.00f;
    this->NotLockTime = 0.00f;
    this->BrakingTime = 0.15f;
    this->NoBrakingTime = 0.07f;
    this->ControllExitNotLockTime = 0.15f;
}

double Uabs::Update(const double in_dt, const double in_input_brake, const bool in_is_lock) {
    return 0.0;
}

void Uabs::Setup(const double in_braking_time, const double in_no_braking_time, const double in_controll_exit_time) {
}


