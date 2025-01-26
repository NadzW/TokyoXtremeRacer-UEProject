#pragma once
#include "CoreMinimal.h"
#include "ControllerId.h"
#include "ControllerTrueForceCapability.h"
#include "TrueForceCapableControllerId.generated.h"

USTRUCT(BlueprintType)
struct FTrueForceCapableControllerId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FControllerId ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FControllerTrueForceCapability TrueForce;
    
    TOKYOXTREMERACER_API FTrueForceCapableControllerId();
};

