#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECustomCarPartsKind.h"
#include "SPartsObjectInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPartsObjectInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomCarPartsKind parts_kind_type_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* obejct_;
    
    FSPartsObjectInfo();
};

