#include "BadNameDefaultChecker.h"

UBadNameDefaultChecker::UBadNameDefaultChecker() {
    this->AlphaDataTable = NULL;
    this->BetaDataTable = NULL;
}

FBadNameUnit UBadNameDefaultChecker::GetDefaultBeta() const {
    return FBadNameUnit{};
}

FText UBadNameDefaultChecker::GetDefaultBadnameText(int32 Area, const EOP_Language& Option_Language) const {
    return FText::GetEmpty();
}

FBadNameState UBadNameDefaultChecker::GetDefaultBadname(int32 Area) const {
    return FBadNameState{};
}

FBadNameUnit UBadNameDefaultChecker::GetDefaultAlpha(int32 Area) const {
    return FBadNameUnit{};
}


