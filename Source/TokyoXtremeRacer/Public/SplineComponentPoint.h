#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SplineComponentPoint.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSplineComponentPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Index;
    
    FSplineComponentPoint();
};

