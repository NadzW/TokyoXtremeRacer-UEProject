#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ControllerModel.h"
#include "GkInputPlatform.generated.h"

UCLASS(Blueprintable)
class UGkInputPlatform : public UObject {
    GENERATED_BODY()
public:
    UGkInputPlatform();

    UFUNCTION(BlueprintCallable)
    static bool IsSteamDeckController(const FControllerModel& ControllerModel);
    
};

