#include "BadNameGarageResultChecker.h"

UBadNameGarageResultChecker::UBadNameGarageResultChecker() {
    this->DataTable_02 = NULL;
    this->DataTable_03 = NULL;
    this->DataTable_04 = NULL;
}

FText UBadNameGarageResultChecker::SelectBadnameConditionAllText(const FSUserInfo& user_info, const FSRaceCoreInfo& race_info, FBadNameAcquired& acquired, FBadNameAcquisitionHistory& History, bool& is_reset_used_evaluation, const EOP_Language& Option_Language) {
    return FText::GetEmpty();
}

FBadNameState UBadNameGarageResultChecker::SelectBadnameConditionAll(const FSUserInfo& user_info, const FSRaceCoreInfo& race_info, FBadNameAcquired& acquired, FBadNameAcquisitionHistory& History, bool& is_reset_used_evaluation, bool& is_valid_bad_name) {
    return FBadNameState{};
}

FBadNameState UBadNameGarageResultChecker::GetBadnameCondition04Simple(const FComparisonBadNameCondition04& comparison, const FSUserInfo& user_info) const {
    return FBadNameState{};
}

FBadNameState UBadNameGarageResultChecker::GetBadnameCondition04(const FSUserInfo& user_info) const {
    return FBadNameState{};
}

FBadNameState UBadNameGarageResultChecker::GetBadnameCondition03(const FSUserInfo& user_info, const FSRaceCoreInfo& race_info, FBadNameAcquired& acquired, EBadNameDisplayType need_type, bool& is_get_frst_time_only) const {
    return FBadNameState{};
}

FText UBadNameGarageResultChecker::GetBadnameCondition02Text(const FComparisonBadNameCondition02Alpha& comparison_a, const FComparisonBadNameCondition02Beta& comparison_b, const EOP_Language& Option_Language) const {
    return FText::GetEmpty();
}

FBadNameState UBadNameGarageResultChecker::GetBadnameCondition02Simple(const FComparisonBadNameCondition02Alpha& comparison_a, const FComparisonBadNameCondition02Beta& comparison_b) const {
    return FBadNameState{};
}

FBadNameState UBadNameGarageResultChecker::GetBadnameCondition02(const FSUserInfo& user_info, EBadNameDisplayType need_type, bool is_direct) const {
    return FBadNameState{};
}


