#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SCarCutInProductionStructInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarCutInProductionStructInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath level_sequence_;
    
    FSCarCutInProductionStructInfo();
};

