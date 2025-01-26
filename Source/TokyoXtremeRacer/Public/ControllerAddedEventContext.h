#pragma once
#include "CoreMinimal.h"
#include "ControllerId.h"
#include "ControllerAddedEventContext.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerAddedEventContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerId ControllerId;
    
    FControllerAddedEventContext();
};

