#include "InputActionMappingValue.h"

FInputActionMappingValue::FInputActionMappingValue() {
    this->SignalType = EInputSignalType::Button;
    this->Index = 0;
    this->bInvert = false;
    this->DeadZone = 0.00f;
    this->ReverseDeadzone = 0.00f;
    this->HatDirection = EInputHatDirection::Center;
}

