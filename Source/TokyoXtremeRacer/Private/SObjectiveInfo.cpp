#include "SObjectiveInfo.h"

FSObjectiveInfo::FSObjectiveInfo() {
    this->Area = ECourseSimpleArea::C1;
    this->AppearanceCheckType = ERivalAppearanceConditionCheckType::None;
    this->AppearanceORxNeedNum = 0;
    this->ClearCheckType = ERivalAppearanceConditionCheckType::None;
    this->ClearTargetType = EObjectiveClearTargetType::Rival;
    this->ClearORxNeedNum = 0;
    this->ClearedNextScene = EJumpScene::None;
    this->NotClearNextScene = EJumpScene::None;
    this->StartTutorialWhenDisplayed = EGameTutorialMode::None;
    this->StartTutorialWhenCleared = EGameTutorialMode::None;
    this->CourseOpenArea = ECourseOpenArea::None;
    this->StoryAxis = EStoryAxis::None;
    this->IsNotVisible = false;
    this->ActionWhenDisplayed = EObjectiveAction::None;
    this->ActionWhenCleared = EObjectiveActionWhenCleared::None;
    this->GarageBonusCpWhenCleared = 0;
    this->GarageBonusCpPrizeType = ERacePrizeCpType::Rival;
    this->GarageBonusPpWhenCleared = 0;
    this->GarageBonusPpPrizeType = ERacePrizeCpType::Rival;
    this->StagesThatChangeWhenCleared = EStoryStage::None;
}

