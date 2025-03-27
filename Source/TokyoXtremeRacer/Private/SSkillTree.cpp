#include "SSkillTree.h"

FSSkillTree::FSSkillTree() {
    this->ID = 0;
    this->Step = 0;
    this->Status = ESkillTreeStatus::STS_CAN_NOT_UNLOCK;
    this->Category = ESkillTreeCategory::STC_WALLET;
    this->Type_00 = ESkillTreeType::STT_NEW_WALLET;
    this->Type_01 = ESkillTreeType::STT_NEW_WALLET;
    this->Value_00 = 0.00f;
    this->Value_01 = 0.00f;
    this->Level = 0;
    this->Cost = 0;
    this->TuneParts = EVehicleTuneKind::PowerUnit;
    this->TuneEngine = EVehicleTuneEngine::None;
    this->AppearanceStage = EStoryStage::None;
    this->IsVisible = false;
    this->TreeNo = 0;
}

