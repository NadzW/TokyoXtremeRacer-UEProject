#pragma once
#include "CoreMinimal.h"
#include "EInputHatDirection.h"
#include "InputMappingPollData.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingPollData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AxisValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ButtonPresseds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputHatDirection> HatDirections;
    
    TOKYOXTREMERACER_API FInputMappingPollData();
};

