#pragma once
#include "CoreMinimal.h"
#include "SBranchSearchInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSBranchSearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelfBranchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevBranchID;
    
    FSBranchSearchInfo();
};

