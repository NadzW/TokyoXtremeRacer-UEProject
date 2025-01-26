#pragma once
#include "CoreMinimal.h"
#include "ERunArea.h"
#include "SCourseEnterSplineKeys.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseEnterSplineKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SplineKyes;
    
    FSCourseEnterSplineKeys();
};

