#pragma once
#include "CoreMinimal.h"
#include "AutomationModeInfoBase.h"
#include "SAutoDriveLearningInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSAutoDriveLearningInfo : public FAutomationModeInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseParameterPath;
    
    FSAutoDriveLearningInfo();
};

