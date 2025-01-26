#pragma once
#include "CoreMinimal.h"
#include "SControllerSetting.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSControllerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TouchPadType;
    
    FSControllerSetting();
};

