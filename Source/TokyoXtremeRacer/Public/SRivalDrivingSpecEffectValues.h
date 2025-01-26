#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERivalSpecEffect.h"
#include "SRivalDrivingSpecEffectValues.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingSpecEffectValues : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalSpecEffect Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSRivalDrivingSpecEffectValues();
};

