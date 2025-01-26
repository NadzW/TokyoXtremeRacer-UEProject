#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECourseDrawLineType.h"
#include "ERunArea.h"
#include "SCourseLineInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseLineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseDrawLineType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea RunArea;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    FSCourseLineInfo();
};

