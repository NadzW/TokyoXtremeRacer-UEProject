#pragma once
#include "CoreMinimal.h"
#include "ERaceBattleResult.h"
#include "ERunArea.h"
#include "VehicleRaceInfo.h"
#include "RivalRaceInfo.generated.h"

class URivalInfoObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URivalRaceInfo : public UVehicleRaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalInfoObject* RivalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalForcedAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayedCutin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScheduledCutin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockGameVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThisTimeNumOfWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThisTimeNumOfLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThisTimeNumOfDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThisTimeNumOfBattle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceSq;
    
    URivalRaceInfo();

    UFUNCTION(BlueprintCallable)
    void SetIsLockGameVehicle(const bool is_lock);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleResultNum(const int32 num_of_win, const int32 num_of_lose, const int32 num_of_draw);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleResult(const ERaceBattleResult Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLockGameVehicle();
    
    UFUNCTION(BlueprintCallable)
    FName GetId();
    
    UFUNCTION(BlueprintCallable)
    ERunArea GetArea();
    
};

