#pragma once
#include "CoreMinimal.h"
#include "ERivalAppearanceConditionCheckType.h"
#include "SRivalAppearanceCondition.h"
#include "SRivalAppearanceConditionInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalAppearanceConditionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalAppearanceConditionCheckType OverallCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSRivalAppearanceCondition> AppearanceConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, ERivalAppearanceConditionCheckType> GroupCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverallCheckORxRequiredNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> GroupCheckORxRequiredNumber;
    
    FSRivalAppearanceConditionInfo();
};

