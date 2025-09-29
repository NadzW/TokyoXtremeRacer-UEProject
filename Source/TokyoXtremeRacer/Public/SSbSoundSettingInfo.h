#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOP_BattleBgmTiming.h"
#include "EOP_Scalability.h"
#include "SSbSoundSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSbSoundSettingInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Option_MasterVolumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Option_BgmVolumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Option_SeVolumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Option_CarVolumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOP_Scalability Option_SoundQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOP_BattleBgmTiming Option_BattleBgmTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Option_ShiftAlert;
    
    FSSbSoundSettingInfo();
};

