#pragma once
#include "CoreMinimal.h"
#include "ECourseArea.h"
#include "EParkingArea.h"
#include "ERaceMode.h"
#include "ERunArea.h"
#include "SCourseTrafficJamInfoForRefrences.h"
#include "SEventForcedAddRivalAreaInfo.h"
#include "SGraveInfo.h"
#include "SObstacleBrokenVehickeInfo.h"
#include "SObstacleConstructionSiteInfo.h"
#include "SParkingAreaTunerInfo.h"
#include "SPlayerIntermediateData.h"
#include "SRacePositionInfo.h"
#include "SRaceProcessAndResultInfo.h"
#include "SRaceRivalParkingAreaPositionInfo.h"
#include "SRaceRivalPositionInfo.h"
#include "SRivalPlacedInfo.h"
#include "SRaceCoreInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRaceCoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enable_position_update;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRacePositionInfo PlayerPositionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSPlayerIntermediateData PlayerIntermediateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AddedRivals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRivalPlacedInfo> AppearanceRivalInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunArea, FSRaceRivalPositionInfo> RunAreaRivalPositionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EParkingArea, FSRaceRivalParkingAreaPositionInfo> ParkingAreaRivalPositionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGraveInfo GraveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourseArea, FSObstacleConstructionSiteInfo> RoadConstructionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourseArea, FSObstacleBrokenVehickeInfo> BrokenVehicleInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunArea, FSCourseTrafficJamInfoForRefrences> CourseTrafficJamInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunArea, FSEventForcedAddRivalAreaInfo> EventForcedAddRivalAreaInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRaceProcessAndResultInfo RaceProcessAndResultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSParkingAreaTunerInfo ParkingAreaTunerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NotMeetTheBattleConditionRivals;
    
    FSRaceCoreInfo();
};

