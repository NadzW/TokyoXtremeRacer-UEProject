#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_SbAICActionObject.generated.h"

class AAIController;
class APawn;
class UBlackboardComponent;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_SbAICActionObject : public UInterface {
    GENERATED_BODY()
};

class IBPI_SbAICActionObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void ExecAction(UObject* WorldContextObject, APawn* ControlledPawn, AAIController* OwnerController, UBlackboardComponent* Blackboard);
    
};

