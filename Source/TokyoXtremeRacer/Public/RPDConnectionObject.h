#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_RPDConnectionObject.h"
#include "RPDConnectionObject.generated.h"

UCLASS(Blueprintable, Transient)
class TOKYOXTREMERACER_API URPDConnectionObject : public UObject, public IBPI_RPDConnectionObject {
    GENERATED_BODY()
public:
    URPDConnectionObject();


    // Fix for true pure virtual functions not being implemented
};

