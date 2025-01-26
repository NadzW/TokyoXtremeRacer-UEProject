#pragma once
#include "CoreMinimal.h"
#include "ControllerId.h"
#include "ControllerRemovedEventContext.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerRemovedEventContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerId ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasActive;
    
    FControllerRemovedEventContext();
};

