#pragma once
#include "CoreMinimal.h"
#include "InputInjectionConfig.generated.h"

USTRUCT(BlueprintType)
struct FInputInjectionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyActiveController;
    
    TOKYOXTREMERACER_API FInputInjectionConfig();
};

