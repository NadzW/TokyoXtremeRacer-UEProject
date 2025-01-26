#pragma once
#include "CoreMinimal.h"
#include "ControllerModel.h"
#include "InputActionMappingValue.h"
#include "ControllerMappingDesc.generated.h"

USTRUCT(BlueprintType)
struct FControllerMappingDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControllerNameInformative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerModel ControllerModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionMappingValue InputActionMappingValue;
    
    TOKYOXTREMERACER_API FControllerMappingDesc();
};

