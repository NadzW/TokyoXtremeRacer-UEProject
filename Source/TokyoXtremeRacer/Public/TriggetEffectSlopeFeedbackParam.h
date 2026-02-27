#pragma once
#include "CoreMinimal.h"
#include "TriggetEffectSlopeFeedbackParam.generated.h"

USTRUCT(BlueprintType)
struct FTriggetEffectSlopeFeedbackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EndStrength;
    
    TOKYOXTREMERACER_API FTriggetEffectSlopeFeedbackParam();
};

