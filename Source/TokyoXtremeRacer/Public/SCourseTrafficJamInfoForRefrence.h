#pragma once
#include "CoreMinimal.h"
#include "ERunArea.h"
#include "SCourseTrafficJamInfoForRefrence.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseTrafficJamInfoForRefrence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StartInputKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EndInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIgnoreLane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRightLane;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CrusingSpeed;
    
    FSCourseTrafficJamInfoForRefrence();
};

