#pragma once
#include "CoreMinimal.h"
#include "EInputActionSemantic.h"
#include "SOptionActionMapping.h"
#include "SOptionUsbControllerMappingParameter.h"
#include "SOptionUsbControllerMapping.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionUsbControllerMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputActionSemantic, FSOptionActionMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSOptionUsbControllerMappingParameter Parameter;
    
    FSOptionUsbControllerMapping();
};

