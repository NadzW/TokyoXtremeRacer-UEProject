#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RoadPoint.h"
#include "RoadPointDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FRoadPointDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoadPoint> Lines;
    
    FRoadPointDataTableRow();
};

