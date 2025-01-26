#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BadNameState.h"
#include "ERunArea.h"
#include "ReplayRivalInfo.h"
#include "ReplayDetailInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FReplayDetailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Date;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBadNameState MyBadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MyCarKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ThumbnailPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplayFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayRivalInfo> RivalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedDelete;
    
    FReplayDetailInfo();
};

