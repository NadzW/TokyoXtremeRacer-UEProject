#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoursePathPoint.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCoursePathPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainRoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RPDName;
    
    FCoursePathPoint();
};

