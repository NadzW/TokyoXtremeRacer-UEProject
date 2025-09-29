#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "BPFL_MouseButton.generated.h"

class UWidget;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_MouseButton : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_MouseButton();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMouseButtonCheckKey(const FPointerEvent& point_event, UWidget* Widget, const FKey Key);
    
};

