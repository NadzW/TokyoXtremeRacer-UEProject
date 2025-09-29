#pragma once
#include "CoreMinimal.h"
#include "EParallelBehaviorTreeRunThreadType.generated.h"

UENUM(BlueprintType)
enum class EParallelBehaviorTreeRunThreadType : uint8 {
    EPBTRTT_GameThread,
    EPBTRTT_BackGroundWorker,
    EPBTRTT_DedicatedThreadPool,
};

