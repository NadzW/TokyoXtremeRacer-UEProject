#pragma once
#include "CoreMinimal.h"
#include "InputActionArray.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputActionArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> Array;
    
    TOKYOXTREMERACER_API FInputActionArray();
};

