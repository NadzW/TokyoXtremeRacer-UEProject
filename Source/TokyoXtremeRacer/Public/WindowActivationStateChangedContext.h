#pragma once
#include "CoreMinimal.h"
#include "WindowActivationStateChangedContext.generated.h"

USTRUCT(BlueprintType)
struct FWindowActivationStateChangedContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocused;
    
    TOKYOXTREMERACER_API FWindowActivationStateChangedContext();
};

