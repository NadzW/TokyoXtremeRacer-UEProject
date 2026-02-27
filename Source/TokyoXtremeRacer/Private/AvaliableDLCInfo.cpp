#include "AvaliableDLCInfo.h"

UAvaliableDLCInfo::UAvaliableDLCInfo() {
}

void UAvaliableDLCInfo::OutputDLCStatusMapForDLCAppInfo(TMap<FName, EDLCAvaliableStatus>& RetDLCStatusMap) const {
}

bool UAvaliableDLCInfo::IsAvaliableDLC(const FName& PlatformAppID) const {
    return false;
}

UAvaliableDLCInfo* UAvaliableDLCInfo::ConstructAvaliableDLCInfoFromDLCAppInfo(const TMap<FName, EDLCAvaliableStatus> tDLCStatusMap) {
    return NULL;
}

UAvaliableDLCInfo* UAvaliableDLCInfo::ConstructAvaliableDLCInfo(const TArray<FSDLCInfo>& DLCList) {
    return NULL;
}

UAvaliableDLCInfo* UAvaliableDLCInfo::ConstructAllAvaliableDLCInfo() {
    return NULL;
}

EDLCUseCheckResult UAvaliableDLCInfo::CheckCurrentDLCInfoIsEnough(const UAvaliableDLCInfo* PrevDLCDataInfo) {
    return EDLCUseCheckResult::EDLCUCR_None;
}


