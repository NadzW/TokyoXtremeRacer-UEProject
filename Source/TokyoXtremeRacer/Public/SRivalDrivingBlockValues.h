#pragma once
#include "CoreMinimal.h"
#include "EBlockMethod.h"
#include "SRivalDrivingValuesBase.h"
#include "SRivalDrivingBlockValues.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingBlockValues : public FSRivalDrivingValuesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockMethod Key;
    
    FSRivalDrivingBlockValues();
};

