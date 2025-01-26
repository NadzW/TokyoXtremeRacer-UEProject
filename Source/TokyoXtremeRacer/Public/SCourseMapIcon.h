#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCourseMapIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseMapIcon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    FSCourseMapIcon();
};

