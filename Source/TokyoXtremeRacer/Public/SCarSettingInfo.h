#pragma once
#include "CoreMinimal.h"
#include "ECarSetting.h"
#include "ECarSettingAutoKind.h"
#include "ECarSettingAutoType.h"
#include "SCarSettingTransmissionInfo.h"
#include "SCarSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarSettingTransmissionInfo transmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECarSetting, int32> Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECarSettingAutoKind, ECarSettingAutoType> AutoSettings;
    
    FSCarSettingInfo();
};

