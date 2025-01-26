#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_AutoDriveStimulusList.h"
#include "SADStimulusAdditionalInfo.h"
#include "SADStimulusInfo.h"
#include "SADStimulusLaneTargetInfoElement.h"
#include "SRoadPointPositionInfo.h"
#include "BP_AutoDriveStimulusList.generated.h"

class AActor;
class UADStimulusLaneTargetInfo;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBP_AutoDriveStimulusList : public UObject, public IBPI_AutoDriveStimulusList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSADStimulusInfo> StimulaLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRoadPointPositionInfo> StimulaPosInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSADStimulusAdditionalInfo> StimulaAdditionalInfos;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, FName> StimulaActorPairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UADStimulusLaneTargetInfo*> StimulaTargetLaneInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UADStimulusLaneTargetInfo* tADStimulusLaneTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> StimulaLaneInfoTargetIDTargetLanePair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSADStimulusLaneTargetInfoElement tLaneBaseInfo;
    
    UBP_AutoDriveStimulusList();


    // Fix for true pure virtual functions not being implemented
};

