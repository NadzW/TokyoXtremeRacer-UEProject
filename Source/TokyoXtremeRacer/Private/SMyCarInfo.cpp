#include "SMyCarInfo.h"

FSMyCarInfo::FSMyCarInfo() {
    this->IsReplacedEngine = false;
    this->Mileages = 0.00f;
    this->MaxSpeed = 0.00f;
    this->FrontTireType = ECarTireType::Soft;
    this->RearTireType = ECarTireType::Soft;
    this->NumberOfCourseEntries = 0;
    this->OrgGenuineColor = 0;
}

