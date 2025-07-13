#include "BPFL_BadNameUtility.h"

UBPFL_BadNameUtility::UBPFL_BadNameUtility() {
}

void UBPFL_BadNameUtility::UpdateBadNameHistoryWithBadNameInfomationAndDataTable(FBadNameAcquisitionHistory& out_history, const FBadNameAcquired& in_acquired, const FBadNameState& in_now_badname, UDataTable* Condition03_Table) {
}

void UBPFL_BadNameUtility::UpdateBadNameHistoryWithBadNameInfomation(FBadNameAcquisitionHistory& out_history, const FBadNameAcquired& in_acquired, const FBadNameState& in_now_badname) {
}

TArray<FBadNameConditionData> UBPFL_BadNameUtility::SortBadName(const TArray<FBadNameConditionData>& Data) {
    return TArray<FBadNameConditionData>();
}

void UBPFL_BadNameUtility::SetBadNameHistoryWithBadNameDTAll(FBadNameAcquisitionHistory& out_history, UDataTable* Condition_Table) {
}

FBadNameState UBPFL_BadNameUtility::OverwriteBadName(const FBadNameState& base, const FBadNameState& Add) {
    return FBadNameState{};
}

bool UBPFL_BadNameUtility::IsValidBadName(const FBadNameState& bad_name) {
    return false;
}

bool UBPFL_BadNameUtility::IsSelectableBadNameHistoryData(const FBadNameAcquisitionHistory& in_history, const EBadNameDisplayType Type, const int32 ID) {
    return false;
}

bool UBPFL_BadNameUtility::IsSameBadName(const FBadNameState& base, const FBadNameState& Check) {
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

int32 UBPFL_BadNameUtility::GetConditionSubType03AcquiredKey(const FBadNameConditionData& Record) {
    return 0;
}

FText UBPFL_BadNameUtility::GetBadNameText(const FBadNameState& bad_name, const EOP_Language& Option_Language) {
    return FText::GetEmpty();
}

bool UBPFL_BadNameUtility::GetBadNameHistoryData(const FBadNameAcquisitionHistory& in_history, const EBadNameDisplayType Type, const int32 ID, FBadNameHistoryData& out_history_data) {
    return false;
}

int32 UBPFL_BadNameUtility::GetAcquisitionCountBadNameHistory(const FBadNameAcquisitionHistory& in_history) {
    return 0;
}

FBadNameState UBPFL_BadNameUtility::CreateSimpleBadName(const FText& Name) {
    return FBadNameState{};
}

FBadNameUnit UBPFL_BadNameUtility::CreateBadNameUnit(const FBadNameConditionData& Record) {
    return FBadNameUnit{};
}

FBadNameState UBPFL_BadNameUtility::CreateBadNameFull(const FBadNameConditionData& Record) {
    return FBadNameState{};
}

FBadNameState UBPFL_BadNameUtility::CreateBadNameAlphaAndBeta(const FBadNameConditionData& a_record, const FBadNameConditionData& b_record) {
    return FBadNameState{};
}

FBadNameState UBPFL_BadNameUtility::CombineBadName(const FBadNameState& base, const FBadNameState& Add) {
    return FBadNameState{};
}

FBadNameAcquisitionHistory UBPFL_BadNameUtility::CombineAcquisitionHistory(const FBadNameAcquisitionHistory& base_history, const FBadNameAcquisitionHistory& add_history) {
    return FBadNameAcquisitionHistory{};
}

bool UBPFL_BadNameUtility::CheckBadName(const FBadNameState& base, const FBadNameState& Add, FBadNameState& new_bad_name) {
    return false;
}

bool UBPFL_BadNameUtility::CheckAcquisitionHistory(FBadNameAcquisitionHistory& out_history, const FBadNameState& Check, const bool is_acquisition) {
    return false;
}


