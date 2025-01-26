#include "SCustomCarPartsStruct.h"

FSCustomCarPartsStruct::FSCustomCarPartsStruct() {
    this->muffler_ = ECustomCarPartsType::Normal;
    this->front_bumper_ = ECustomCarPartsType::Normal;
    this->rear_bumper_ = ECustomCarPartsType::Normal;
    this->side_skirt_ = ECustomCarPartsType::Normal;
    this->bonnet_ = ECustomCarPartsType::Normal;
    this->rear_spoiler_ = ECustomCarPartsType::Normal;
    this->front_wheel_ = EWheelType::Normal;
    this->rear_wheel_ = EWheelType::Normal;
    this->front_bumper_winker_ = ECustomCarPartsType::Normal;
    this->rear_bumper_winker_ = ECustomCarPartsType::Normal;
}

