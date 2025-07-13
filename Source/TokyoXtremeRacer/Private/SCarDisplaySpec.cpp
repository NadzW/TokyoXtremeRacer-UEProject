#include "SCarDisplaySpec.h"

FSCarDisplaySpec::FSCarDisplaySpec() {
    this->Displacement = 0;
    this->DriveType = ECarDriveType::FF;
    this->PowerUnitType = ECarPowerUnitType::ICE_Inline;
    this->IceAspirationType = ECarIceAspirationType::NA;
    this->MaxTorque = 0;
    this->MaxTorqueRpm = 0;
    this->MaxPower = 0;
    this->MaxPowerRpm = 0;
    this->RedZoneRpm = 0;
    this->MaxRpm = 0;
    this->FinalGearRatio = 0.00f;
    this->Weight = 0.00f;
    this->MaxSpeed = 0.00f;
    this->TimeToReachXXX = 0.00f;
}

