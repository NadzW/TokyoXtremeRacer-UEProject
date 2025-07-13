#pragma once
#include "CoreMinimal.h"
#include "TrueForceInputKinesthetic.generated.h"

USTRUCT(BlueprintType)
struct FTrueForceInputKinesthetic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentDurationInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TorqueValuesInNm;
    
    TOKYOXTREMERACER_API FTrueForceInputKinesthetic();
};

