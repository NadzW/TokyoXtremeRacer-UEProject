#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESkillTreeCategory.h"
#include "SPerkCategoryRootInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPerkCategoryRootInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillTreeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameInCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    FSPerkCategoryRootInfo();
};

