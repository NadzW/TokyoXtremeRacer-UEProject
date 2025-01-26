#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERunArea.h"
#include "SCourseIconData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseIconData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea RunArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IconLabel;
    
    FSCourseIconData();
};

