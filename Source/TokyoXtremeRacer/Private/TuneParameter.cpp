#include "TuneParameter.h"

UTuneParameter::UTuneParameter() {
    this->max_torque_coef = 1.00f;
    this->add_front_axis_weight = 0.00f;
    this->add_rear_axis_weight = 0.00f;
    this->add_front_axis_weight_from_driver = 50.00f;
    this->add_rear_axis_weight_from_driver = 50.00f;
    this->WeightForTorqueCoef3 = 0.00f;
}


