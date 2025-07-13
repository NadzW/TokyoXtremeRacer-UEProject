#pragma once
#include "CoreMinimal.h"
#include "MapNameAndInt.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FMapNameAndInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> key_map;
    
    FMapNameAndInt();
};

