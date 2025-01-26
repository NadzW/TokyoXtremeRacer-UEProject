#pragma once
#include "CoreMinimal.h"
#include "EInputActionSemantic.h"
#include "InputActionMappingValue.h"
#include "SInputActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSInputActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActionSemantic MappingIACemantic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionMappingValue Key;
    
    FSInputActionKeyMapping();
};

