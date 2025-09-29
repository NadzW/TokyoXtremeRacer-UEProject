#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESkillTreeType.h"
#include "EVehicleTuneEngine.h"
#include "EVehicleTuneKind.h"
#include "SSkillTreeIcon.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSkillTreeIcon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillTreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleTuneKind TuneParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleTuneEngine TuneEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarMaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FSSkillTreeIcon();
};

