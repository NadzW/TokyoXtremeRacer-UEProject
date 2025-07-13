#include "BadNameConditionData.h"

FBadNameConditionData::FBadNameConditionData() {
    this->ID = 0;
    this->DisplayType = EBadNameDisplayType::MT_Full;
    this->ConditionType = EBadNameConditionType::MT_One;
    this->ConditionSubType = EBadNameConditionSubType::MT_None;
    this->Priority = 0;
    this->IsFirstTimeOnly = false;
    this->SortIndex = 0;
    this->ComparisonValue_01 = 0;
    this->ComparisonValue_02 = 0;
    this->ComparisonValue_03 = 0;
    this->ComparisonValue_04 = 0;
}

