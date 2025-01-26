#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERivalOvertakeAbility.h"
#include "SRivalDrivingOvertakeValues.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingOvertakeValues : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalOvertakeAbility Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSRivalDrivingOvertakeValues();
};

