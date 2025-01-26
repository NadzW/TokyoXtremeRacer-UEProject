#pragma once
#include "CoreMinimal.h"
#include "ControllerTrueForceCapability.h"
#include "EControllerDriverType.h"
#include "EInputControllerType.h"
#include "FWheelControllerLedType.h"
#include "ControllerCapability.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerCapability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 AxisCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 ButtonCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 HatCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceFeedbackEffectTypes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasRumble;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasRumbleTriggers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerTrueForceCapability TrueForce;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LedCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWheelControllerLedType LedType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsXInputCapable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputControllerType controllerType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerDriverType driverType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirectInputUsed;
    
    FControllerCapability();
};

