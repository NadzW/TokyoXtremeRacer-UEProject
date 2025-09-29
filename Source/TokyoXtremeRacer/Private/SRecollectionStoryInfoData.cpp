#include "SRecollectionStoryInfoData.h"

FSRecollectionStoryInfoData::FSRecollectionStoryInfoData() {
    this->sort_index = 0;
    this->story_category = ERecollectionStoryCategory::None;
    this->stage = EStoryStage::None;
    this->story_line = ERecollectionStoryLineType::None;
    this->gossip_index = 0;
    this->is_valid = false;
}

