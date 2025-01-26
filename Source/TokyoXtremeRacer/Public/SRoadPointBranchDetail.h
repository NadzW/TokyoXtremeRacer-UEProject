#pragma once
#include "CoreMinimal.h"
#include "ERunArea.h"
#include "SRoadPointBranchDetail.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRoadPointBranchDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea RunArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BranchLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnter;
    
    FSRoadPointBranchDetail();
};

