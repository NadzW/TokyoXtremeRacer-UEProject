#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CoursePictUnitData.h"
#include "ECoursePictZone.h"
#include "CoursePictData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCoursePictData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoursePictZone CoursePictZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoursePictLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePictUnitData First;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePictUnitData Final;
    
    FCoursePictData();
};

