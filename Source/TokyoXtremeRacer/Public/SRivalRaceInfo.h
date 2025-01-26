#pragma once
#include "CoreMinimal.h"
#include "ERivalPlacementSituation.h"
#include "SRivalInfo.h"
#include "SRivalRaceInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalRaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalPlacementSituation PlacementSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PositionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoseNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawNum;
    
    FSRivalRaceInfo();
};

