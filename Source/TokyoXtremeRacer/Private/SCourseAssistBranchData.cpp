#include "SCourseAssistBranchData.h"

FSCourseAssistBranchData::FSCourseAssistBranchData() {
    this->LabelType = ECourseAssistType::None;
    this->SignType = ECourseAssistSign::ECAS_Normal;
    this->IconType = ECourseAssistIcon::ECAI_C1;
    this->RunArea = ERunArea::ERA_None;
}

