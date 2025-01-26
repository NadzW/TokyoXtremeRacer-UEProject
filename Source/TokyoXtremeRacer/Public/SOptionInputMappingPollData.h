#pragma once
#include "CoreMinimal.h"
#include "EInputHatDirection.h"
#include "SOptionInputMappingPollData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionInputMappingPollData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AxisValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bButtonPresseds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputHatDirection> HatDirections;
    
    FSOptionInputMappingPollData();
};

