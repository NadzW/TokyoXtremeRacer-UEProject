#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_SbAICActionObject.h"
#include "SbAIControllerActionObject.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API USbAIControllerActionObject : public UObject, public IBPI_SbAICActionObject {
    GENERATED_BODY()
public:
    USbAIControllerActionObject();


    // Fix for true pure virtual functions not being implemented
};

