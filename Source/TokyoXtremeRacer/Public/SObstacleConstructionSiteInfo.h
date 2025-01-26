#pragma once
#include "CoreMinimal.h"
#include "EObstacleConstaractionSiteRange.h"
#include "SObstacleConstructionSiteInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSObstacleConstructionSiteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObstacleConstaractionSiteRange Range;
    
    FSObstacleConstructionSiteInfo();
};

