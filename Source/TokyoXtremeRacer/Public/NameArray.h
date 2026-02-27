#pragma once
#include "CoreMinimal.h"
#include "NameArray.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FNameArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Array;
    
    FNameArray();
};

