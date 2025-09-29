#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERecollectionConversationType.h"
#include "ERecollectionLockSituation.h"
#include "EStoryStage.h"
#include "MapNameAndInt.h"
#include "SRecollectionConversationConditionInfo.h"
#include "SRecollectionConversationSituationInfo.h"
#include "SRecollectionConversationSituationInfoList.h"
#include "SRecollectionRivalDetailInfo.h"
#include "SRecollectionRivalInfoData.h"
#include "SRecollectionRivalInfoDataList.h"
#include "SRecollectionStoryInfoData.h"
#include "SRecollectionStoryInfoDataList.h"
#include "SRivalSituationInfo.h"
#include "BPFL_ReferenceUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_ReferenceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ReferenceUtility();

    UFUNCTION(BlueprintCallable)
    static void UpdateRecollectionStoryInfoDataListWithDataTable(FSRecollectionStoryInfoDataList& out_list, UDataTable* Story_Table);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdateRecllectionConversationSituationInfoByStage(UPARAM(Ref) FSRecollectionConversationSituationInfoList& info_list, EStoryStage in_current_stage, const UDataTable* conversation_data_table);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdateRecllectionConversationSituationInfoByPABattleAll(UPARAM(Ref) FSRecollectionConversationSituationInfoList& info_list, const TMap<FName, FSRivalSituationInfo>& RivalSituations, const UDataTable* conversation_data_table);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdateRecllectionConversationSituationInfoByPABattle(UPARAM(Ref) FSRecollectionConversationSituationInfoList& info_list, FName in_rival_key, const FSRivalSituationInfo& RivalSituation, const UDataTable* conversation_data_table);
    
    UFUNCTION(BlueprintCallable)
    static void SortRecollectionRivalInfoDataForConversationList(UPARAM(Ref) FSRecollectionRivalInfoData& data_value, bool is_top);
    
    UFUNCTION(BlueprintCallable)
    static void SetRecollectionConversationAndObjevtiveKeyForStoryInfoList(UPARAM(Ref) TMap<FName, FSRecollectionStoryInfoData>& out_list, const FName& story_key, const FName& objective_key, const TArray<FSRecollectionRivalDetailInfo>& conversation_data);
    
    UFUNCTION(BlueprintCallable)
    static void SetRecollectionConversationAndObjevtiveKeyForStoryInfoData(UPARAM(Ref) FSRecollectionStoryInfoData& out_data, const FName& objective_key, const TArray<FSRecollectionRivalDetailInfo>& conversation_data);
    
    UFUNCTION(BlueprintCallable)
    static void SetRecllectionConversationSituationInfo(UPARAM(Ref) FSRecollectionConversationSituationInfoList& info_list, const FName& rival_key, const FName& conversation_key, const ERecollectionLockSituation& Situation);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseRecollectionConversation(const FName& key_name, ERecollectionConversationType& Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSortTopNumber(const TArray<float>& list, bool is_top);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetSortNameList(const FMapNameAndInt& in_data, bool is_top);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, EStoryStage> GetRecollectionStoryStageMapNumFromDataList(const FSRecollectionStoryInfoDataList& in_list);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRecollectionStoryInfoDataFromDataList(const FSRecollectionStoryInfoDataList& in_list, EStoryStage stage, int32 Index, FSRecollectionStoryInfoData& out_data);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRecollectionStoryInfoDataArrayNumFromDataList(const FSRecollectionStoryInfoDataList& in_list, EStoryStage stage);
    
    UFUNCTION(BlueprintCallable)
    static FName GetRecollectionConversationToRivalKeyName(const FName& key_name, const ERecollectionConversationType& Type);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRecollectionConversationSituationInfosNewFlag(const FSRecollectionConversationSituationInfoList& info_list, const FName& rival_key);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetKeyNum(const FMapNameAndInt& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRecollectionConversationNotAppearanceSimple(const FSRecollectionConversationConditionInfo& condition_info, EStoryStage in_current_stage);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckRecollectionConversationAppearanceSimpleStageOnly(const FSRecollectionConversationConditionInfo& condition_info, EStoryStage in_current_stage);
    
    UFUNCTION(BlueprintCallable)
    static FMapNameAndInt CheckCountUpMapNameAndInt(FMapNameAndInt& Data, const FName& key_name);
    
    UFUNCTION(BlueprintCallable)
    static void AddRecollectionRivalInfoDataForRivalList(UPARAM(Ref) FSRecollectionRivalInfoDataList& out_list, const FName& data_key, const FSRecollectionRivalInfoData& data_value);
    
    UFUNCTION(BlueprintCallable)
    static void AddRecollectionRivalInfoDataForReleaseList(UPARAM(Ref) TMap<int32, FSRecollectionRivalInfoDataList>& out_list, const int32& release_index, const FName& data_key, const FSRecollectionRivalInfoData& data_value);
    
    UFUNCTION(BlueprintCallable)
    static void AddRecollectionRivalDetailInfoForRivalInfoData(UPARAM(Ref) FSRecollectionRivalInfoData& out_data, const FName& data_key, const FSRecollectionRivalDetailInfo& data_value);
    
    UFUNCTION(BlueprintCallable)
    static void AddRecollectionRivalDetailInfoForReleaseList(UPARAM(Ref) TMap<int32, FSRecollectionRivalInfoDataList>& out_list, const int32& release_index, const FName& rival_key, const FName& data_key, const FSRecollectionRivalDetailInfo& data_value);
    
    UFUNCTION(BlueprintCallable)
    static bool AddRecllectionConversationSituationInfo(UPARAM(Ref) FSRecollectionConversationSituationInfoList& info_list, const FName& rival_key, const FName& conversation_key, const FSRecollectionConversationSituationInfo& Situation);
    
    UFUNCTION(BlueprintCallable)
    static void AddFMapNameAndInt(UPARAM(Ref) FMapNameAndInt& out_data, const FName& Key, const int32& Number);
    
};

