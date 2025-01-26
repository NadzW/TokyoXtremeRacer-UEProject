#pragma once
#include "CoreMinimal.h"
#include "ControllerId.h"
#include "ControllersAnyChangeEventContext.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllersAnyChangeEventContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerId> PresentControllerIds;
    
    FControllersAnyChangeEventContext();
};

