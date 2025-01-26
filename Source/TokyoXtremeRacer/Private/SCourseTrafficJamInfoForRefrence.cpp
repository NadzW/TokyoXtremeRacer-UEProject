#include "SCourseTrafficJamInfoForRefrence.h"

FSCourseTrafficJamInfoForRefrence::FSCourseTrafficJamInfoForRefrence() {
    this->Area = ERunArea::ERA_None;
    this->StartInputKey = 0.00f;
    this->EndInputKey = 0.00f;
    this->IsIgnoreLane = false;
    this->IsRightLane = false;
    this->CrusingSpeed = 0.00f;
}

