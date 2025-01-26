#pragma once
#include "CoreMinimal.h"
#include "SRankingResult.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRankingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FSRankingResult();
};

