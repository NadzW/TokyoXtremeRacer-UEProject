#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_PlatformUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_PlatformUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_PlatformUtility();

    UFUNCTION(BlueprintCallable)
    static void ClipboardPaste(FString& Dest);
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardCopy(const FString& Str);
    
};

