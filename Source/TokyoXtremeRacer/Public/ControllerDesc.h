#pragma once
#include "CoreMinimal.h"
#include "ControllerCapability.h"
#include "ControllerDesc.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 VendorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 ProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FControllerCapability Capability;
    
    FControllerDesc();
};

