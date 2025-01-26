#pragma once
#include "CoreMinimal.h"
#include "CoursePictRPDNameContainer.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCoursePictRPDNameContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CoursePictName;
    
    FCoursePictRPDNameContainer();
};

