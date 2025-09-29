#include "GenericControllerLayout.h"

FGenericControllerLayout::FGenericControllerLayout() {
    this->axes = 0;
    this->buttons = 0;
    this->hats = 0;
    this->balls = 0;
    this->hasForceFeedback_Rumble = false;
    this->hasForceFeedback_Constant = false;
    this->hasForceFeedback_Periodic = false;
    this->hasForceFeedback_Ramp = false;
    this->hasForceFeedback_Condition_Spring = false;
    this->hasForceFeedback_Condition_Damper = false;
    this->hasForceFeedback_Condition_Inertia = false;
    this->hasForceFeedback_Condition_Friction = false;
    this->hasForceFeedback_Autocenter = false;
    this->hasRumble = false;
    this->hasRumbleTriggers = false;
    this->controllerType = EGenericControllerType::Unknown;
    this->driverType = EGenericControllerDriverType::Unknown;
    this->isDirectInput = false;
}

