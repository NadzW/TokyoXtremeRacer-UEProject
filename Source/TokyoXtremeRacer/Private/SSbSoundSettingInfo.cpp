#include "SSbSoundSettingInfo.h"

FSSbSoundSettingInfo::FSSbSoundSettingInfo() {
    this->Option_MasterVolumn = 0;
    this->Option_BgmVolumn = 0;
    this->Option_SeVolumn = 0;
    this->Option_CarVolumn = 0;
    this->Option_SoundQuality = EOP_Scalability::OP_LOW;
    this->Option_BattleBgmTiming = EOP_BattleBgmTiming::OP_AfterBattleStart;
}

