#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ECustomCarPartsType.h"
#include "SPartsSoftObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPartsSoftObjectInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECustomCarPartsType, FSoftObjectPath> soft_parts_list_;
    
    FSPartsSoftObjectInfo();
};

