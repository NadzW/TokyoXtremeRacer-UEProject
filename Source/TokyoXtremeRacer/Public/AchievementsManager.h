#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAchievementsKind.h"
#include "ERaceBattleResult.h"
#include "EVehicleTuneKind.h"
#include "EVehicleTuneLevel.h"
#include "SAchievementsIdsForPlatform.h"
#include "SAchievementsSameKindIds.h"
#include "SUserInfo.h"
#include "AchievementsManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UAchievementsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAchievementsKind, FSAchievementsSameKindIds> MapByKindArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleTuneKind, EVehicleTuneLevel> MaxTuneLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RivalsNeedReadProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WandererNeedDefeated;
    
    UAchievementsManager();

    UFUNCTION(BlueprintCallable)
    void Setup(UDataTable* data_table, const TMap<EVehicleTuneKind, EVehicleTuneLevel> in_max_tune_levels, const UDataTable* rival_data_table);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckSpeedTrap(const FName in_speed_trap_name, const double in_current_speed);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckSpeed(const EAchievementsKind in_check_type, const double in_current_speed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckOne(const FSUserInfo& in_user_info, const EAchievementsKind in_kind) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckInput(const EAchievementsKind in_check_kinds, const int32 in_value);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckEvents(const TArray<FName> in_event_ids);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckEvent(const FName in_event_id);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckDistance(const EAchievementsKind in_check_type, const double in_distance);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckBattleResult(const ERaceBattleResult in_result, const double in_battle_time, const int32 in_num_wining_streak, const int32 in_total_draw_num, const bool is_tire_life_zero, const int32 in_wall_hit_times, const bool in_rival_is_taxi, const bool in_is_player_kei, const bool is_rival_1st_win, const int32 in_num_of_win_kei);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckActionTimes(const EAchievementsKind in_check_type, const int32 in_current_times);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> Check(const FSUserInfo& in_user_info, const TArray<EAchievementsKind> in_check_kinds);
    
};

