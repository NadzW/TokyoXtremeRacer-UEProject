#include "BPFL_ReferenceUtility.h"

UBPFL_ReferenceUtility::UBPFL_ReferenceUtility() {
}

bool UBPFL_ReferenceUtility::IsUseRecollectionConversation(const FName& key_name, ERecollectionConversationType& Type) {
    return false;
}

int32 UBPFL_ReferenceUtility::GetSortTopNumber(const TArray<float>& List, bool is_top) {
    return 0;
}

int32 UBPFL_ReferenceUtility::GetKeyNum(const FMapNameAndInt& Data) {
    return 0;
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


