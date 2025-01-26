#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBlockMethod.h"
#include "ERivalDriftPreference.h"
#include "ERivalOvertakeAbility.h"
#include "ERivalRandomLaneChange.h"
#include "SRivalBasicThinking.h"
#include "SRivalDrivingParameter.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSRivalBasicThinking> BasicThinkings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockMethod BlockMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalOvertakeAbility OvertakeAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalRandomLaneChange RandomLaneChangeFrequancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalDriftPreference DriftPreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNoLimitTargetSpeedForBehind;
    
    FSRivalDrivingParameter();
};

