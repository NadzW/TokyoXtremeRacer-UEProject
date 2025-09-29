#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SRivalIntervalGroupInfo.h"
#include "RivalIntervalManager.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URivalIntervalManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, double> GroupUpdateTimers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> GroupMemberNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> RivalGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSRivalIntervalGroupInfo> GroupInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupMumMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDebugDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateGroup;
    
    URivalIntervalManager();

    UFUNCTION(BlueprintCallable)
    int32 Update(const double in_dt, double& out_dt);
    
    UFUNCTION(BlueprintCallable)
    void Init(const double in_update_time, const int32 in_group_num_max, const bool in_debug_disp);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetGroupRivalIds(const int32 in_group_id);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteRival(const int32 in_rival_id);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRival(const int32 in_rival_id);
    
};

