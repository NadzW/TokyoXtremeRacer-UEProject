#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDriverBattleStatus.h"
#include "VehicleRaceInfo.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UVehicleRaceInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentSp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SPDiffence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WallShockResistancePer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CarShockResistancePer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverBattleStatus BattleStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceSoFar;
    
    UVehicleRaceInfo();

    UFUNCTION(BlueprintCallable)
    void SetWallShockResistancePer(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetupBase(const int32 _level, const int32 max_sp, const double current_sp, const int32 sp_attack, const int32 sp_diffence, const double in_millage);
    
    UFUNCTION(BlueprintCallable)
    double SetSp(const double Sp, const bool is_current);
    
    UFUNCTION(BlueprintCallable)
    void SetCarShockResistancePer(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    double AddSp(const double Sp, const bool is_current);
    
};

