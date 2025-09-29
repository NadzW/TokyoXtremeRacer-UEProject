#pragma once
#include "CoreMinimal.h"
#include "EStoryStage.h"
#include "SRecollectionStoryInfoDataArray.h"
#include "SRecollectionStoryInfoDataList.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionStoryInfoDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStoryStage, FSRecollectionStoryInfoDataArray> list;
    
    FSRecollectionStoryInfoDataList();
};

