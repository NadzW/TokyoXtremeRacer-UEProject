#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_StimulusInfoUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_StimulusInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_StimulusInfoUtility();

    UFUNCTION(BlueprintCallable)
    static FName ConstructLaneInfoName(const FName& RPDName, const int32 LaneIndex);
    
};

