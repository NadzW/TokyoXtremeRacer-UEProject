#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "BPFL_Delay.generated.h"

class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_Delay : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Delay();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void DelayByFrame(const UObject* WorldContext, FLatentActionInfo LatentInfo, int32 Frame);
    
};

