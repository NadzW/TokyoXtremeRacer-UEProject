#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EControllerLayoutDirection.h"
#include "EControllerLayoutPolarityDirection.h"
#include "EControllerLayoutSpringLoadedDirection.h"
#include "HatSlateBrushSet.h"
#include "PolaritySlateBrushSet.h"
#include "ControllerLayoutValue.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FControllerLayoutValue {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerLayoutDirection Direction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerLayoutSpringLoadedDirection SpringLoadedDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AxisDescription;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerLayoutPolarityDirection PolarityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush OptionalAxisBrush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolaritySlateBrushSet PolarityBrushSet;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHatSlateBrushSet HatSlateBrushSet;
    
    FControllerLayoutValue();
};

