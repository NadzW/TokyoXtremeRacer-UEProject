#include "S_ReplayFileSizeInfo.h"

FS_ReplayFileSizeInfo::FS_ReplayFileSizeInfo() {
    this->HeaderSize = 0;
    this->SteamingSize = 0;
    this->CheckpointSize = 0;
    this->TempHeaderSize = 0;
    this->TempSteamingSize = 0;
    this->TempCheckpointSize = 0;
}

