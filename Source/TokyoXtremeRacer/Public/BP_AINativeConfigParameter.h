#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_AINativeParameter.h"
#include "BP_AINativeConfigParameter.generated.h"

class UBP_AINativeConfigParameter;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBP_AINativeConfigParameter : public UObject, public IBPI_AINativeParameter {
    GENERATED_BODY()
public:
    UBP_AINativeConfigParameter();

    UFUNCTION(BlueprintCallable)
    void Copy(const UBP_AINativeConfigParameter* From);
    

    // Fix for true pure virtual functions not being implemented
};

