#include "SMapInfo.h"

FSMapInfo::FSMapInfo() {
    this->OG_Map_Scale = 0.00f;
    this->IG_Map_Scale = 0.00f;
    this->is_first_time_course_in = false;
    this->LastSelectedCourceEnter = ECourseEnter::HW_C1_Ginza_Inner;
    this->LastSelectedParkingArea = EParkingArea::PA_6_9_Hakozaki;
}

