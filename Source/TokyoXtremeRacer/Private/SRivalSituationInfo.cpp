#include "SRivalSituationInfo.h"

FSRivalSituationInfo::FSRivalSituationInfo() {
    this->Situation = ERivalSituation::None;
    this->WinNum = 0;
    this->LoseNum = 0;
    this->DrawNum = 0;
    this->IsCalledUnlockAnimation = false;
    this->IsCalledDefeatAnimation = false;
    this->IsHearRumors = false;
    this->IsReadRumors = false;
    this->IsReadProfile = false;
}

