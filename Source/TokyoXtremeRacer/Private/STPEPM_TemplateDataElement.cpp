#include "STPEPM_TemplateDataElement.h"

FSTPEPM_TemplateDataElement::FSTPEPM_TemplateDataElement() {
    this->EvaluateType = ETPEvaluatePointMethodType::None;
    this->bIsForcedSucceedOthercarFound = false;
    this->bIsTargetPositionRecursivelyNearShift = false;
    this->bUseLineTrace = false;
    this->bUseLineTraceOnWallDetect = false;
    this->OthercarDetectionDistance = 0.00f;
    this->BrakeConditionMethod = ETPBrakingWhenOtherCarType::ETPBWOT_None;
    this->UseBrakingJudgeResult = 0;
    this->bIsUpdateEvaluationResult = false;
    this->bIsAcceptRetargetInSteerSpeedDistanceRange = false;
    this->bIsOnlyExecNextOrderFromHitObstacle = false;
}

