#pragma once
#include "CoreMinimal.h"
#include "ENeonLightPositionType.h"
#include "ENeonLightType.h"
#include "SMyCarNeon.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMyCarNeon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeonLightPositionType position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeonLightType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cycle;
    
    FSMyCarNeon();
};

