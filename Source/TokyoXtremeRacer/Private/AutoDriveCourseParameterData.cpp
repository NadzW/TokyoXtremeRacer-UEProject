#include "AutoDriveCourseParameterData.h"

UAutoDriveCourseParameterData::UAutoDriveCourseParameterData() {
    this->OvertakeMethod = EOvertakeMethod::OM_NotOvertake;
}

int32 UAutoDriveCourseParameterData::CalculateValidNitroParameterSize() const {
    return 0;
}

int32 UAutoDriveCourseParameterData::CalculateValidDriftParameterSize() const {
    return 0;
}


