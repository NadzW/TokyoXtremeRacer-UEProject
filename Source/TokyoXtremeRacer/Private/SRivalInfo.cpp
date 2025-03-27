#include "SRivalInfo.h"

FSRivalInfo::FSRivalInfo() {
    this->AppearanceSituation = ERivalAppearanceSituation::None;
    this->PlacementSituation = ERivalPlacementSituation::None;
    this->ID = 0;
    this->CarType = ECarType::BNR34;
    this->Area = ERunArea::ERA_None;
    this->ParkingArea = EParkingArea::PA_6_9_Hakozaki;
    this->ParkingAreaBattleStart = ECourseEnter::HW_C1_Ginza_Inner;
    this->Category = ERivalCategory::SecretBoss;
    this->CutInProductionType = ECarCutInProductionType::TeamLeader;
    this->CutInBunnerType = ECarCutInBunnerType::None;
    this->TeamID = 0;
    this->BattleCancelSituation = ERivalBattleCancelSituation::None;
    this->BattleBaseParameterTbl = ERivalBattleBaseParameterTbl::None;
    this->DriverLevel = 0;
    this->Sp = 0;
    this->SpAttack = 0;
    this->SPDiffence = 0;
    this->BonusCp = 0;
    this->GarageResultBonusCp = 0;
    this->RivalVinylStickerSetting = NULL;
    this->RivalWindowStickerSetting = NULL;
    this->UnlockTuneKind = EVehicleTuneKind::PowerUnit;
    this->UnlockTuneLevel = EVehicleTuneLevel::None;
    this->UnlockGarageSpace = false;
    this->AddWeight = 0;
    this->EventForcedRivalShouldLimitArea = false;
    this->PP = 0;
    this->ExeReferenceNotification = false;
    this->ShiftUpMinusRpm = 0.00f;
}

