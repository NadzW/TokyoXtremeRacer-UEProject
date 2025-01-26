#pragma once
#include "CoreMinimal.h"
#include "ControllerModel.h"
#include "ControllerId.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerModel Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 instance;
    
    FControllerId();
};

