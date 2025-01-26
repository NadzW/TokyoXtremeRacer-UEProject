#pragma once
#include "CoreMinimal.h"
#include "ERunArea.h"
#include "SEventForcedAddRivalInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSEventForcedAddRivalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RivalIds;
    
    FSEventForcedAddRivalInfo();
};

