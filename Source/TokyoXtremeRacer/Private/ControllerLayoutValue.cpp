#include "ControllerLayoutValue.h"

FControllerLayoutValue::FControllerLayoutValue() {
    this->Direction = EControllerLayoutDirection::None;
    this->SpringLoadedDirection = EControllerLayoutSpringLoadedDirection::Unknown;
    this->PolarityDirection = EControllerLayoutPolarityDirection::AsInMath;
}

