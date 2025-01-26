#pragma once
#include "CoreMinimal.h"
#include "ControllerModel.h"
#include "SOptionKeyboardMouseMapping.h"
#include "SOptionUsbControllerMapping.h"
#include "SOptionInputMappingInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionInputMappingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSOptionKeyboardMouseMapping KeyboardMouseMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FControllerModel, FSOptionUsbControllerMapping> UsbControllerMappings;
    
    FSOptionInputMappingInfo();
};

