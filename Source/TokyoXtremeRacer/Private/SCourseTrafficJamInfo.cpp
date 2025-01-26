#include "SCourseTrafficJamInfo.h"

FSCourseTrafficJamInfo::FSCourseTrafficJamInfo() {
    this->Area = ERunArea::ERA_None;
    this->StartInputKey = 0.00f;
    this->EndInputKey = 0.00f;
    this->IsIgnoreLane = false;
    this->IsRightLane = false;
    this->CrusingSpeed = 0.00f;
    this->SubArea = ERunArea::ERA_None;
    this->SubStartInputKey = 0.00f;
    this->SubEndInputKey = 0.00f;
}

