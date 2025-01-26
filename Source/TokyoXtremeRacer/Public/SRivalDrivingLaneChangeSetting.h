#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SRivalDrivingLaneChangeSetting.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingLaneChangeSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableForArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableForRacingLineChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableOvertake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableRandomLaneChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableCrusingLaneChange;
    
    FSRivalDrivingLaneChangeSetting();
};

