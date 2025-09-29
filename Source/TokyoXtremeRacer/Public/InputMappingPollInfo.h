#pragma once
#include "CoreMinimal.h"
#include "EInputHatDirection.h"
#include "EInputSignalType.h"
#include "InputMappingPollInfo.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingPollInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputSignalType SignalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputHatDirection HatDirection;
    
    TOKYOXTREMERACER_API FInputMappingPollInfo();
};

