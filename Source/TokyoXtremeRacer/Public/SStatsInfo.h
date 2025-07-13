#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAchievementsPlatform.h"
#include "EStatsTypeKind.h"
#include "SStatsInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSStatsInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatsTypeKind StatsDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAchievementsPlatform, FString> PlatformId;
    
    FSStatsInfo();
};

