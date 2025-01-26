#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "EAnalogInputSignalPolarity.h"
#include "InputTriggerSingleAxisOnDigital.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UInputTriggerSingleAxisOnDigital : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnalogInputSignalPolarity Polarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    UInputTriggerSingleAxisOnDigital();

};

