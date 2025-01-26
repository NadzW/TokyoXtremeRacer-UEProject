#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERunArea.h"
#include "SCourseTrafficJamInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseTrafficJamInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StartInputKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EndInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIgnoreLane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRightLane;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CrusingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea SubArea;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SubStartInputKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SubEndInputKey;
    
    FSCourseTrafficJamInfo();
};

