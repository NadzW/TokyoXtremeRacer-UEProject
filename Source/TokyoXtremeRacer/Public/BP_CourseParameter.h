#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_CourseParameter.h"
#include "BP_CourseParameter.generated.h"

UCLASS(Blueprintable)
class UBP_CourseParameter : public UObject, public IBPI_CourseParameter {
    GENERATED_BODY()
public:
    UBP_CourseParameter();


    // Fix for true pure virtual functions not being implemented
};

