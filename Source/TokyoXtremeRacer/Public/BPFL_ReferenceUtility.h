#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERecollectionConversationType.h"
#include "MapNameAndInt.h"
#include "SRecollectionRivalDetailInfo.h"
#include "SRecollectionRivalInfoData.h"
#include "SRecollectionRivalInfoDataList.h"
#include "BPFL_ReferenceUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_ReferenceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ReferenceUtility();

private:
    UFUNCTION(BlueprintCallable)
    static bool IsUseRecollectionConversation(const FName& key_name, ERecollectionConversationType& Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSortTopNumber(const TArray<float>& List, bool is_top);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetKeyNum(const FMapNameAndInt& Data);
    
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
    
};

