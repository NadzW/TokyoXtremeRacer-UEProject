#include "SRaceCoreInfo.h"

FSRaceCoreInfo::FSRaceCoreInfo() {
    this->Mode = ERaceMode::Battle;
    this->enable_position_update = false;
    this->TimeNotDriving = 0.00f;
    this->MaxTimeNotDriving = 0.00f;
}

