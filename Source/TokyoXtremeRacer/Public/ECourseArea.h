#pragma once
#include "CoreMinimal.h"
#include "ECourseArea.generated.h"

UENUM(BlueprintType)
enum class ECourseArea : uint8 {
    InnerCircularRouteInbound,
    InnerCircularRouteOutbound,
    MukojimaLineInbound,
    MukojimaLineOutbound,
    FukagawaLineInbound,
    FukagawaLineOutbound,
    DaibaLineInbound,
    DaibaLineOutbound,
    BayShoreRouteInbound,
    BayShoreRouteOutbound,
    DaikokuLineInbound,
    DaikokuLineOutbound,
    YokohaneLineInbound,
    YokohaneLineOutbound,
    HanedaLineInbound,
    HanedaLineOutbound,
    Num,
    None,
};

