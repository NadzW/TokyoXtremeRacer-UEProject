#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SPerkRepayment.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPerkRepayment : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    FSPerkRepayment();
};

