#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarLicensePlateArea.h"
#include "SCarLicensePlateAreaLoteryInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarLicensePlateAreaLoteryInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    int32 LoteryProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    ECarLicensePlateArea Area;
    
    FSCarLicensePlateAreaLoteryInfo();
};

