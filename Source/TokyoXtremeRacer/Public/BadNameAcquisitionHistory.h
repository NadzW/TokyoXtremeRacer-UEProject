#pragma once
#include "CoreMinimal.h"
#include "BadNameHistoryUnit.h"
#include "EBadNameDisplayType.h"
#include "BadNameAcquisitionHistory.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FBadNameAcquisitionHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBadNameDisplayType, FBadNameHistoryUnit> display_map;
    
    FBadNameAcquisitionHistory();
};

