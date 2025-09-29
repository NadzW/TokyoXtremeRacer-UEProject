#include "TireModelComponent.h"
#include "Net/UnrealNetwork.h"

UTireModelComponent::UTireModelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Width = 0.23f;
    this->Radius = 0.33f;
    this->inv_radius = 3.03f;
    this->side_force_coef = 1.00f;
    this->max_sf_slip_angle = 20.00f;
    this->sf_rise_coef = 3.00f;
    this->sf_fall_coef = 3.00f;
    this->tire_wheel_mass = 20.00f;
    this->max_brake_force = 4000.00f;
    this->max_sidebrake_force = 10000.00f;
    this->moi = 1.00f;
    this->inv_moi = 1.00f;
    this->is_front = false;
    this->is_right = false;
    this->sprung_mass = 250.00f;
    this->gravity_z_abs = 9.80f;
    this->camber_angle = 0.00f;
    this->toe_in_angle = 0.00f;
    this->total_tire_num = 4.00f;
    this->enable_abs = true;
    this->abs_coef = 0.80f;
    this->brake_coef = 1.00f;
    this->drive_rate = 0.00f;
    this->omega = 0.00f;
    this->forward_speed = 0.00f;
    this->torque_from_pu = 0.00f;
    this->current_brake_force = 0.00f;
    this->current_steer_angle = 0.00f;
    this->normalized_load = 0.00f;
    this->input_brake = 0.00f;
    this->input_sidebrake = 0.00f;
    this->current_load = 0.00f;
    this->side_force = 0.00f;
    this->forward_force = 0.00f;
    this->speed_0_threshold = 1.00f;
    this->current_grip = 0.00f;
    this->current_slip_angle = 0.00f;
    this->side_force_regist = 0.00f;
    this->forward_force_regist = 0.00f;
    this->current_camber_angle = 0.00f;
    this->camber_thrust_coef = 40.00f;
    this->point_speed = 0.00f;
    this->point_speed_pure = 0.00f;
    this->current_grip_for_sideforce = 0.00f;
    this->circle_length = 0.00f;
    this->lat_slip = 0.00f;
    this->tire_torque = 0.00f;
    this->friction_limit_coef = 1.00f;
    this->add_rotation_x = 0.00f;
    this->mu = 0.00f;
    this->lock = false;
    this->Spin = false;
    this->long_slip_rate = 0.00f;
    this->blur_angle = 0.00f;
    this->running_abs = false;
    this->abs_running_time = 0.00f;
    this->abs_running_cos = true;
    this->grip_coef = 1.00f;
    this->side_grip_coef = 1.00f;
    this->max_forward_force = 0.00f;
    this->max_side_force = 0.00f;
    this->tmp_forward_force = 0.00f;
    this->brake_Ek = 0.00f;
    this->total_mass = 0.00f;
    this->trc_torque_rate = 0.00f;
    this->omega_from_pu = 0.00f;
    this->input_accele = 0.00f;
    this->disp_radius = 0.00f;
    this->inv_disp_radius = 0.00f;
    this->SAT = 0.00f;
    this->compute_SAT = true;
    this->abs_start_omega_vector = 0.00f;
    this->enable_trc = false;
    this->disp_scale = 1.00f;
    this->input_brake_from_abs = 0.00f;
    this->bRollRev = false;
    this->brake_rotor_angle = 0.00f;
    this->is_drive_wheel = true;
    this->use_camber_angle_from_suspension = 0.00f;
}

void UTireModelComponent::UpdateRotationForBP(const double dt, const double in_camber_angle_from_sus) {
}

void UTireModelComponent::OnRepRotationRotor() {
}

void UTireModelComponent::OnRepRotation() {
}

void UTireModelComponent::OnRepBlur() {
}

void UTireModelComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTireModelComponent, blur_angle);
    DOREPLIFETIME(UTireModelComponent, rep_rotation_rotor);
    DOREPLIFETIME(UTireModelComponent, rep_rotation);
}


