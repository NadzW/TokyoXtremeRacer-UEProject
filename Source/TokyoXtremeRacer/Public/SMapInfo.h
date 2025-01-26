#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECourseEnter.h"
#include "ECourseOpenArea.h"
#include "EParkingArea.h"
#include "SMapInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OG_Map_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OG_Map_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IG_Map_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IG_Map_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Icon_Focus_Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_first_time_course_in;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseEnter LastSelectedCourceEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParkingArea LastSelectedParkingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourseOpenArea, bool> CourseOpenArea_Popup;
    
    FSMapInfo();
};

