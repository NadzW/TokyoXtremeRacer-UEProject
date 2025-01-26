#pragma once
#include "CoreMinimal.h"
#include "ECarType.h"
#include "EParkingArea.h"
#include "ERaceDayOfWeek.h"
#include "ERaceTimeZone.h"
#include "ERivalAppearanceCondition.h"
#include "SRivalAppearanceCondition.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalAppearanceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalAppearanceCondition Condition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarType CarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceTimeZone TimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParkingArea ParkingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceDayOfWeek DayOfWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameValue;
    
    FSRivalAppearanceCondition();
};

