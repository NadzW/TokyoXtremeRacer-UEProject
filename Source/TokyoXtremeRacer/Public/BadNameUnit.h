#pragma once
#include "CoreMinimal.h"
#include "EBadNameDisplayType.h"
#include "BadNameUnit.generated.h"

USTRUCT(BlueprintType)
struct FBadNameUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBadNameDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    TOKYOXTREMERACER_API FBadNameUnit();
};

