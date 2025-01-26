#pragma once
#include "CoreMinimal.h"
#include "SADStimulusLaneTargetInfoElement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSADStimulusLaneTargetInfoElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OtherToBaseDistance;
    
    FSADStimulusLaneTargetInfoElement();
};

