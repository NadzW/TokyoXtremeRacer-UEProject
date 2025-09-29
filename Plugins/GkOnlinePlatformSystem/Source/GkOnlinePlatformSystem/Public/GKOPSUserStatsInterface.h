#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EGkOPSAchievementClearStatus.h"
#include "GKOPSUserStatsInterface.generated.h"

UINTERFACE(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGKOPSUserStatsInterface : public UInterface {
    GENERATED_BODY()
};

class GKONLINEPLATFORMSYSTEM_API IGKOPSUserStatsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetStatsInt32(const FString& APIName, const int32 Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetStatsFloat(const FString& APIName, const float Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetAllStats(const bool bIsAchievementToo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetAchievement(const FString& APIName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetStatsInt32(const FString& APIName, int32& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetStatsFloat(const FString& APIName, float& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAchivementProgress(const FString& APIName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGkOPSAchievementClearStatus GetAchievementStatus(const FString& APIName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EarnAchievement(const FString& APIName);
    
};

