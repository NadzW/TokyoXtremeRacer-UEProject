#include "VehicleRaceInfo.h"

UVehicleRaceInfo::UVehicleRaceInfo() {
    this->Level = 0;
    this->MaxSP = 0;
    this->CurrentSp = 0.00f;
    this->SpAttack = 0;
    this->SPDiffence = 0;
    this->WallShockResistancePer = 0;
    this->CarShockResistancePer = 0;
    this->DistanceFromPlayer = 0.00f;
    this->BattleStatus = EDriverBattleStatus::None;
}

void UVehicleRaceInfo::SetWallShockResistancePer(const int32 Value) {
}

void UVehicleRaceInfo::SetupBase(const int32 _level, const int32 max_sp, const double current_sp, const int32 sp_attack, const int32 sp_diffence) {
}

double UVehicleRaceInfo::SetSp(const double Sp, const bool is_current) {
    return 0.0;
}

void UVehicleRaceInfo::SetCarShockResistancePer(const int32 Value) {
}

double UVehicleRaceInfo::AddSp(const double Sp, const bool is_current) {
    return 0.0;
}


