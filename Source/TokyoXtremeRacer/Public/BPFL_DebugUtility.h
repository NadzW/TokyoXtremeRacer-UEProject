#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPFL_DebugUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_DebugUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_DebugUtility();

private:
    UFUNCTION(BlueprintCallable)
    static void SetIsDisplayDebugMessage(const bool bNewIsDisplayDebugMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsDisplayDebugMessage();
    
    UFUNCTION(BlueprintCallable)
    static void DoDebugBreak();
    
};

