#include "SRivalAIParameterInfo.h"

FSRivalAIParameterInfo::FSRivalAIParameterInfo() {
    this->bIsOverrideBattleParameter = false;
    this->bIsOverrideOnBattleEvaluationOrder = false;
    this->bIsOverrideOnCrusingEvaluationOrder = false;
    this->FrontGripCoef = 0.00f;
    this->SideGripCoef = 0.00f;
    this->IsUseWinkerInBattle = false;
    this->IsBrakeUpDown = false;
    this->BrakeUpDownSensitive = 0.00f;
}

