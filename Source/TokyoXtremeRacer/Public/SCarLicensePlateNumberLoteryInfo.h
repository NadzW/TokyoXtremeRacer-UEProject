#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarLicensePlateArea.h"
#include "SCarLicensePlateNumberLoteryInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarLicensePlateNumberLoteryInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    int32 LoteryProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool IsRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndividualNumber1000;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndividualNumber0100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndividualNumberHyphen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndividualNumber0010;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndividualNumber0001;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    ECarLicensePlateArea ForcedArea;
    
    FSCarLicensePlateNumberLoteryInfo();
};

