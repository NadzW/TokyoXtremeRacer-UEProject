#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_OthercarDetectionDistance.h"
#include "BP_OthercarDetectionDistance.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBP_OthercarDetectionDistance : public UObject, public IBPI_OthercarDetectionDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> OthercarDistances;
    
    UBP_OthercarDetectionDistance();


    // Fix for true pure virtual functions not being implemented
};

