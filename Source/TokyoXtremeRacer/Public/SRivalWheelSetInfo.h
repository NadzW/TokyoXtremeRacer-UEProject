#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SRivalWheelSetInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalWheelSetInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FrontColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Rear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RearColorId;
    
    FSRivalWheelSetInfo();
};

