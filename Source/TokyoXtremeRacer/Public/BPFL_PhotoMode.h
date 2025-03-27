#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_PhotoMode.generated.h"

class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_PhotoMode : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_PhotoMode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCameraMovableWhenPaused(const UObject* WorldContextObject, bool bIsMovable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPhotomodeSaveDir();
    
};

