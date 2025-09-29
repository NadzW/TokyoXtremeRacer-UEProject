#pragma once
#include "CoreMinimal.h"
#include "BadNameAcquired.h"
#include "BadNameAcquisitionHistory.h"
#include "BadNameCheckerBase.h"
#include "BadNameState.h"
#include "ComparisonBadNameCondition02Alpha.h"
#include "ComparisonBadNameCondition02Beta.h"
#include "ComparisonBadNameCondition04.h"
#include "EBadNameDisplayType.h"
#include "EOP_Language.h"
#include "SRaceCoreInfo.h"
#include "SUserInfo.h"
#include "BadNameGarageResultChecker.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class TOKYOXTREMERACER_API UBadNameGarageResultChecker : public UBadNameCheckerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable_04;
    
    UBadNameGarageResultChecker();

    UFUNCTION(BlueprintCallable)
    FText SelectBadnameConditionAllText(const FSUserInfo& user_info, const FSRaceCoreInfo& race_info, FBadNameAcquired& acquired, FBadNameAcquisitionHistory& History, bool& is_reset_used_evaluation, const EOP_Language& Option_Language);
    
    UFUNCTION(BlueprintCallable)
    FBadNameState SelectBadnameConditionAll(const FSUserInfo& user_info, const FSRaceCoreInfo& race_info, FBadNameAcquired& acquired, FBadNameAcquisitionHistory& History, bool& is_reset_used_evaluation, bool& is_valid_bad_name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameState GetBadnameCondition04Simple(const FComparisonBadNameCondition04& comparison, const FSUserInfo& user_info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameState GetBadnameCondition04(const FSUserInfo& user_info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameState GetBadnameCondition03(const FSUserInfo& user_info, const FSRaceCoreInfo& race_info, FBadNameAcquired& acquired, EBadNameDisplayType need_type, bool& is_get_frst_time_only) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBadnameCondition02Text(const FComparisonBadNameCondition02Alpha& comparison_a, const FComparisonBadNameCondition02Beta& comparison_b, const EOP_Language& Option_Language) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameState GetBadnameCondition02Simple(const FComparisonBadNameCondition02Alpha& comparison_a, const FComparisonBadNameCondition02Beta& comparison_b) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameState GetBadnameCondition02(const FSUserInfo& user_info, EBadNameDisplayType need_type, bool is_direct) const;
    
};

