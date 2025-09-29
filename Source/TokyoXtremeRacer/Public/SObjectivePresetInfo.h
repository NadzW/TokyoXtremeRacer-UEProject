#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStoryStage.h"
#include "SObjectivePresetInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSObjectivePresetInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ClearMyGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ClearObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludeObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryStage BaseStage;
    
    FSObjectivePresetInfo();
};

