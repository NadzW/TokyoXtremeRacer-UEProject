#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCarLicensePlateNumberRootLoteryInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarLicensePlateNumberRootLoteryInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    int32 IlluminatedLoteryProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    UDataTable* NumberLoteryInfoDataTable;
    
    FSCarLicensePlateNumberRootLoteryInfo();
};

