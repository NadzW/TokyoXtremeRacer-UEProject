#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SMapSplineMeshColor.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMapSplineMeshColor : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SplineColor;
    
    FSMapSplineMeshColor();
};

