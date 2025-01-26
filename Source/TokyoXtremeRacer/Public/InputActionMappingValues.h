#pragma once
#include "CoreMinimal.h"
#include "InputActionMappingValue.h"
#include "InputActionMappingValues.generated.h"

USTRUCT(BlueprintType)
struct FInputActionMappingValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionMappingValue> Array;
    
    TOKYOXTREMERACER_API FInputActionMappingValues();
};

