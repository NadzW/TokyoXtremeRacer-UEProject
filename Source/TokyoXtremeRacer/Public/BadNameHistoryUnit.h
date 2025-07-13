#pragma once
#include "CoreMinimal.h"
#include "BadNameHistoryData.h"
#include "BadNameHistoryUnit.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FBadNameHistoryUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBadNameHistoryData> flag_map;
    
    FBadNameHistoryUnit();
};

