#include "SAchievementsInfo.h"

FSAchievementsInfo::FSAchievementsInfo() {
    this->Kind = EAchievementsKind::None;
    this->IsCheckOR = false;
    this->StoryKind = EStoryKind::None;
    this->Grade = EAchievementsGrade::Hidden;
    this->NeedProgressInfo = false;
}

