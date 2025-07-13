#include "STPEvaluateScanTPResult.h"

FSTPEvaluateScanTPResult::FSTPEvaluateScanTPResult() {
    this->OutOtherCarIsDetected = false;
    this->OutIsOtherCarRelativeSpeedKmh = false;
    this->OutOtherCarRelativeSpeedKmh = 0.00f;
    this->OutOtherCarRelativeDistance = 0.00f;
    this->OutOtherCarAbsoluteSpeedKmh = 0.00f;
    this->OutbIsMultipleRPD = false;
    this->OutResultRPDIndex = 0;
    this->OutOtherCarIsObstacle = false;
    this->OutTargetRPDKey = 0.00f;
    this->OutTargetLaneRate = 0.00f;
    this->OutHitedRelativeDistance = 0.00f;
}

