#include "SEngineLevelData.h"

FSEngineLevelData::FSEngineLevelData() {
    this->Level = 0;
    this->RevLimit = 0;
    this->RedZoon = 0;
    this->Displacement = 0;
    this->MaxRpm = 0;
    this->MaxPower_ps = 0;
    this->MaxPowerRpm = 0;
    this->MaxTorque_kg_m = 0.00f;
    this->MaxTorqueRpm = 0;
    this->MaxBoostNum = 0.00f;
    this->TachoMeter = 0;
    this->BoostMeter = 0;
    this->IsTurbo = false;
    this->Weight = 0;
    this->MaxTorqueCoef = 0.00f;
}

