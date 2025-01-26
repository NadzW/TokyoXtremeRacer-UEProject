#pragma once
#include "CoreMinimal.h"
#include "ECustomCarPartsType.h"
#include "SCustomCarParts.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCustomCarParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomCarPartsType EquipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECustomCarPartsType> HaveTypes;
    
    FSCustomCarParts();
};

