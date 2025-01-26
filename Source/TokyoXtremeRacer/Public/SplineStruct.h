#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SplineStruct.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSplineStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RPDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplinePointIndex;
    
    FSplineStruct();
};

