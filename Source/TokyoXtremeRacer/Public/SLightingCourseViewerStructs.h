#pragma once
#include "CoreMinimal.h"
#include "ECarType.h"
#include "SCustomCarPartsStruct.h"
#include "SLightingCourseViewerStructs.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSLightingCourseViewerStructs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarType CarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCustomCarPartsStruct CustomInfo;
    
    FSLightingCourseViewerStructs();
};

