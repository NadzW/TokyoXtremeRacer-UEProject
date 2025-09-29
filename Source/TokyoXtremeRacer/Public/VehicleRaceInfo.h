#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDriverBattleStatus.h"
#include "ESkillTarget.h"
#include "ESkillTreeType.h"
#include "SBattleBaseInfo.h"
#include "SSkillEffectiveValue.h"
#include "SSkillTree.h"
#include "VehicleRaceInfo.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UVehicleRaceInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseSp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentSp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SPDiffence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverBattleStatus BattleStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceSoFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExSp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> BaseCollisionCoefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> RecoveryValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> AttackValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> DefenseValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackIncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageReductionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> CollisionCoefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> CollisionCoefsForSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> JudgeMentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> ConsumptionCoefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, FSSkillEffectiveValue> AddByWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTarget, int32> ConsumptionCoefsForSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfCollisionsAvoided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumOfCollisionsAvoided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TodayNumOfWin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CollisionsAvoidedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTreeType, int32> EquipSkills;
    
    UVehicleRaceInfo();

    UFUNCTION(BlueprintCallable)
    void Update(const double in_dt, bool& out_end_collision_avoided);
    
    UFUNCTION(BlueprintCallable)
    void SetupBase(const int32 _level, const int32 max_sp, const double current_sp, const int32 sp_attack, const int32 sp_diffence, const double in_millage);
    
    UFUNCTION(BlueprintCallable)
    void SetTodayNumOfWin(const int32 in_num);
    
    UFUNCTION(BlueprintCallable)
    double SetSp(const double Sp);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionAvoidedTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetBase(const int32 max_sp, const double current_sp, const int32 sp_attack, const int32 sp_diffence);
    
    UFUNCTION(BlueprintCallable)
    void ResetBeforeEveryBattle(const bool in_is_continuous_battle);
    
    UFUNCTION(BlueprintCallable)
    int32 RefrectSkillParameter(const FSSkillTree in_skill);
    
    UFUNCTION(BlueprintCallable)
    bool IsCollisionsAvoided();
    
    UFUNCTION(BlueprintCallable)
    bool GetRecoveryValueOrg(const ESkillTarget in_target, int32& out_value);
    
    UFUNCTION(BlueprintCallable)
    bool GetRecoveryValue(const ESkillTarget in_target, double& out_value);
    
    UFUNCTION(BlueprintCallable)
    bool GetRecoveryRate(const ESkillTarget in_target, double& out_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSp() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetJudgementValue(const ESkillTarget in_target, int32& out_value);
    
    UFUNCTION(BlueprintPure)
    double GetDefenseCoef(const double in_battle_time, bool& out_exe_time_bonus) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDEF(const bool in_is_multiplayer_battle);
    
    UFUNCTION(BlueprintPure)
    double GetDamageDefenseCoef(const double in_battle_time, bool& out_find_coef) const;
    
    UFUNCTION(BlueprintPure)
    double GetDamageAttackCoef(const double in_battle_time, bool& out_find_coef) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetConsumptionCoef(const ESkillTarget in_target, const ESkillTarget in_is_special_target, bool& out_base_skill, bool& out_special_skill);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCollisionCoefForSpecial(const ESkillTarget in_target, bool& out_use_skill);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCollisionCoef(const ESkillTarget in_target, bool& out_use_skill);
    
    UFUNCTION(BlueprintCallable)
    FSBattleBaseInfo GetBattleBaseInfo(const bool in_is_pa_battle, const bool in_is_multiplayer_battle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBaseCollisionCoef(const ESkillTarget in_target);
    
    UFUNCTION(BlueprintPure)
    double GetAttackCoef(const double in_battle_time, bool& out_exe_time_bonus) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetATK(const bool in_is_pa_battle);
    
    UFUNCTION(BlueprintCallable)
    void ClearEquipSkills();
    
    UFUNCTION(BlueprintCallable)
    double AddSp(const double Sp);
    
    UFUNCTION(BlueprintCallable)
    void AddEquipSkills(const ESkillTreeType in_type, const int32 in_level);
    
};

