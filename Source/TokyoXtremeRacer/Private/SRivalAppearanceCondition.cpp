#include "SRivalAppearanceCondition.h"

FSRivalAppearanceCondition::FSRivalAppearanceCondition() {
    this->Group = 0;
    this->Condition = ERivalAppearanceCondition::None;
    this->Value = 0;
    this->CarType = ECarType::BNR34;
    this->TimeZone = ERaceTimeZone::RTZ_1;
    this->ParkingArea = EParkingArea::PA_6_9_Hakozaki;
    this->DayOfWeek = ERaceDayOfWeek::Sun;
}

