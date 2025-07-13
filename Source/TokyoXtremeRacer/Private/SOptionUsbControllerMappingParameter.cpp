#include "SOptionUsbControllerMappingParameter.h"

FSOptionUsbControllerMappingParameter::FSOptionUsbControllerMappingParameter() {
    this->Vibration = false;
    this->PointerSpeed = 0;
    this->ForceFeedBack = 0;
    this->ForceFeedBackSpring = 0;
    this->ForceFeedBackCollision = 0;
    this->ForceFeedBackRoad = 0;
    this->ForceFeedBackGearChange = 0;
    this->TrueForce = false;
    this->TrueforceTorque = 0;
    this->HandleRotationAngleMax = 0;
    this->HandleRudderAngleAdjust = false;
}

