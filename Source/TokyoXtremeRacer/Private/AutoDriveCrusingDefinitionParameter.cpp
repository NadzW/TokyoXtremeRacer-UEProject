#include "AutoDriveCrusingDefinitionParameter.h"

FAutoDriveCrusingDefinitionParameter::FAutoDriveCrusingDefinitionParameter() {
    this->CrusingType = EAutoDriveCrusingType::ADCT_Normal;
    this->DefaultTargetSpeedKmh = 0.00f;
    this->DiffMinBaseCrusingSpeedKmh = 0.00f;
    this->DiffMaxBaseCrusingSpeedKmh = 0.00f;
}

