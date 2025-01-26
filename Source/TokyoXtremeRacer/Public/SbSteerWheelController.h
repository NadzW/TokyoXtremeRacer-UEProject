#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SteerWheelInfo.h"
#include "SbSteerWheelController.generated.h"

UCLASS(Blueprintable, Config=SteerWheelInput)
class TOKYOXTREMERACER_API USbSteerWheelController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteerWheelInfo> SteerWheelConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteerWheelInfo UseSteerWheelConfig;
    
    USbSteerWheelController();

};

