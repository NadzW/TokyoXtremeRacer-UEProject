#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputModifiers.h"
#include "InputModifierSteeringDeadzone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TOKYOXTREMERACER_API UInputModifierSteeringDeadzone : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperThreshold;
    
    UInputModifierSteeringDeadzone();

};

