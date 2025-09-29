#pragma once
#include "CoreMinimal.h"
#include "SRecollectionStoryInfoData.h"
#include "SRecollectionStoryInfoDataArray.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionStoryInfoDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSRecollectionStoryInfoData> data_array;
    
    FSRecollectionStoryInfoDataArray();
};

