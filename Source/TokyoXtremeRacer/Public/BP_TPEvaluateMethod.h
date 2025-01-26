#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "STPEvaluateScanTPResult.h"
#include "BP_TPEvaluateMethod.generated.h"

UCLASS(Abstract, Blueprintable)
class TOKYOXTREMERACER_API UBP_TPEvaluateMethod : public UObject {
    GENERATED_BODY()
public:
    UBP_TPEvaluateMethod();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    bool ScanTargetPoint(UObject* WorldContextObject, UObject* ConditionValues, const bool bIsLineTraceOnOthercarDetect, const bool bIsLineTraceOnWallDetect, const bool bIsForceSuceedOthercarFound, FSTPEvaluateScanTPResult& OutResult);
    
};

