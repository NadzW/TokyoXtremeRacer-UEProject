#include "ControllerTrueForceCapability.h"

FControllerTrueForceCapability::FControllerTrueForceCapability() {
    this->HasTrueForce = false;
    this->KFMaxPeakTorqueInNm = 0.00f;
    this->KFMaxContinuousTorqueInNm = 0.00f;
    this->KFMaxDamping = 0.00f;
    this->TFMinSamplingRateInHz = 0.00f;
    this->TFMaxSamplingRateInHz = 0.00f;
}

