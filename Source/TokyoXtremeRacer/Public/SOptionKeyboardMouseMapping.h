#pragma once
#include "CoreMinimal.h"
#include "EInputActionSemantic.h"
#include "SOptionActionMapping.h"
#include "SOptionKeyboardMouseMappingParameter.h"
#include "SOptionKeyboardMouseMapping.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionKeyboardMouseMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputActionSemantic, FSOptionActionMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSOptionKeyboardMouseMappingParameter Parameter;
    
    FSOptionKeyboardMouseMapping();
};

