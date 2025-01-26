#pragma once
#include "CoreMinimal.h"
#include "ControllerId.h"
#include "ForceFeedbackCapableControllerId.generated.h"

USTRUCT(BlueprintType)
struct FForceFeedbackCapableControllerId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FControllerId ControllerId;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceFeedbackEffectTypes;
    
    TOKYOXTREMERACER_API FForceFeedbackCapableControllerId();
};

