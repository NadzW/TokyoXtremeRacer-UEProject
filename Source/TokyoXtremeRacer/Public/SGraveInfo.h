#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SGraveInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSGraveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FSGraveInfo();
};

