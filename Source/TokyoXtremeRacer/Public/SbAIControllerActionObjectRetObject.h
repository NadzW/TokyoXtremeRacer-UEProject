#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_SbAIActionObjectRetObject.h"
#include "SbAIControllerActionObjectRetObject.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API USbAIControllerActionObjectRetObject : public UObject, public IBPI_SbAIActionObjectRetObject {
    GENERATED_BODY()
public:
    USbAIControllerActionObjectRetObject();


    // Fix for true pure virtual functions not being implemented
};

