#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_BadNameChecker.h"
#include "BadNameCheckerBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TOKYOXTREMERACER_API UBadNameCheckerBase : public UObject, public IBPI_BadNameChecker {
    GENERATED_BODY()
public:
    UBadNameCheckerBase();


    // Fix for true pure virtual functions not being implemented
};

