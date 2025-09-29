#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BPLF_WorldToScreen.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPLF_WorldToScreen : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPLF_WorldToScreen();

    UFUNCTION(BlueprintCallable)
    static bool WorldToScreen(UCameraComponent* CameraComponent, const float& ViewRectX, const float& ViewRectY, const FVector& WorldPosition, FVector2D& ScreenPosition);
    
};

