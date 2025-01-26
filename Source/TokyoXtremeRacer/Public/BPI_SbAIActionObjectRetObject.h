#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_SbAIActionObjectRetObject.generated.h"

class AAIController;
class APawn;
class UBlackboardComponent;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_SbAIActionObjectRetObject : public UInterface {
    GENERATED_BODY()
};

class IBPI_SbAIActionObjectRetObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    UObject* ExecAction(UObject* WorldContextObject, APawn* ControlledPawn, AAIController* OwnerController, UBlackboardComponent* Blackboard);
    
};

