#pragma once
#include "CoreMinimal.h"
#include "SRecollectionRivalInfoData.h"
#include "SRecollectionRivalInfoDataList.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionRivalInfoDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRecollectionRivalInfoData> RivalList;
    
    FSRecollectionRivalInfoDataList();
};

