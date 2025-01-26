#pragma once
#include "CoreMinimal.h"
#include "SActiveAbilityParameter.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSActiveAbilityParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    FSActiveAbilityParameter();
};

