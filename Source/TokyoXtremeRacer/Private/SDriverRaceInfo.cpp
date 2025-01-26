#include "SDriverRaceInfo.h"

FSDriverRaceInfo::FSDriverRaceInfo() {
    this->ID = 0;
    this->Level = 0;
    this->Area = ERunArea::ERA_None;
    this->CpEarned = 0;
    this->Sp = 0.00f;
    this->SpAttack = 0;
    this->SpDiffecnce = 0;
    this->Courage = 0;
    this->BonusCp = 0;
    this->battle_num = 0;
    this->win_num = 0;
    this->lose_num = 0;
    this->draw_num = 0;
    this->winning_streak = 0;
    this->max_winning_streak = 0;
    this->Mileages = 0.00f;
    this->MaxSpeed = 0.00f;
}

