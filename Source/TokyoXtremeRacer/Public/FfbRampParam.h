#pragma once
#include "CoreMinimal.h"
#include "FfbRampParam.generated.h"

USTRUCT(BlueprintType)
struct FFfbRampParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float StartMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float EndMagnitude;
    
    TOKYOXTREMERACER_API FFfbRampParam();
};

