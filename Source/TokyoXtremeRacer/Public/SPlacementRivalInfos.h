#pragma once
#include "CoreMinimal.h"
#include "SRivalRaceInfo.h"
#include "SPlacementRivalInfos.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPlacementRivalInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSRivalRaceInfo> Infos;
    
    FSPlacementRivalInfos();
};

