#include "BPFL_DLCUtility.h"

UBPFL_DLCUtility::UBPFL_DLCUtility() {
}

TMap<FName, EDLCAvaliableStatus> UBPFL_DLCUtility::GetDLCAvaliableInfoFromUserInfo(const FSUserInfo& UserInfo) {
    return TMap<FName, EDLCAvaliableStatus>();
}

EDLCUseCheckResult UBPFL_DLCUtility::CheckDLCAvaliableByUserInfo(bool& bIsCheckPassed, const FSUserInfo& UserInfo, const TMap<FName, EDLCAvaliableStatus>& NeedDLCInfo) {
    return EDLCUseCheckResult::EDLCUCR_None;
}

EDLCUseCheckResult UBPFL_DLCUtility::CheckDLCAvaliable(bool& bIsCheckPassed, const TMap<FName, EDLCAvaliableStatus>& CurrentDLCInfo, const TMap<FName, EDLCAvaliableStatus>& NeedDLCInfo) {
    return EDLCUseCheckResult::EDLCUCR_None;
}


