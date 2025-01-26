#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBrakeInfo.h"
#include "SRivalBrakeSetInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalBrakeSetInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBrakeInfo Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBrakeInfo Rear;
    
    FSRivalBrakeSetInfo();
};

