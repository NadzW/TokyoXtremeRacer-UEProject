#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoursePathDebugPosition.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCoursePathDebugPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RPDNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Positions;
    
    FCoursePathDebugPosition();
};

