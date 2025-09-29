#include "AvaliableDLCInfo.h"

UAvaliableDLCInfo::UAvaliableDLCInfo() {
}

void UAvaliableDLCInfo::OutputDLCStatusMapForDLCAppInfo(TMap<FName, EDLCAvaliableStatus>& RetDLCStatusMap) const {
}

UAvaliableDLCInfo* UAvaliableDLCInfo::ConstructAvaliableDLCInfoFromDLCAppInfo(const TMap<FName, EDLCAvaliableStatus> tDLCStatusMap) {
    return NULL;
}

UAvaliableDLCInfo* UAvaliableDLCInfo::ConstructAvaliableDLCInfo(const TArray<FSDLCInfo>& DLCList) {
    return NULL;
}

EDLCUseCheckResult UAvaliableDLCInfo::CheckCurrentDLCInfoIsEnough(const UAvaliableDLCInfo* PrevDLCDataInfo) {
    return EDLCUseCheckResult::EDLCUCR_None;
}


