#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TokyoXtremeRacerBlueprintLibrary.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UTokyoXtremeRacerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTokyoXtremeRacerBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void PlayLoadingScreen(UUserWidget* Widget, bool bPlayUntilStopped, float PlayTime, bool EngineTick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInEditor();
    
};

