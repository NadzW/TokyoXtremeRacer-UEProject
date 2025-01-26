#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "BPI_SbAIActionController.generated.h"

class UObject;
class USbAIControllerActionObject;
class USbAIControllerActionObjectRetObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_SbAIActionController : public UInterface {
    GENERATED_BODY()
};

class IBPI_SbAIActionController : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* ProcessAIControllerAction_ReturnObject(TSubclassOf<USbAIControllerActionObjectRetObject> ExecActionClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessAIControllerAction(TSubclassOf<USbAIControllerActionObject> ExecActionClass);
    
};

