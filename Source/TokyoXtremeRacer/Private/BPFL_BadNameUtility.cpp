#include "BPFL_BadNameUtility.h"

UBPFL_BadNameUtility::UBPFL_BadNameUtility() {
}

FBadNameState UBPFL_BadNameUtility::OverwriteBadName(const FBadNameState& base, const FBadNameState& Add) {
    return FBadNameState{};
}

bool UBPFL_BadNameUtility::IsSameBadName(const FBadNameState& base, const FBadNameState& check) {
    return false;
}

FBadNameState UBPFL_BadNameUtility::GetRandomDefaultBadName(int32 Area, UDataTable* AlphaTable, UDataTable* BetaTable) {
    return FBadNameState{};
}

FBadNameUnit UBPFL_BadNameUtility::GetDefaultBetaBadName(UDataTable* BetaTable) {
    return FBadNameUnit{};
}

FBadNameUnit UBPFL_BadNameUtility::GetDefaultAlphaBadName(int32 Area, UDataTable* AlphaTable) {
    return FBadNameUnit{};
}

FText UBPFL_BadNameUtility::GetBadNameText(const FBadNameState& bad_name, const EOP_Language& Option_Language) {
    return FText::GetEmpty();
}

FBadNameState UBPFL_BadNameUtility::CreateSimpleBadName(const FText& Name) {
    return FBadNameState{};
}

FBadNameState UBPFL_BadNameUtility::CombineBadName(const FBadNameState& base, const FBadNameState& Add) {
    return FBadNameState{};
}

bool UBPFL_BadNameUtility::CheckBadName(const FBadNameState& base, const FBadNameState& Add, FBadNameState& new_bad_name) {
    return false;
}


