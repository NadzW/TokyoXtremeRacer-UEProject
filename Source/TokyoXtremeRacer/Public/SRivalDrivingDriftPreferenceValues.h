#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERivalDriftPreference.h"
#include "SRivalDrivingDriftPreferenceValues.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingDriftPreferenceValues : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalDriftPreference Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSRivalDrivingDriftPreferenceValues();
};

