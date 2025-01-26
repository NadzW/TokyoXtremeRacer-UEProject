#include "SParkingAreaConversationInfo.h"

FSParkingAreaConversationInfo::FSParkingAreaConversationInfo() {
    this->AppearanceType = EConversationAppearanceType::Once;
    this->CanAppearStage = EStoryStage::None;
    this->CanNotAppearStage = EStoryStage::None;
    this->IsImportant = false;
    this->Priority = EConversationPriority::Hi;
}

