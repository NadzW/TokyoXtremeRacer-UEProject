#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAchievementsPlatform.h"
#include "EDispMessage.h"
#include "ESkillTreeType.h"
#include "EVehicleTuneKind.h"
#include "EVehicleTuneLevel.h"
#include "EVersion.h"
#include "SAchievementsIdsForPlatform.h"
#include "SControllerSetting.h"
#include "SRaceBattleResultInfo.h"
#include "SSBVersion.h"
#include "SSkillAccessInfo.h"
#include "SSkillTree.h"
#include "SUserInfo.h"
#include "GameInfoGameInstanceSubsystem.generated.h"

class UAchievementsManager;
class UDataTable;
class ULicensePlateGenerator;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UGameInfoGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVersion Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBVersion SBVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULicensePlateGenerator* LicensePlateGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSControllerSetting ControllerSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLogoLicensePlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedVibrationStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementsManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAchievementsPlatform UseAchievementPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTreeType, FSSkillAccessInfo> SkillAccessInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDispMessage DispMessage;
    
    UGameInfoGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void SkillSetup(const UDataTable* in_root_datatableconst, const FName in_category, const bool in_exe_empty);
    
    UFUNCTION(BlueprintCallable)
    void SetupAchievemet(UDataTable* data_table, const bool in_achievementinfo_reflect_to_userinfo, FSUserInfo& in_user_info, const TMap<EVehicleTuneKind, EVehicleTuneLevel> in_max_tune_levels, const UDataTable* rival_data_table);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedVibrationStop(const bool in_is_forced_stop);
    
    UFUNCTION(BlueprintCallable)
    void SetDispMessage(const EDispMessage in_message_type);
    
    UFUNCTION(BlueprintCallable)
    EVersion GetVersion(FName& out_number);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillInfo(const ESkillTreeType in_type, const int32 in_level, FSSkillTree& out_info);
    
    UFUNCTION(BlueprintCallable)
    FSSBVersion GetSBVersion();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSBRevision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForcedVibrationStop() const;
    
    UFUNCTION(BlueprintCallable)
    EDispMessage GetDispMessage();
    
    UFUNCTION(BlueprintCallable)
    void ClearDispMessage();
    
    UFUNCTION(BlueprintCallable)
    void CheckPlatformAchievement(const TArray<FSAchievementsIdsForPlatform> in_check_achievements);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSAchievementsIdsForPlatform> CheckBattleResultForAchievement(const FSRaceBattleResultInfo in_result, const bool in_is_player_kei, const int32 in_num_wining_streak, const int32 in_total_draw_num, const bool in_is_tire_life_zero, const int32 in_num_of_win_kei);
    
};

