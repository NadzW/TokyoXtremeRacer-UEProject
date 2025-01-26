#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ECarCutInProductionType.h"
#include "CarCutInProductionWorldSubsystem.generated.h"

class UCarCutInProductionHelperBase;
class UObject;
class UWidget;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCarCutInProductionWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCarCutInProductionHelperBase* car_cut_in_helper_;
    
    UCarCutInProductionWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    UObject* PlayCarCutInProduction(ECarCutInProductionType Type, UObject* car_object, UObject* racemanager_object, UWidget* Widget, UWidget* hud_widget);
    
    UFUNCTION(BlueprintCallable)
    UCarCutInProductionHelperBase* GetSubsystemHelper();
    
    UFUNCTION(BlueprintCallable)
    void AddLevelSequence(ECarCutInProductionType Type, UObject* Object);
    
};

