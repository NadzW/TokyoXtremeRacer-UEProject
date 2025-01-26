#pragma once
#include "CoreMinimal.h"
#include "BadNameUnit.h"
#include "BadNameState.generated.h"

USTRUCT(BlueprintType)
struct FBadNameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBadNameUnit> Unit;
    
    TOKYOXTREMERACER_API FBadNameState();
};

