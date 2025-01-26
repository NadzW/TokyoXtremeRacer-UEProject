#pragma once
#include "CoreMinimal.h"
#include "CoursePictUnitData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCoursePictUnitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoursePathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    FCoursePictUnitData();
};

