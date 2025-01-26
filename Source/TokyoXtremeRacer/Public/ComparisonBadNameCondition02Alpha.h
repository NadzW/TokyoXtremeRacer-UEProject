#pragma once
#include "CoreMinimal.h"
#include "ComparisonBadNameCondition02Alpha.generated.h"

USTRUCT(BlueprintType)
struct FComparisonBadNameCondition02Alpha {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalDefeatCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinBattleTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxBattleTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalCP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LostCP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighestWinningStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableCheckCondition02;
    
    TOKYOXTREMERACER_API FComparisonBadNameCondition02Alpha();
};

