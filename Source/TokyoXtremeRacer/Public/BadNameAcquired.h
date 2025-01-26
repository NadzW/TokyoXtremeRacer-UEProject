#pragma once
#include "CoreMinimal.h"
#include "BadNameAcquiredUnit.h"
#include "EBadNameConditionSubType.h"
#include "BadNameAcquired.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FBadNameAcquired {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBadNameConditionSubType, FBadNameAcquiredUnit> Map;
    
    FBadNameAcquired();
};

