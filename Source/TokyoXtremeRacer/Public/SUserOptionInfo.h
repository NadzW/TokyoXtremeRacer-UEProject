#pragma once
#include "CoreMinimal.h"
#include "SOptionInputMappingInfo.h"
#include "SOptionMusicSelectInfo.h"
#include "SUserOptionGameSetting.h"
#include "SUserOptionVehicleInfo.h"
#include "SUserOptionInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSUserOptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUserOptionVehicleInfo Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUserOptionGameSetting OptionGameSettintInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSOptionInputMappingInfo OptionInputMappingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSOptionMusicSelectInfo OptionMusicSelectInfo;
    
    FSUserOptionInfo();
};

