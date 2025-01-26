#pragma once
#include "CoreMinimal.h"
#include "SRaceDayResultInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRaceDayResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReverseTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookConversation;
    
    FSRaceDayResultInfo();
};

