#include "SRivalBasicThinking.h"

FSRivalBasicThinking::FSRivalBasicThinking() {
    this->Condition = ERivalBasicConditionPatterns::RBCP_AheadPlayer;
    this->ConditionValue = 0.00f;
    this->EffectKind = ERivalSpecEffectKind::RSEK_Torque;
    this->SpecEffect = ERivalSpecEffect::RSE_SmallUp;
    this->EffectTimeSecond = 0.00f;
    this->bIsBreakOnSuccess = false;
    this->CooldownSecond = 0.00f;
    this->CanBuffActivateCount = 0;
}

