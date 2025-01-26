#include "BPFL_ReplayFile.h"

UBPFL_ReplayFile::UBPFL_ReplayFile() {
}

bool UBPFL_ReplayFile::IsFullReplayNumber(const TArray<FReplayDetailInfo>& ReplayList, bool& IsFullLocked) {
    return false;
}

bool UBPFL_ReplayFile::CheckDeleteReplayFile(TArray<FReplayDetailInfo>& ReplayList) {
    return false;
}

bool UBPFL_ReplayFile::CheckDeleteOldOneReplayFile(TArray<FReplayDetailInfo>& ReplayList, const bool is_delete_file) {
    return false;
}


