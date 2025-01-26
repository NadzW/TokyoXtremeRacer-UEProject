#pragma once
#include "CoreMinimal.h"
#include "SShopFistTravelInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSShopFistTravelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FastTravelFlags;
    
    FSShopFistTravelInfo();
};

