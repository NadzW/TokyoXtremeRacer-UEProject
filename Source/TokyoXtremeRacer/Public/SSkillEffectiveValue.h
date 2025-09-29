#pragma once
#include "CoreMinimal.h"
#include "SSkillEffectiveValue.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSkillEffectiveValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    FSSkillEffectiveValue();
};

