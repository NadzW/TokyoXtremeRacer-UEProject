#pragma once
#include "CoreMinimal.h"
#include "SSpawnIds.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSpawnIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Ids;
    
    FSSpawnIds();
};

