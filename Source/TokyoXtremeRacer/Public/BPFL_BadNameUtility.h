#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BadNameAcquired.h"
#include "BadNameAcquisitionHistory.h"
#include "BadNameConditionData.h"
#include "BadNameHistoryData.h"
#include "BadNameState.h"
#include "BadNameUnit.h"
#include "EBadNameDisplayType.h"
#include "EOP_Language.h"
#include "BPFL_BadNameUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_BadNameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_BadNameUtility();

    UFUNCTION(BlueprintCallable)
    static void UpdateBadNameHistoryWithBadNameInfomationAndDataTable(UPARAM(Ref) FBadNameAcquisitionHistory& out_history, const FBadNameAcquired& in_acquired, const FBadNameState& in_now_badname, UDataTable* Condition03_Table);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateBadNameHistoryWithBadNameInfomation(UPARAM(Ref) FBadNameAcquisitionHistory& out_history, const FBadNameAcquired& in_acquired, const FBadNameState& in_now_badname);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBadNameConditionData> SortBadName(const TArray<FBadNameConditionData>& Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetBadNameHistoryWithBadNameDTAll(UPARAM(Ref) FBadNameAcquisitionHistory& out_history, UDataTable* Condition_Table);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameState OverwriteBadName(const FBadNameState& base, const FBadNameState& Add);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidBadName(const FBadNameState& bad_name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSelectableBadNameHistoryData(const FBadNameAcquisitionHistory& in_history, const EBadNameDisplayType Type, const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSameBadName(const FBadNameState& base, const FBadNameState& Check);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameState GetRandomDefaultBadName(int32 Area, UDataTable* AlphaTable, UDataTable* BetaTable);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameUnit GetDefaultBetaBadName(UDataTable* BetaTable);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameUnit GetDefaultAlphaBadName(int32 Area, UDataTable* AlphaTable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetConditionSubType03AcquiredKey(const FBadNameConditionData& record);
    
    UFUNCTION(BlueprintCallable)
    static FText GetBadNameText(const FBadNameState& bad_name, const EOP_Language& Option_Language);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBadNameHistoryData(const FBadNameAcquisitionHistory& in_history, const EBadNameDisplayType Type, const int32 ID, FBadNameHistoryData& out_history_data);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAcquisitionCountBadNameHistory(const FBadNameAcquisitionHistory& in_history);
    
private:
    UFUNCTION(BlueprintCallable)
    static FBadNameState CreateSimpleBadName(const FText& Name);
    
public:
    UFUNCTION(BlueprintCallable)
    static FBadNameUnit CreateBadNameUnit(const FBadNameConditionData& record);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameState CreateBadNameFull(const FBadNameConditionData& record);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameState CreateBadNameAlphaAndBeta(const FBadNameConditionData& a_record, const FBadNameConditionData& b_record);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameState CombineBadName(const FBadNameState& base, const FBadNameState& Add);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameAcquisitionHistory CombineAcquisitionHistory(const FBadNameAcquisitionHistory& base_history, const FBadNameAcquisitionHistory& add_history);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBadName(const FBadNameState& base, const FBadNameState& Add, FBadNameState& new_bad_name);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAcquisitionHistory(UPARAM(Ref) FBadNameAcquisitionHistory& out_history, const FBadNameState& Check, const bool is_acquisition);
    
};

