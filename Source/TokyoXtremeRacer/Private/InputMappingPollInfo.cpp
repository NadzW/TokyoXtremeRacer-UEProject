#include "InputMappingPollInfo.h"

FInputMappingPollInfo::FInputMappingPollInfo() {
    this->SignalType = EInputSignalType::Button;
    this->Index = 0;
    this->AxisValue = 0.00f;
    this->ButtonPressed = false;
    this->HatDirection = EInputHatDirection::Center;
}

