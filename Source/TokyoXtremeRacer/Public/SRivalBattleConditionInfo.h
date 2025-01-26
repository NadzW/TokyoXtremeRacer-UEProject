#pragma once
#include "CoreMinimal.h"
#include "ECarIceAspirationType.h"
#include "ECarLicensePlateArea.h"
#include "EDriveType.h"
#include "EEngineKind.h"
#include "ERivalBattleCondition.h"
#include "SRivalBattleConditionInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalBattleConditionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalBattleCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriveType DriveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEngineKind EngineKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarIceAspirationType AspirationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarLicensePlateArea PlaceNameIndex;
    
    FSRivalBattleConditionInfo();
};

