#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SRivalDrivingValuesBase.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingValuesBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSRivalDrivingValuesBase();
};

