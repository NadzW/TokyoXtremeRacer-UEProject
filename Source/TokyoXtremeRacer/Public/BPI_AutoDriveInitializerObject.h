#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_AutoDriveInitializerObject.generated.h"

class AAIController;
class APawn;
class UBlackboardComponent;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_AutoDriveInitializerObject : public UInterface {
    GENERATED_BODY()
};

class IBPI_AutoDriveInitializerObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void InitializeProcess(UObject* WorldContextObject, APawn* ControlledPawn, AAIController* OwnerController, UBlackboardComponent* Blackboard);
    
};

