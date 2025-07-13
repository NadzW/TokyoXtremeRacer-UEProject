#pragma once
#include "CoreMinimal.h"
#include "FfbConstantParam.generated.h"

USTRUCT(BlueprintType)
struct FFfbConstantParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    TOKYOXTREMERACER_API FFfbConstantParam();
};

