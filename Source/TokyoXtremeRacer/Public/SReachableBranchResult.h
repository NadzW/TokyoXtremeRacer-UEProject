#pragma once
#include "CoreMinimal.h"
#include "SReachableBranchResult.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSReachableBranchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ResultRouteBackwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReachable;
    
    FSReachableBranchResult();
};

