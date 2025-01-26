#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointCloudPoint.generated.h"

USTRUCT(BlueprintType)
struct FPointCloudPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromZero;
    
    TOKYOXTREMERACER_API FPointCloudPoint();
};

