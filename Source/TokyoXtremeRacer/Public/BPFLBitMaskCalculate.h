#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFLBitMaskCalculate.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFLBitMaskCalculate : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFLBitMaskCalculate();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 OnBitmask(const int32 TargetFlags, const int32 CompareFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 OffBitmask(const int32 TargetFlags, const int32 CompareFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrueBitmask(const int32 TargetFlags, const int32 CompareFlags);
    
};

