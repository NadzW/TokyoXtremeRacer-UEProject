#include "SVehicleTuningSet.h"

FSVehicleTuningSet::FSVehicleTuningSet() {
    this->PowerUnit = EVehicleTuneLevel::None;
    this->IntakeSystem = EVehicleTuneLevel::None;
    this->ExhaustSystem = EVehicleTuneLevel::None;
    this->transmission = EVehicleTuneLevel::None;
    this->Clutch = EVehicleTuneLevel::None;
    this->Suspension = EVehicleTuneLevel::None;
    this->Brake = EVehicleTuneLevel::None;
    this->Body = EVehicleTuneLevel::None;
    this->FrontTire = EVehicleTuneLevel::None;
    this->RearTire = EVehicleTuneLevel::None;
    this->LSD = EVehicleTuneLevel::None;
    this->Nitro = EVehicleTuneLevel::None;
    this->AddWeight = 0;
    this->FinalGearRatioCoef = 0.00f;
}

