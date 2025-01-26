#include "SVehicleSettingSet.h"

FSVehicleSettingSet::FSVehicleSettingSet() {
    this->CamberFront = 0;
    this->CamberRear = 0;
    this->ToeFront = 0;
    this->ToeRear = 0;
    this->SpringFront = 0;
    this->SpringRear = 0;
    this->DumperFront = 0;
    this->DumperRear = 0;
    this->DumperBalanceFront = 0;
    this->DumperBalanceRear = 0;
    this->StabilizerFront = 0;
    this->StabilizerRear = 0;
    this->RideHeightFront = 0;
    this->RideHeightRear = 0;
    this->TorqueBalane = 0;
    this->BrakeBalaneFront = 0;
    this->BrakeBalaneRear = 0;
    this->TractionControl = 0;
    this->Abs = 0;
    this->OffsetFront = 0;
    this->OffsetRear = 0;
    this->LSDTypeFront = ECarLsdType::None;
    this->LSDFrontInitialTorque = 0;
    this->LSDFrontRatio = 0;
    this->LSDTypeRear = ECarLsdType::None;
    this->LSDRearInitialTorque = 0;
    this->LSDRearRatio = 0;
    this->FinalGearCoef = 0.00f;
}

