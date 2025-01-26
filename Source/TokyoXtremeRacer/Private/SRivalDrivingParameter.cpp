#include "SRivalDrivingParameter.h"

FSRivalDrivingParameter::FSRivalDrivingParameter() {
    this->ID = 0;
    this->TargetSpeedModifier = 0.00f;
    this->BlockMethod = EBlockMethod::BM_NeverBlock;
    this->OvertakeAbility = ERivalOvertakeAbility::ROA_Normal;
    this->RandomLaneChangeFrequancy = ERivalRandomLaneChange::RRLC_None;
    this->DriftPreference = ERivalDriftPreference::RDP_Normal;
    this->MaxTargetSpeedKmh = 0.00f;
    this->bIsNoLimitTargetSpeedForBehind = false;
}

