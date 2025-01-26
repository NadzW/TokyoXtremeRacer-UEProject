#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPFL_SbBBAccessBaseLibrary.h"
#include "BPFL_BBSimplePointMoveCar.generated.h"

class UBlackboardComponent;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_BBSimplePointMoveCar : public UBPFL_SbBBAccessBaseLibrary {
    GENERATED_BODY()
public:
    UBPFL_BBSimplePointMoveCar();

    UFUNCTION(BlueprintCallable)
    static void SetVsTargetYaw(UBlackboardComponent* Blackboard, float NewVsTargetYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetSpeedKmh(UBlackboardComponent* Blackboard, float NewTargetSpeedKmh);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetRoadPointPosInfoObject(UBlackboardComponent* Blackboard, UObject* NewTargetRoadPointPosInfoObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetPoint(UBlackboardComponent* Blackboard, const FVector& NewTargetPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetSteer(UBlackboardComponent* Blackboard, float NewSteer);
    
    UFUNCTION(BlueprintCallable)
    static void SetShiftPos(UBlackboardComponent* Blackboard, int32 NewShiftPos);
    
    UFUNCTION(BlueprintCallable)
    static void SetRunStatus(UBlackboardComponent* Blackboard, uint8 NewRunStatus);
    
    UFUNCTION(BlueprintCallable)
    static void SetRPDManager(UBlackboardComponent* Blackboard, UObject* NewRPDManager);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrevShiftPos(UBlackboardComponent* Blackboard, int32 NewPrevShiftPos);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentRoadPointPosInfoObject(UBlackboardComponent* Blackboard, UObject* NewCurrentRoadPointPosInfoObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetCarStatus(UBlackboardComponent* Blackboard, UObject* CarStatus);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrake(UBlackboardComponent* Blackboard, float NewBrake);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoDriveCarSpec(UBlackboardComponent* Blackboard, UObject* NewAutoDriveCarSpec);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIConfigurationParameter(UBlackboardComponent* Blackboard, UObject* NewAIConfigurationParameter);
    
    UFUNCTION(BlueprintCallable)
    static void SetAccel(UBlackboardComponent* Blackboard, float NewAccel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVsTargetYaw(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTargetSpeedKmh(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetTargetRoadPointPosInfoObject(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetPoint(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSteer(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShiftPos(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetRunStatus(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetRPDManager(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrevShiftPos(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetCurrentRoadPointPosInfoObject(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetCarStatus(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBrake(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetAutoDriveCarSpec(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetAIConfigurationParameter(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAccel(const UBlackboardComponent* Blackboard);
    
};

