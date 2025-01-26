#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_ForVehicleCore.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_ForVehicleCore : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ForVehicleCore();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<float> ComputeSprungMass(const float body_mass, const float wheel_base, const TArray<float> tire_len_from_center);
    
};

