#pragma once
#include "CoreMinimal.h"
#include "AutomationModeInfoBase.h"
#include "BenchmarkModeInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FBenchmarkModeInfo : public FAutomationModeInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOutputBenchmarkReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRandomizeCarType;
    
    FBenchmarkModeInfo();
};

