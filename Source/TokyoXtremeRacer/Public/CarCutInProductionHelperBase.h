#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECarCutInProductionType.h"
#include "CarCutInProductionHelperBase.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable)
class TOKYOXTREMERACER_API UCarCutInProductionHelperBase : public UObject {
    GENERATED_BODY()
public:
    UCarCutInProductionHelperBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* PlayCarCutInProduction(ECarCutInProductionType Type, UObject* car_object, UObject* racemanager_object, UWidget* Widget, UWidget* hud_widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispRivalName(bool is_in, ECarCutInProductionType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLevelSequence(ECarCutInProductionType Type, UObject* Object);
    
};

