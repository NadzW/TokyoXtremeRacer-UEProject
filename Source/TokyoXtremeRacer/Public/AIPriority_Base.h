#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIPriority_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class TOKYOXTREMERACER_API UAIPriority_Base : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReverse;
    
public:
    UAIPriority_Base();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SortPredicate(float Left, float Right);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> Sort(TArray<float> LaneRates);
    
};

