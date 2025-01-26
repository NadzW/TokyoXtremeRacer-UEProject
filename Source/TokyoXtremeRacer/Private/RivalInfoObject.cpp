#include "RivalInfoObject.h"

URivalInfoObject::URivalInfoObject() {
    this->Emblem = NULL;
}

void URivalInfoObject::LoadEmblem() {
}

FSRivalBattleInfo URivalInfoObject::GetFixBattleInfo(const UDataTable* data_table) {
    return FSRivalBattleInfo{};
}


