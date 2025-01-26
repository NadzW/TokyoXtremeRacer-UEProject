#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_ThreadUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_ThreadUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ThreadUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintText_ThreadGuarded(const UObject* WorldContextObject, const FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float duration, const FName Key, const bool ExtraCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCallerInGameThread();
    
};

