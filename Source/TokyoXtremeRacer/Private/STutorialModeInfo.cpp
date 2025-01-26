#include "STutorialModeInfo.h"

FSTutorialModeInfo::FSTutorialModeInfo() {
    this->Mode = EGameTutorialMode::None;
    this->DisplayPopupOutGameScene = EJumpScene::None;
    this->InGamePauseIsPopup = false;
    this->NextModeAction = ETutorialAction::None;
    this->NextMode = EGameTutorialMode::None;
    this->NextModeActionJumpScene = EJumpScene::None;
}

