#pragma once
#include "CoreMinimal.h"
#include "ECourseEnter.h"
#include "EParkingArea.h"
#include "SParkingBattleInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSParkingBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParkingArea ParkingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseEnter CourseEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RivalIds;
    
    FSParkingBattleInfo();
};

