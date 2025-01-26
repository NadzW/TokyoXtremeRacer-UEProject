#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ADNU_ComputeSteerAnglarVelocityAIConfigArg.h"
#include "SLaneInfo.h"
#include "BPFL_AutoDriveNativeUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_AutoDriveNativeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_AutoDriveNativeUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> SortLanesNearCurrentLane2(TArray<int32> Lanes, float CurrentLane, float CenterLane, float LeftWallLane, float RightWallLane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> SortLanesNearCurrentLane(TArray<int32> Lanes, float CurrentLane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<int32, float> SortFastRelativeSpeed(TMap<int32, float> RelativeSpeeds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<int32, float> SortDistanceLong(TMap<int32, float> Distances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SignWithoutZero_Float(const float A);
    
    UFUNCTION(BlueprintPure)
    static double SignWithoutZero_Double(const double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeySideRoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyRoadLine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyRandomLaneChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyPriorityLane();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyLaneChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyDrivingLaneChange2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyDrivingLaneChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyCurrentLanePlayerIgnore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyCurrentLane();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyCenterLine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ReturnEvaluateNameKeyBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ConstructLaneInfoNameFromLaneInfo(const FSLaneInfo& LaneInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ConstructLaneInfoName(const FName& RPDName, const int32 LaneIndex);
    
    UFUNCTION(BlueprintPure)
    static float ComputeSteerAnglarVelocity(const FVector& PrevFrameAngularVelocity, const double DeltaSecond, const double VsTargetYawAngle, const float tSteer, const double tRelativePointUpdateDistance, const FADNU_ComputeSteerAnglarVelocityAIConfigArg& AIConfigArgs, const float SpeedKmh, const float SlipAngle);
    
};

