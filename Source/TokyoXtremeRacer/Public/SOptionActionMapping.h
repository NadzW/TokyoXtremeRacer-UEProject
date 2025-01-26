#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "EInputActionSemantic.h"
#include "InputActionMappingValue.h"
#include "SOptionActionMappingParameter.h"
#include "SOptionActionMapping.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionActionMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActionSemantic InputActionSemantic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyboardMouseKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionMappingValue UsbControllerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSOptionActionMappingParameter Parameter;
    
    FSOptionActionMapping();
};

