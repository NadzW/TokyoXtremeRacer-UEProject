#pragma once
#include "CoreMinimal.h"
#include "ERunArea.generated.h"

UENUM(BlueprintType)
enum class ERunArea : uint8 {
    ERA_None,
    ERA_C1Out,
    ERA_C1In,
    ERA_NLLeft,
    ERA_NLRight,
    ERA_WgEast,
    ERA_WgWest,
    ERA_K1_Up,
    ERA_K1_Down,
    ERA_WgWestToYkHnUp,
    ERA_WgWestToYkHnDown,
    ERA_WgEastToYkHnUp,
    ERA_YkHnUpToWgEest,
};

