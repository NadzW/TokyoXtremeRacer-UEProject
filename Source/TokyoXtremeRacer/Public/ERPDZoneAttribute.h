#pragma once
#include "CoreMinimal.h"
#include "ERPDZoneAttribute.generated.h"

UENUM(BlueprintType)
enum class ERPDZoneAttribute : uint8 {
    RPDZA_None,
    RPDZA_C1Out,
    RPDZA_C1In,
    RPDZA_K9Right,
    RPDZA_K9Left,
    RPDZA_C1OutAndK9Left,
    RPDZA_C1InAndK9Right,
    RPDZA_WgEast,
    RPDZA_WgWest,
    RPDZA_3GoShibuya = 11,
    RPDZA_4GoShinjuku,
    RPDZA_K9RightAndWgWest,
    RPDZA_K9LeftAndWgEast,
    RPDZA_YkHnUp = 20,
    RPDZA_YkHnDown,
    RPDZA_YkHnUpAndWgEast,
    RPDZA_WgEastAndYkHnUp,
    RPDZA_WgWestAndYkHnUp,
    RPDZA_WgWestAndYkHnDown,
    RPDZA_OtherCarExit = 29,
};

