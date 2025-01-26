#pragma once
#include "CoreMinimal.h"
#include "ECarCategory.h"
#include "ERunArea.h"
#include "VehicleRaceInfo.h"
#include "OtherRaceInfo.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UOtherRaceInfo : public UVehicleRaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOncomingLane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameId;
    
    UOtherRaceInfo();

};

