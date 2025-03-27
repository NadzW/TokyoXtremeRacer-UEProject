#include "SCarTireDegradationInfo.h"

FSCarTireDegradationInfo::FSCarTireDegradationInfo() {
    this->Type = ECarTireType::Soft;
    this->MaxLife = 0.00f;
    this->CliffThreshold = 0.00f;
    this->MaxGripRate = 0.00f;
    this->CliffGripRate = 0.00f;
    this->MinGripRate = 0.00f;
    this->MaxSideGripRate = 0.00f;
    this->CliffSideGripRate = 0.00f;
    this->MinSideGripRate = 0.00f;
    this->SideGripCoef2 = 0.00f;
    this->ResistCoef = 0.00f;
    this->ResistSideCoef = 0.00f;
}

