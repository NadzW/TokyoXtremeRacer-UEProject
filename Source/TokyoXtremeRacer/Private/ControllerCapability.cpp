#include "ControllerCapability.h"

FControllerCapability::FControllerCapability() {
    this->AxisCount = 0;
    this->ButtonCount = 0;
    this->HatCount = 0;
    this->ForceFeedbackEffectTypes = 0;
    this->hasRumble = false;
    this->hasRumbleTriggers = false;
    this->LedCount = 0;
    this->LedType = FWheelControllerLedType::Invalid;
    this->bIsXInputCapable = false;
    this->controllerType = EInputControllerType::Unknown;
    this->driverType = EControllerDriverType::Unknown;
    this->bIsDirectInputUsed = false;
}

