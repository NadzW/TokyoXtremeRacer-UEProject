#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "PolaritySlateBrushSet.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FPolaritySlateBrushSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NegativeBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PositiveBrush;
    
    FPolaritySlateBrushSet();
};

