#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "HatSlateBrushSet.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FHatSlateBrushSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DirectionBrushes[9];
    
    FHatSlateBrushSet();
};

