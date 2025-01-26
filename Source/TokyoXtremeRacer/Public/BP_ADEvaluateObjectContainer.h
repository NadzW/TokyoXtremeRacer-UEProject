#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_ADEvaluateObjectContainer.h"
#include "BP_ADEvaluateObjectContainer.generated.h"

class AActor;
class UBP_TPEvaluateMethod;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBP_ADEvaluateObjectContainer : public UObject, public IBPI_ADEvaluateObjectContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UBP_TPEvaluateMethod*> EvaluateObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AlwaysIgnoreActor;
    
public:
    UBP_ADEvaluateObjectContainer();


    // Fix for true pure virtual functions not being implemented
};

