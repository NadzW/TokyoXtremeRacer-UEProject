#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SStartLevelInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSStartLevelInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> levels_;
    
    FSStartLevelInfo();
};

