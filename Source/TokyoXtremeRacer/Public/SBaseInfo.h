#pragma once
#include "CoreMinimal.h"
#include "SBaseInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSBaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDaysForDisplayed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaxCp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CpMinUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBattleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGarageCarNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PartsPriceBaseCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPP;
    
    FSBaseInfo();
};

