#pragma once
#include "CoreMinimal.h"
#include "CompletedCarCutLoadDelegate.h"
#include "ECarCutInProductionType.h"
#include "LoadSoftObjectAsyncActionBase.h"
#include "CarCutInProductionActionBase.generated.h"

class UCarCutInProductionActionBase;
class UCarCutInProductionWorldSubsystem;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCarCutInProductionActionBase : public ULoadSoftObjectAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedCarCutLoad Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCarCutInProductionWorldSubsystem* car_cut_in_subsystem_;
    
public:
    UCarCutInProductionActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCarCutInProductionActionBase* LoadCarCutProduction(UObject* WorldContextObject, UDataTable* data_table, ECarCutInProductionType car_cut_in_production_type);
    
};

