#pragma once
#include "CoreMinimal.h"
#include "ESkillTarget.h"
#include "VehicleRaceInfo.h"
#include "PlayerRaceInfo.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPlayerRaceInfo : public UVehicleRaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWiningStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfWinsBonusStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerfectBonusAddCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalPrizeAddCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinningStreakBonusAddCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> TechniqueBonueCoef;
    
    UPlayerRaceInfo();

    UFUNCTION(BlueprintCallable)
    void Setup(const int32 max_wining_streak);
    
    UFUNCTION(BlueprintCallable)
    bool GetTechniqueBonusCoef(const ESkillTarget in_taget, int32& out_value);
    
    UFUNCTION(BlueprintCallable)
    void AddTechniqueBonusCoef(const ESkillTarget in_target, const int32 in_value);
    
};

