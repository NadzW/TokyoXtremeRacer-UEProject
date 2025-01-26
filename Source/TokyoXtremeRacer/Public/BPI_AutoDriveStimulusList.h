#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SADStimulusAdditionalInfo.h"
#include "SADStimulusInfo.h"
#include "SADStimulusLaneTargetInfoElement.h"
#include "SRoadPointPositionInfo.h"
#include "Templates/SubclassOf.h"
#include "BPI_AutoDriveStimulusList.generated.h"

class AAIController;
class AActor;
class USbAIControllerActionObjectRetObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_AutoDriveStimulusList : public UInterface {
    GENERATED_BODY()
};

class IBPI_AutoDriveStimulusList : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateStimulusElement(FSADStimulusInfo SourceStimulusInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateStimulusAdditionalData(FName TargetId, const FSADStimulusAdditionalInfo& AdditionalData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateStimulusActorPosInfo(FName TargetId, FSRoadPointPositionInfo SourceRPDPosInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLaneBaseInfoLane(FName TargetId, FName NewLaneInfoName, FSADStimulusLaneTargetInfoElement NewInfoElement, AAIController* ExecutorAIController, TSubclassOf<USbAIControllerActionObjectRetObject> ExecActionClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnStimulusAdditionalData(FName TargetId, FSADStimulusAdditionalInfo& AdditionalData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnStimulantList(TArray<FSADStimulusInfo>& StimulantList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnStimulantInfoFromActor(AActor* TargetActor, FSADStimulusInfo& StimulusInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnStimulantAdditionalInfoFromActor(AActor* TargetActor, FSADStimulusAdditionalInfo& AdditionalStimulantInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnStimulantActorPosInfo(FName TargetId, FSRoadPointPositionInfo& RPDPosInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnLaneBaseInfoKeys(TArray<FName>& Keys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnLaneBaseInfoInLane(FName LaneInfoName, TArray<FSADStimulusLaneTargetInfoElement>& LaneTargetInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnLaneBaseInfoElement(FName LaneInfoName, FName TargetId, FSADStimulusLaneTargetInfoElement& LaneTargetInfo, bool& bIsFind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveStimulusElement(FName TargetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveStimulusAddtionalData(FName TargetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveStimulantActorPosInfo(FName TargetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveLaneInfo(FName LaneInfoName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveLaneBaseInfoElement(FName TargetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLaneBaseInfoElement(FName LaneInfoName, FName TargetId, FSADStimulusLaneTargetInfoElement LaneTargetInfo, AAIController* ExecutorAIController, TSubclassOf<USbAIControllerActionObjectRetObject> ExecuteActionClass);
    
};

