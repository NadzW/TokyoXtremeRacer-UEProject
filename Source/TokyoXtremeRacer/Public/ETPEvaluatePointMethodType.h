#pragma once
#include "CoreMinimal.h"
#include "ETPEvaluatePointMethodType.generated.h"

UENUM(BlueprintType)
enum class ETPEvaluatePointMethodType : uint8 {
    None,
    CurrentLane,
    CenterLine,
    PriorityLane,
    LaneChange,
    DrivingLineLaneChange,
    SideWall,
    RandomLaneChange,
    RivalBlock,
    DefaultForwarding,
    SideRoad,
    RoadLine,
    CurrentLanePlayerIgnore,
    DrivingLineLaneChange2,
    PlayerLaneAhead,
    PlayerLaneBehind,
    MoveToAnotherLaneForHorn,
};

