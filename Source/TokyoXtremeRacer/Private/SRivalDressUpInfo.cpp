#include "SRivalDressUpInfo.h"

FSRivalDressUpInfo::FSRivalDressUpInfo() {
    this->Muffler = ECustomCarPartsType::Normal;
    this->FrontBumper = ECustomCarPartsType::Normal;
    this->RearBumper = ECustomCarPartsType::Normal;
    this->SideSkirt = ECustomCarPartsType::Normal;
    this->Bonnet = ECustomCarPartsType::Normal;
    this->RearSpoiler = ECustomCarPartsType::Normal;
    this->FrontTireInchiUp = 0;
    this->FrontTireWidthAdd = 0;
    this->FrontTirePulling = 0;
    this->RearTireInchiUp = 0;
    this->RearTireWidthAdd = 0;
    this->RearTirePulling = 0;
    this->FrontBrakeRotorInch = 0;
    this->FrontBrakeCaliperAngle = 0;
    this->RearBrakeRotorInch = 0;
    this->RearBrakeCaliperAngle = 0;
    this->NeonFrontType = ENeonLightType::Type1;
    this->NeonFrontCycle = 0;
    this->NeonRearType = ENeonLightType::Type1;
    this->NeonRearCycle = 0;
    this->NeonLeftType = ENeonLightType::Type1;
    this->NeonLeftCycle = 0;
    this->NeonRightType = ENeonLightType::Type1;
    this->NeonRightCycle = 0;
    this->RivalVinylStickerSetting = NULL;
    this->RivalWindowStickerSetting = NULL;
}

