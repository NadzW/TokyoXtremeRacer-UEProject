#include "SObjectiveProgress.h"

FSObjectiveProgress::FSObjectiveProgress() {
    this->State = EObjectiveState::NotDisplayed;
    this->TaskNum = 0;
    this->ClearTaskNum = 0;
    this->IsUpdate = false;
}

