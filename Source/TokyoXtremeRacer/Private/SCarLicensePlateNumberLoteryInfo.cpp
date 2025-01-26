#include "SCarLicensePlateNumberLoteryInfo.h"

FSCarLicensePlateNumberLoteryInfo::FSCarLicensePlateNumberLoteryInfo() {
    this->LoteryProbability = 0;
    this->IsRandom = false;
    this->IndividualNumber1000 = 0;
    this->IndividualNumber0100 = 0;
    this->IndividualNumberHyphen = 0;
    this->IndividualNumber0010 = 0;
    this->IndividualNumber0001 = 0;
    this->ForcedArea = ECarLicensePlateArea::Logo;
}

