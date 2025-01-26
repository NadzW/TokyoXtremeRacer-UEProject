#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "SRaceCarInfo.generated.h"

class UBP_AutoDriveDriverParameter;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRaceCarInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRuntimeDriverParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBP_AutoDriveDriverParameter* AutoDriveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper AbilityRecordJsonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidAbilityRecordJsonData;
    
    FSRaceCarInfo();
};

