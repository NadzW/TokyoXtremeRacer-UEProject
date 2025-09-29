#pragma once
#include "CoreMinimal.h"
#include "SRivalIntervalGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalIntervalGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> rival_ids;
    
    FSRivalIntervalGroupInfo();
};

