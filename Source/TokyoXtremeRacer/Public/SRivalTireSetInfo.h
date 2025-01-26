#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SRivalTireInfo.h"
#include "SRivalTireSetInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalTireSetInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalTireInfo Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalTireInfo Rear;
    
    FSRivalTireSetInfo();
};

