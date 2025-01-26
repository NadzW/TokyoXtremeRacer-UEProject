#include "AutoDriveDriverParameterData.h"

UAutoDriveDriverParameterData::UAutoDriveDriverParameterData() {
    this->NitroIndex = 0;
    this->UseNitroCornerRIndex = 0;
    this->UseNitroStraightCmIndex = 0;
    this->DriftIndex = 0;
    this->OvertakeMethod = EOvertakeMethod::OM_NotOvertake;
    this->bIsOvertakeWithNitro = false;
    this->DriftCornerRIndex = 0;
    this->DriftOverSpeedKmhIndex = 0;
    this->bIsEnableNitro = true;
    this->bIsEnableDrift = true;
    this->DrivingLineScalarIndex = 0;
    this->AbilityAIType = EAbilityAIType::EAAIType_Disable;
}


