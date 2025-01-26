#pragma once
#include "CoreMinimal.h"
#include "SWheelInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSWheelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WheelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorId;
    
    FSWheelInfo();
};

