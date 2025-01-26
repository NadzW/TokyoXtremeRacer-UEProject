#pragma once
#include "CoreMinimal.h"
#include "ECustomCarPartsSimpleKind.generated.h"

UENUM(BlueprintType)
enum class ECustomCarPartsSimpleKind : uint8 {
    Muffler,
    FrontBumper,
    RearBumper,
    SideSkirt,
    Bonnet,
    RearSpoiler,
    Wheel,
    BrakeCaliper,
    BrakeRotar,
    Num,
    None,
};

