#pragma once
#include "CoreMinimal.h"
#include "SwitchableDebugTextTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct ITSBSTATETREE_API FSwitchableDebugTextTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    FSwitchableDebugTextTaskInstanceData();
};

