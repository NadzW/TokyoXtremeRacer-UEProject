#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECourseMapFilterIconType.h"
#include "CourseIconWidgetData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCourseIconWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseMapFilterIconType FilterIconType;
    
    FCourseIconWidgetData();
};

