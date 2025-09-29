#include "BPFL_ReferenceUtility.h"

UBPFL_ReferenceUtility::UBPFL_ReferenceUtility() {
}

void UBPFL_ReferenceUtility::UpdateRecollectionStoryInfoDataListWithDataTable(FSRecollectionStoryInfoDataList& out_list, UDataTable* Story_Table) {
}

bool UBPFL_ReferenceUtility::UpdateRecllectionConversationSituationInfoByStage(FSRecollectionConversationSituationInfoList& info_list, EStoryStage in_current_stage, const UDataTable* conversation_data_table) {
    return false;
}

bool UBPFL_ReferenceUtility::UpdateRecllectionConversationSituationInfoByPABattleAll(FSRecollectionConversationSituationInfoList& info_list, const TMap<FName, FSRivalSituationInfo>& RivalSituations, const UDataTable* conversation_data_table) {
    return false;
}

bool UBPFL_ReferenceUtility::UpdateRecllectionConversationSituationInfoByPABattle(FSRecollectionConversationSituationInfoList& info_list, FName in_rival_key, const FSRivalSituationInfo& RivalSituation, const UDataTable* conversation_data_table) {
    return false;
}

void UBPFL_ReferenceUtility::SortRecollectionRivalInfoDataForConversationList(FSRecollectionRivalInfoData& data_value, bool is_top) {
}

void UBPFL_ReferenceUtility::SetRecollectionConversationAndObjevtiveKeyForStoryInfoList(TMap<FName, FSRecollectionStoryInfoData>& out_list, const FName& story_key, const FName& objective_key, const TArray<FSRecollectionRivalDetailInfo>& conversation_data) {
}

void UBPFL_ReferenceUtility::SetRecollectionConversationAndObjevtiveKeyForStoryInfoData(FSRecollectionStoryInfoData& out_data, const FName& objective_key, const TArray<FSRecollectionRivalDetailInfo>& conversation_data) {
}

void UBPFL_ReferenceUtility::SetRecllectionConversationSituationInfo(FSRecollectionConversationSituationInfoList& info_list, const FName& rival_key, const FName& conversation_key, const ERecollectionLockSituation& Situation) {
}

bool UBPFL_ReferenceUtility::IsUseRecollectionConversation(const FName& key_name, ERecollectionConversationType& Type) {
    return false;
}

int32 UBPFL_ReferenceUtility::GetSortTopNumber(const TArray<float>& list, bool is_top) {
    return 0;
}

TArray<FName> UBPFL_ReferenceUtility::GetSortNameList(const FMapNameAndInt& in_data, bool is_top) {
    return TArray<FName>();
}

TMap<int32, EStoryStage> UBPFL_ReferenceUtility::GetRecollectionStoryStageMapNumFromDataList(const FSRecollectionStoryInfoDataList& in_list) {
    return TMap<int32, EStoryStage>();
}

bool UBPFL_ReferenceUtility::GetRecollectionStoryInfoDataFromDataList(const FSRecollectionStoryInfoDataList& in_list, EStoryStage stage, int32 Index, FSRecollectionStoryInfoData& out_data) {
    return false;
}

int32 UBPFL_ReferenceUtility::GetRecollectionStoryInfoDataArrayNumFromDataList(const FSRecollectionStoryInfoDataList& in_list, EStoryStage stage) {
    return 0;
}

FName UBPFL_ReferenceUtility::GetRecollectionConversationToRivalKeyName(const FName& key_name, const ERecollectionConversationType& Type) {
    return NAME_None;
}

bool UBPFL_ReferenceUtility::GetRecollectionConversationSituationInfosNewFlag(const FSRecollectionConversationSituationInfoList& info_list, const FName& rival_key) {
    return false;
}

int32 UBPFL_ReferenceUtility::GetKeyNum(const FMapNameAndInt& Data) {
    return 0;
}

bool UBPFL_ReferenceUtility::CheckRecollectionConversationNotAppearanceSimple(const FSRecollectionConversationConditionInfo& condition_info, EStoryStage in_current_stage) {
    return false;
}

bool UBPFL_ReferenceUtility::CheckRecollectionConversationAppearanceSimpleStageOnly(const FSRecollectionConversationConditionInfo& condition_info, EStoryStage in_current_stage) {
    return false;
}

FMapNameAndInt UBPFL_ReferenceUtility::CheckCountUpMapNameAndInt(FMapNameAndInt& Data, const FName& key_name) {
    return FMapNameAndInt{};
}

void UBPFL_ReferenceUtility::AddRecollectionRivalInfoDataForRivalList(FSRecollectionRivalInfoDataList& out_list, const FName& data_key, const FSRecollectionRivalInfoData& data_value) {
}

void UBPFL_ReferenceUtility::AddRecollectionRivalInfoDataForReleaseList(TMap<int32, FSRecollectionRivalInfoDataList>& out_list, const int32& release_index, const FName& data_key, const FSRecollectionRivalInfoData& data_value) {
}

void UBPFL_ReferenceUtility::AddRecollectionRivalDetailInfoForRivalInfoData(FSRecollectionRivalInfoData& out_data, const FName& data_key, const FSRecollectionRivalDetailInfo& data_value) {
}

void UBPFL_ReferenceUtility::AddRecollectionRivalDetailInfoForReleaseList(TMap<int32, FSRecollectionRivalInfoDataList>& out_list, const int32& release_index, const FName& rival_key, const FName& data_key, const FSRecollectionRivalDetailInfo& data_value) {
}

bool UBPFL_ReferenceUtility::AddRecllectionConversationSituationInfo(FSRecollectionConversationSituationInfoList& info_list, const FName& rival_key, const FName& conversation_key, const FSRecollectionConversationSituationInfo& Situation) {
    return false;
}

void UBPFL_ReferenceUtility::AddFMapNameAndInt(FMapNameAndInt& out_data, const FName& Key, const int32& Number) {
}


