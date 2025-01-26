#pragma once
#include "CoreMinimal.h"
#include "BadNameAcquiredUnit.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FBadNameAcquiredUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> flag_map;
    
    FBadNameAcquiredUnit();
};

