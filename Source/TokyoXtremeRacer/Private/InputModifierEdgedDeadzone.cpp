#include "InputModifierEdgedDeadzone.h"

UInputModifierEdgedDeadzone::UInputModifierEdgedDeadzone() {
    this->bEnableX = false;
    this->bEnableY = false;
    this->bEnableZ = false;
    this->Threshold = 0.05f;
    this->UpperThreshold = 1.00f;
}


