#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_GameRivisionUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_GameRivisionUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_GameRivisionUtility();

private:
    UFUNCTION(BlueprintCallable)
    static FText GetTitleVersionText();
    
    UFUNCTION(BlueprintCallable)
    static FText GetTitleRevisionText();
    
};

