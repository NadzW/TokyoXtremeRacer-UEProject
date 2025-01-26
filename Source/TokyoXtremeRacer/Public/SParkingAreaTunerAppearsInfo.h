#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EParkingArea.h"
#include "ERaceDayOfWeek.h"
#include "EVehicleTuneKind.h"
#include "SParkingAreaTunerAppearsInfo.generated.h"

USTRUCT(BlueprintType)
struct FSParkingAreaTunerAppearsInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceDayOfWeek DayOfWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EParkingArea> Appears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVehicleTuneKind> TuneKinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppearancePercent;
    
    TOKYOXTREMERACER_API FSParkingAreaTunerAppearsInfo();
};

