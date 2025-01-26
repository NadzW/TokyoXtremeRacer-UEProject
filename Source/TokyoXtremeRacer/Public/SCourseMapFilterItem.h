#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECourseMapFilterIconType.h"
#include "SCourseMapFilterItem.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseMapFilterItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FilterLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseMapFilterIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> IconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndexOfMaterial;
    
    FSCourseMapFilterItem();
};

