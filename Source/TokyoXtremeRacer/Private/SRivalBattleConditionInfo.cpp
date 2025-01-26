#include "SRivalBattleConditionInfo.h"

FSRivalBattleConditionInfo::FSRivalBattleConditionInfo() {
    this->Condition = ERivalBattleCondition::None;
    this->DriveType = EDriveType::DT_FF;
    this->EngineKind = EEngineKind::Straight2;
    this->AspirationType = ECarIceAspirationType::NA;
    this->PlaceNameIndex = ECarLicensePlateArea::Logo;
}

