#pragma once
#include "CoreMinimal.h"
#include "ETPBrakingWhenOtherCarType.h"
#include "ETPEvaluatePointMethodType.h"
#include "STPEPM_TemplateDataElement.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSTPEPM_TemplateDataElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETPEvaluatePointMethodType EvaluateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForcedSucceedOthercarFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetPositionRecursivelyNearShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLineTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLineTraceOnWallDetect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OthercarDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETPBrakingWhenOtherCarType BrakeConditionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseBrakingJudgeResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpdateEvaluationResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAcceptRetargetInSteerSpeedDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnlyExecNextOrderFromHitObstacle;
    
    FSTPEPM_TemplateDataElement();
};

