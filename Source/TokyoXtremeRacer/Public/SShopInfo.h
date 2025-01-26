#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarMaker.h"
#include "ECarType.h"
#include "ECourseExit.h"
#include "EDressUpShopLineups.h"
#include "EParkingArea.h"
#include "ETuningShopLineups.h"
#include "SShopInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSShopInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseExit ShopEnterExit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CpNeededForFirstTravelToCarShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECarMaker> CarMakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECarType> CarTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETuningShopLineups TuneShopLineups;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CpNeededForFirstTravelToTuneShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParkingArea ParkingArea;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CpNeededForFirstTravelToParkingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDressUpShopLineups DressUpShopLineups;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CpNeededForFirstTravelToCustomizeShop;
    
    FSShopInfo();
};

