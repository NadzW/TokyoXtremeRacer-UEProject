#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_OthercarDetectionDistance.generated.h"

UINTERFACE(Blueprintable)
class TOKYOXTREMERACER_API UBPI_OthercarDetectionDistance : public UInterface {
    GENERATED_BODY()
};

class TOKYOXTREMERACER_API IBPI_OthercarDetectionDistance : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ReturnOthercarDistance(const FName& LaneEvaluationName, bool& IsContained) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsContainedOthercarDistance(const FName& LaneEvaluationName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearOthercarDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddOthercarDistance(const FName& LaneEvaluationName, const float OthercarDistance);
    
};

