#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMeasurementType.h"
#include "ERunArea.h"
#include "SSegmentSpeedTrapInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSegmentSpeedTrapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeasurementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GoalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GoalDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    FSSegmentSpeedTrapInfo();
};

