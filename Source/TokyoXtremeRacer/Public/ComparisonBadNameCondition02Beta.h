#pragma once
#include "CoreMinimal.h"
#include "ComparisonBadNameCondition02Beta.generated.h"

USTRUCT(BlueprintType)
struct FComparisonBadNameCondition02Beta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalDefeatCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AverageContactNumber;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AverageWallContact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TotalDistanceTraveled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableCheckCondition02;
    
    TOKYOXTREMERACER_API FComparisonBadNameCondition02Beta();
};

